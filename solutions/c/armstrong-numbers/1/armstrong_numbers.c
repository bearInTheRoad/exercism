#include "armstrong_numbers.h"
#include <math.h>
#include <stdio.h>

bool is_armstrong_number(int candidate){
    int i = 0;
    int total = 0;
    int temp_candidate_1 = candidate;
    while (temp_candidate_1 > 0){
        i++;
        temp_candidate_1 /= 10;
    }
    int temp_candidate_2 = candidate;
    int last_digit;
    while (temp_candidate_2 > 0){
        last_digit = temp_candidate_2 % 10;
        total += pow(last_digit, i);
        temp_candidate_2 /= 10;
    }

    return total == candidate;
}
