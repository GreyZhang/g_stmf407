/* Includes ------------------------------------------------------------------*/
#include "main.h"
#include "cmsis_os.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */
#include "stdio.h"
#include "rtc_test.h"
/* USER CODE END Includes */


void key_scan_func_10ms(void)
{
    static GPIO_PinState key_state_last = GPIO_PIN_SET;
    static GPIO_PinState key_state = GPIO_PIN_SET;

    key_state = HAL_GPIO_ReadPin(GPIOE, GPIO_PIN_4);

    if((GPIO_PIN_RESET == key_state) && (GPIO_PIN_SET == key_state_last))
    {
        /* already judge for debance */
        printf("key0 is pressed!\n\r");
    }
    else
    {
        printf("key0 is not pressed!\n\r");
    }

    key_state_last = key_state;
}
