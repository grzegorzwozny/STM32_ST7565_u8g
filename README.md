# STM32_ST7565_u8g
Example project created in TrueStudio and CubeMX showing how to use U8glib with STM32 microcontroller. In this project used STM32F103C8T6 (BluePill) and Display COG (Chip-On-Glass) with ST7565 Controller.

The most significants files in this project are u8g_arm.c and u8g_arm.h where definited wrapper for LCD display.

![Image of Yaktocat](https://github.com/Kefirr/STM32_ST7565_u8g/blob/master/stm32-st7565-u8g.jpg)

# Connection ST7565 <-> STM32

ST7565 | BluePill module (STM32F1)
------------ | -------------
GND   |    GND 
VDD   |    3V3
SI    |    B15
SCT   |    B13
A0    |    B7
RST   |    B6
CS    |    B5
