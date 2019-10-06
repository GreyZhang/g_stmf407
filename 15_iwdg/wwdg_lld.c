#include "wwdg_lld.h"
#include "stdio.h"


#if USE_WWDG
extern WWDG_HandleTypeDef hwwdg;

/* HAL_StatusTypeDef     HAL_WWDG_Refresh(WWDG_HandleTypeDef *hwwdg); */

void wwdg_lld_feed_wdg(void)
{
    printf("feed dog!\n\r");
    HAL_WWDG_Refresh(&hwwdg);
}
#endif
