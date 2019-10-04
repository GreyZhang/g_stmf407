#include "rtc_test.h"

RTC_HandleTypeDef hrtc;
RTC_TimeTypeDef hacking_test_time;
RTC_DateTypeDef hacking_test_date;

void rtc_test_1000ms_task(void)
{
#if BCD_MODE
    HAL_RTC_GetTime(&hrtc, &hacking_test_time, RTC_FORMAT_BCD);
    HAL_RTC_GetDate(&hrtc, &hacking_test_date, RTC_FORMAT_BCD);
    printf("%02x:%02x:%02x\n\r", hacking_test_time.Hours, hacking_test_time.Minutes, hacking_test_time.Seconds);
#else
    HAL_RTC_GetTime(&hrtc, &hacking_test_time, RTC_FORMAT_BIN);
    HAL_RTC_GetDate(&hrtc, &hacking_test_date, RTC_FORMAT_BIN);
    printf("%02d:%02d:%02d\n\r", hacking_test_time.Hours, hacking_test_time.Minutes, hacking_test_time.Seconds);
#endif
}

void rtc_test_init(void)
{
#if BCD_MODE
    hacking_test_time.Hours = 0x20;
    hacking_test_time.Minutes = 0x50;
    hacking_test_time.Seconds = 0x00;
    HAL_RTC_SetTime(&hrtc, &hacking_test_time, RTC_FORMAT_BCD);
    hacking_test_date.Year = 0x19U;
    hacking_test_date.Month = RTC_MONTH_SEPTEMBER;
    hacking_test_date.Date = 0x25;
    hacking_test_date.WeekDay = RTC_WEEKDAY_WEDNESDAY;
    HAL_RTC_SetDate(&hrtc, &hacking_test_date, RTC_FORMAT_BCD);
    printf("          %02x-%02x-%02x  week:%x\n\r", hacking_test_date.Year, hacking_test_date.Month, hacking_test_date.Date, hacking_test_date.WeekDay);
#else
    hacking_test_time.Hours = 20;
    hacking_test_time.Minutes = 50;
    hacking_test_time.Seconds = 0;
    HAL_RTC_SetTime(&hrtc, &hacking_test_time, RTC_FORMAT_BIN);
    hacking_test_date.Year = 19U;
    hacking_test_date.Month = 9;
    hacking_test_date.Date = 25;
    hacking_test_date.WeekDay = RTC_WEEKDAY_WEDNESDAY;
    HAL_RTC_SetDate(&hrtc, &hacking_test_date, RTC_FORMAT_BIN);
    printf("          %02d-%02d-%02d  week:%d\n\r", hacking_test_date.Year, hacking_test_date.Month, hacking_test_date.Date, hacking_test_date.WeekDay);
#endif
}