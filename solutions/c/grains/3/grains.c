#include "grains.h"
#include "math.h"

uint64_t square(uint8_t square){
    return pow(2, square - 1);
}

uint64_t total(void){
    return pow(2, 64) - 1;
}
