#include "my_task.h"
#include "stdio.h"

void os_task_1000ms(void *argument)
{
    /* USER CODE BEGIN 5 */
    /* Infinite loop */
    for(;;)
    {
        printf("task 1000ms\n\r");
        // rtc_time_display();
        osDelay(1000);
    }
    /* USER CODE END 5 */ 
}
