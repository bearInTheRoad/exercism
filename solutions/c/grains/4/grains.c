#include "grains.h"
#include "math.h"

uint64_t square(uint8_t square){
    if (square <= 0){
        return 0;
    }
    if (square > 64){
        return 0;
    }
    return 1ULL<<(square - 1);
}

uint64_t total(void){
    uint64_t out = 0;
    for (int i = 1; i <= 64; i++){
        out += square(i);
    }
    return out;
}
