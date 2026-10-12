//#############################################################################
//
// FILE:   main.c
//
// TITLE:  CPUTimer0 10kHz interrupt - LED toggle (driverlib only)
//
//#############################################################################

//
// Included Files
//
// F28x_Project.h(bitfield 지원 헤더)는 쓰지 않음.
// EALLOW/EDIS/EINT/DINT/ERTM/NOP 등은 driverlib.h -> cpu.h 에 이미 정의돼 있음
#include "driverlib.h"
#include "device.h"

//
// CPUTimer0 인터럽트 주기 (10kHz = 100us마다 1번씩 호출됨)
// 참고: ISR에서 매번 "토글"하므로, 실제 LED 핀에 나오는 사각파 주파수는
//       절반인 5kHz가 됨 (On->Off 한 사이클에 토글이 2번 필요하기 때문).
//       핀 출력 자체를 10kHz로 만들고 싶다면 TIMER0_PERIOD_US를 50us(20kHz)로.
//
// #define TIMER0_PERIOD_US   100.0f   // 100us = 10kHz 인터럽트
#define TIMER0_PERIOD_US   500000
//
// Function Prototypes
//
void timer0_init(void);
__interrupt void timer0_isr(void);

//
// Globals
//
volatile uint32_t g_isrCnt;   // 디버거 Expressions에서 10kHz로 잘 도는지 확인용

//
// Main
//
void main(void)
{
    // ① 시스템 클록/워치독/페리퍼럴 클록 초기화
    Device_init();

    // ② GPIO 설정 잠금 해제 + 미사용 핀 풀업
    Device_initGPIO();
    
    // ③ LED 핀을 출력으로 설정
    GPIO_setPinConfig(DEVICE_GPIO_CFG_LED2);              // GPIO34, 일반 GPIO 기능
    GPIO_setPadConfig(DEVICE_GPIO_PIN_LED2, GPIO_PIN_TYPE_STD);  // 출력이므로 풀업 disable
    GPIO_setDirectionMode(DEVICE_GPIO_PIN_LED2, GPIO_DIR_MODE_OUT);
    GPIO_writePin(DEVICE_GPIO_PIN_LED2, 0);               // 초기 상태 Off

    // ④ 인터럽트 모듈/벡터 테이블 초기화
    Interrupt_initModule();
    Interrupt_initVectorTable();

    // ⑤ CPUTimer0을 10kHz(100us)로 설정
    timer0_init();

    // ⑥ ISR 등록 및 인터럽트 enable
    Interrupt_register(INT_TIMER0, &timer0_isr);
    Interrupt_enable(INT_TIMER0);

    Interrupt_enableGlobal();   // 전역 인터럽트 enable (EINT와 동일)
    ERTM;                        // 실시간 디버그 인터럽트 enable

    // ⑦ CPUTimer0 시작 -> 이 시점부터 100us마다 timer0_isr() 호출됨
    CPUTimer_startTimer(CPUTIMER0_BASE);

    while(1)
    {
        // LED 토글은 timer0_isr() 안에서 10kHz로 일어남
        NOP;
    }
}

//
// timer0_init - CPUTimer0을 TIMER0_PERIOD_US(100us, 10kHz)로 설정
//
void timer0_init(void)
{
    uint32_t periodCount;

    // period count = SYSCLK(Hz) / 1,000,000 * 주기(us)
    periodCount = (uint32_t)((float)DEVICE_SYSCLK_FREQ / 1000000.0f * TIMER0_PERIOD_US);

    CPUTimer_setPeriod(CPUTIMER0_BASE, periodCount);
    CPUTimer_setPreScaler(CPUTIMER0_BASE, 0);   // fclk은 SYSCLKOUT 그대로 사용 (분주 없음)

    CPUTimer_stopTimer(CPUTIMER0_BASE);
    CPUTimer_reloadTimerCounter(CPUTIMER0_BASE);
    CPUTimer_setEmulationMode(CPUTIMER0_BASE,
                               CPUTIMER_EMULATIONMODE_STOPAFTERNEXTDECREMENT);

    CPUTimer_enableInterrupt(CPUTIMER0_BASE);
    // CPUTimer_startTimer()는 main()에서 인터럽트 enable 이후에 호출함
}

//
// timer0_isr - 100us(10kHz)마다 호출, LED 핀 토글
//
__interrupt void timer0_isr(void)
{
    GPIO_togglePin(DEVICE_GPIO_PIN_LED2);

    g_isrCnt++;

    // PIE 그룹1 인터럽트 처리 완료를 알림 (다음 TIMER0 인터럽트를 받기 위해 필수)
    Interrupt_clearACKGroup(INTERRUPT_ACK_GROUP1);
}

//
// End of File
//
