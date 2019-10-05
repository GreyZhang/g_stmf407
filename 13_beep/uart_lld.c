#include "uart_lld.h"

USART_HandleTypeDef husart1;

int __io_putchar(int ch)
{
    HAL_USART_Transmit(&husart1, (uint8_t *)&ch, 1, HAL_MAX_DELAY);
    return ch;
}

