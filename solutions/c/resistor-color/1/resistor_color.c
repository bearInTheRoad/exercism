#include "resistor_color.h"

int color_code(resistor_band_t color){
    return (int)color;
}

resistor_band_t *colors(void){
    static resistor_band_t colors[10];
    for (int i = 0; i < 10; i++){
        colors[i] = (resistor_band_t)i;
    }
    return colors;
}
