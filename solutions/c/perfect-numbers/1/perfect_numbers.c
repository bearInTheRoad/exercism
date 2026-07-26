#include "perfect_numbers.h"

kind classify_number(int number){
    if (number <= 0){
        return ERROR;
    }
    int i = 1;
    int alot = 0;
    for (; i < number; i++){
        if (number % i == 0){
            alot += i;
        }
    }
    if (alot == number){
        return PERFECT_NUMBER;
    }
    else if (alot > number){
        return ABUNDANT_NUMBER;
    }
    else {
        return DEFICIENT_NUMBER;
    }
}
