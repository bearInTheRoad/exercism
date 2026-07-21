#include "hamming.h"
#include <stdio.h>

int compute(const char *lhs, const char *rhs){
    int cnter = 0;
    for (; lhs && rhs; lhs++, rhs++){
        if (&lhs != &rhs){
            cnter += 1;
        }
    }

    if (!lhs || !rhs){
        return -1;
    }

    return cnter;
}

