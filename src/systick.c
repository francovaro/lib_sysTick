/*
 *  @file  : systick.c
 *	
 *  @brief	
 *
 *  @author: Francesco Varani
 *  @date  : 13 nov 2020
 */

#include "stm32f4xx.h"
#include "lib_systick.h"

/**
 * @brief Just set the systick period
 * @param time
 */
void libsystick_set_systick(uint32_t time)
{
	 RCC_ClocksTypeDef RCC_Clocks;
	 RCC_GetClocksFreq(&RCC_Clocks);
	 SysTick_Config(RCC_Clocks.HCLK_Frequency/time); // hz/s
}
