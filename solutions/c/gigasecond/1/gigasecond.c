#include "gigasecond.h"
#include <stdio.h>
#include <math.h>

void gigasecond(time_t input, char *output, size_t size){
    
    time_t new_time = input + pow(10, 9);

    struct tm *new_utc_time = gmtime(&new_time);

    strftime(output, size, "%Y-%m-%d %H:%M:%S", new_utc_time);
}
