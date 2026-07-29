#include "resistor_color_trio.h"
#include <math.h>
#include <stdio.h>


resistor_value_t color_code(resistor_band_t colors[3]){

    resistor_value_t value;

    // if (colors[2] == BLACK || colors[2] == BROWN || colors[2] == RED){
    //     value.unit = OHMS ;
    // }
    // else if (colors[2] == ORANGE || colors[2] == YELLOW || colors[2] == GREEN){
    //     value.unit = KILOOHMS;
    // }
    // else if (colors[2] == BLUE || colors[2] == VIOLET || colors[2] == GREY){
    //     value.unit = MEGAOHMS;
    // }
    // else {
    //     value.unit = GIGAOHMS;
    // }
    //
    // if (value.unit == OHMS){
    uint64_t temp_value = ((int)colors[0] * 10 + (int)colors[1]) * pow(10, (int)colors[2]);

    int num_of_zeros = 0;
    uint64_t temp_value_2 = temp_value;

    if (temp_value == 0){
        value.value = 0;
        value.unit = OHMS;
        return value;
    }
    while (temp_value_2 % 10 == 0) {
        temp_value_2 /= 10;
        num_of_zeros += 1;
    }
    if (num_of_zeros < 3){
        value.unit = OHMS;
        value.value = temp_value;
    }
    else if (num_of_zeros < 6){
        value.unit = KILOOHMS;
        value.value = temp_value / 1000;
    }
    else if (num_of_zeros < 9){
        value.unit = MEGAOHMS;
        value.value = temp_value /  1000000;
    }
    else {
        value.unit = GIGAOHMS;
        value.value = temp_value / 1000000000;
    }

    // }

    return value;
}
