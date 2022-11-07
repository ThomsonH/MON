#include "display.h"
#include "ILI9341.h"
//#include "ironman.h"

void Display_Image(void)
{
    // Set the rotation that fit this image
    ILI9341_Set_Rotation(0);

    // Draw image to LCD
    //uint64_t k = 0;
    //for(uint32_t i = 0; i < 240 ; i++)
    //    for(uint32_t j = 0; j < 320; j++)
    //        ;//ILI9341_Draw_Pixel(i, j, ironman[k++]);
}

void Display_Text()
{
    // Refresh background to black
    ILI9341_Set_Rotation(3);
    ILI9341_Fill_Screen(BLACK);
    HAL_Delay(500);

    // Draw border for the menu
    ILI9341_Draw_Empty_Rectangle(YELLOW, 10, 30, 310, 230);

    // Write something
    ILI9341_Draw_String(20, 40, WHITE, BLACK, "Hello World", 2);

	ILI9341_Draw_String(20, 60, GREEN, BLACK, "Demo aplication for display", 2);

	ILI9341_Draw_String(20, 80, BLUE, BLACK, "Copy from GitHub ", 2);

	ILI9341_Draw_String(20, 100, RED, BLACK, "    Thompson    ", 2);

}


void Display_Color_Image(void)
{


}