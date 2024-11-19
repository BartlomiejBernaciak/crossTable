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
#include "esp_adc/adc_continuous.h"    

static const char *TAG = "JOY_C";


void gpio_init(){
 
    ESP_LOGI(TAG,"initialing GPIO for joy");
    uint64_t buttons[] = {ADC_TRIGGER_PIN, ADC_LEFT_PIN, ADC_RIGHT_PIN, \
                          ADC_SIDE_PIN, ADC_ARROW_UP_PIN, ADC_ARROW_DOWN_PIN,\
                          ADC_ARROW_RIGHT_PIN, ADC_ARROW_LEFT_PIN};
    
    gpio_config_t config = {
            .intr_type= GPIO_INTR_DISABLE,
            .mode = GPIO_MODE_INPUT,
            .pull_up_en = 0,
            .pull_down_en = 0,
            .pin_bit_mask = 0,
    };
    for(uint8_t i = 0; i<8;i++){
       
        config.pin_bit_mask |= (1ULL << buttons[i]);
    }
    
    gpio_config(&config);
}


void adc_init(){

    ESP_LOGI(TAG,"initialing adc for joy");
    adc_continuous_config_t adc_config = {
        

    };



}



void joy_init(joy_h *h){

    gpio_init();
    adc_init();


}
