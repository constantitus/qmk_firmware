#pragma once

#include_next <mcuconf.h>

#undef STM32_SERIAL_USE_USART1
#define STM32_SERIAL_USE_USART1 TRUE

// For backlight
// #undef STM32_PWM_USE_TIM2
// #define STM32_PWM_USE_TIM2 TRUE

#undef STM32_SPI_USE_SPI2
#define STM32_SPI_USE_SPI2 FALSE

