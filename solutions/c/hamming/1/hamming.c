#include "hamming.h"
#include <stdio.h>

int compute(const char *lhs, const char *rhs){
    int i = 0;
    int cnter = 0;

    while ((lhs[i] != '\0') || (rhs[i] != '\0')){
        if (lhs[i] != rhs[i]){
            cnter += 1;
        }
        if (((lhs[i] != '\0') && (rhs[i] == '\0')) ||
            ((lhs[i] == '\0') && (rhs[i] != '\0'))){
            return -1;
        }
        i += 1;
    }

    return cnter;
}

