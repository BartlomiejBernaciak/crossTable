/*
 * SPDX-FileCopyrightText: 2010-2022 Espressif Systems (Shanghai) CO LTD
 *
 * SPDX-License-Identifier: CC0-1.0
 */

#include <stdio.h>
#include <inttypes.h>
#include "sdkconfig.h"
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "esp_chip_info.h"
#include "esp_flash.h"
#include "esp_system.h"
#include "esp_log.h"
#include "string.h"
#include "joy.h"

/**
e will get back to you as soon as possible.
 * @brief This is takk responsable for displaying menu on the screen
 *
 *
 *
 */

void lcd_task(){

}
/**
    *   this will be task function that  is respononcability to 
    *   @brief - 
    *
    */
    
void joy_task(){
    static const char *TAG = "JOY_TASK";
    ESP_LOGI(TAG,"STARTING JOY TASK");

     
    while(1){
            
        ESP_LOGI(TAG,"working");
        vTaskDelay(100);
                 
    }


}

static const char *TAG = "Main";

joy_h joy;

void app_main(void)
{
    ESP_LOGI(TAG, "Starting controler");
    joy_init(&joy);
    xTaskCreate(joy_task,"JOY_TASK",2048,NULL,0,0);      

}
