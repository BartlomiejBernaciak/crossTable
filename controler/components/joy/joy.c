#include "joy.h"
#include <stdio.h>
#include <inttypes.h>
#include "sdkconfig.h"
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "esp_chip_info.h"
#include "esp_system.h"
#include "esp_log.h"
#include "driver/gpio.h"
#include "driver/adc.h"
    

static const char *TAG = "JOY_C"


void gpio_init(){
 ESP_LOG_INFO(TAG,"initialing GPIO for joy");




}


void joy_init(joy_h *h){

    gpio_init();
    adc_init();


}
