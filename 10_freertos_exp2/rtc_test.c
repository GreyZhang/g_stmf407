#include "rtc_test.h"

// RTC_HandleTypeDef hrtc;

void rtc_test_100ms_task(void *argument)
{
    for (;;)
    {
        printf("rtc 100ms test task\n");
        osDelay(1000);
    }
}
