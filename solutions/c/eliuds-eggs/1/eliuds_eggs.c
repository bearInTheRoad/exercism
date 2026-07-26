#include "eliuds_eggs.h"

unsigned int egg_count(unsigned int number){
    unsigned int res = 0;
    while (number != 0){
        res += number % 2;
        number /= 2;
    }
    return res;
}
