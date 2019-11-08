#ifndef _U8G_ARM_H
#define _U8G_ARM_H

#include "u8g/u8g.h"
#include "stm32f1xx_hal.h"


#define SPI_HANDLER hspi2 // use your SPI hadler
extern SPI_HandleTypeDef SPI_HANDLER;
#define DC GPIO_PIN_7
#define RST GPIO_PIN_6
#define CS GPIO_PIN_5
#define PORTB GPIOB

uint8_t u8g_com_hw_spi_fn(u8g_t *u8g, uint8_t msg, uint8_t arg_val,
		void *arg_ptr);

#endif
