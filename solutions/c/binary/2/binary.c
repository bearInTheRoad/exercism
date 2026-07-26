#include "binary.h"
#include <math.h>
#include <string.h>
#include <stdio.h>

int convert(const char *input){
    int res = 0;
    for (char* c = (char *)input; *c != '\0'; c++){
        if ((*c != '1') && (*c != '0')) return -1;
        res = res * 2 + (*c == '0' ? 0: 1);
    }

    return res;
}
