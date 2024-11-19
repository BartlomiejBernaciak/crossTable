#ifndef JOY_H
#define JOY_H

#include "inttypes.h"

typedef enum{ 
    x_axis,
    y_axis,
    z_axis,
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
