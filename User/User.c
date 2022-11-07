#include "User.h"
#include "math.h"
#include <stdio.h>

bool WRITE_FLAG = false;
int nCount = 0;

void HAL_GPIO_EXTI_Callback(uint16_t GPIO_Pin)
{
    // Toggle LED
    HAL_GPIO_TogglePin(GPIOA, GPIO_PIN_5);

    // Tell main to write monitor
    if(!WRITE_FLAG){
        WRITE_FLAG = true;
        nCount++;
    }
}

void BtnPush(void)
{


}

void User_Display()
{
    if(WRITE_FLAG){
        int32_t len = snprintf(NULL, 0, "%d", nCount);
        char *str = malloc(len + 1);
        snprintf(str, len + 1, "%d", nCount);
        ILI9341_Draw_String(20, 120, MAGENTA, BLACK, str, 2);
        free(str);

        WRITE_FLAG = false;
    }

}