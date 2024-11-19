#ifndef JOY_H
#define JOY_H

#include "inttypes.h"

typedef enum{ 
    x_axis,
    y_axis,
    z_axis,
    w_axis,
    e_axis,
}joy_axis;

typedef enum{
    trigger,
    left,
    rignt,
    side,
    arrow_up,
    arrow_down,
    arrow_rignt,
    arrow_left,
}joy_btn;

typedef enum {
    WAIT,
    BUTTON_EVENT,
    ADC_UPDATE,

}joy_state;

typedef struct {

    int32_t axis[5];
    uint8_t button[8];     
    void (*process)(joy_state); //adc update and 
    //
}joy_h;

void set_axis(joy_h *h, joy_axis axis);
void get_axis(joy_axis axis);

void get_btn(joy_h *h, joy_btn);
void set_btn(joy_h *h, joy_btn);
void process(joy_state);



#endif
