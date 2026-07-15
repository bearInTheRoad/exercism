#include "collatz_conjecture.h"

int steps(int start){
    int step = 0;
    if (start <= 0){
        return ERROR_VALUE;
    }
    for (; start > 1; step++){
        start = start %2 == 0? start / 2 : start * 3 + 1;
    }
    return step;
}
