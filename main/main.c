/**
 *  @brief     Skeleton for Espressif ESP32 modules. 
 *  
 *  @file      main.c
 *  @author    Hernan Bartoletti - hernan.bartoletti@gmail.com
 *  @copyright MIT License, as described in the file LICENSE attached
 */

#include "freertos/FreeRTOS.h"
#include "esp_event.h"

void app_main(void)
{
    for (;;) 
    {
        vTaskDelay(500 / portTICK_PERIOD_MS);
    }
}

