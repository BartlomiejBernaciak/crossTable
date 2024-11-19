#ifndef JOY_H
#define JOY_H

#include "inttypes.h"

#define ADC_X_PIN 36
#define ADC_Y_PIN 37
#define ADC_Z_PIN 38
    
#define ADC_TRIGGER_PIN 25
#define ADC_LEFT_PIN 26
#define ADC_RIGHT_PIN 27
#define ADC_SIDE_PIN 32
#define ADC_ARROW_UP_PIN 35
#define ADC_ARROW_DOWN_PIN 34
#define ADC_ARROW_RIGHT_PIN 38
#define ADC_ARROW_LEFT_PIN 39

typedef struct{
    uint16_t axies;
    uint8_t buttons;
}joy_frame;

typedef struct{
    uint16_t axies[3];
    uint8_t buttons;
    void *getAxis;
    void *getButtons;
    void (*sendData)(joy_frame *);
}joy_h;

void joy_process(joy_h *h);
void joy_init(joy_h *h);


#endif
