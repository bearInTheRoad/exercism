#include "resistor_color_duo.h"

uint16_t color_code(resistor_band_t bands[]){
    resistor_band_t band_1 = bands[0];
    resistor_band_t band_2 = bands[1];

    return band_1 * 10 + band_2;
}
