#ifndef RTC_TEST_H
#define RTC_TEST_H

#include "main.h"
#include "cmsis_os.h"
#include "stdint.h"
#include "stdio.h"
#include "stm32f4xx_hal_rtc.h"

void rtc_test_1000ms_task(void);
void rtc_test_init(void);

#endif
