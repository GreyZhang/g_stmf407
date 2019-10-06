#include "iwdg_lld.h"

extern IWDG_HandleTypeDef hiwdg;

void iwdg_lld_step(void)
{
    HAL_IWDG_Refresh(&hiwdg);
}

