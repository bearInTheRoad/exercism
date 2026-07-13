#include "difference_of_squares.h"

unsigned int square_of_sum(unsigned int num){
    int total = 0;
    for (unsigned int i = 1; i <= num; i++){
        total += i;
    }
    return total * total;
}

unsigned int sum_of_squares(unsigned int num){
    int total = 0;
    for (unsigned int i = 1; i <= num; i++){
        total += i * i;
    }
    return total;
}

unsigned int difference_of_squares(unsigned int num){
    unsigned int total_square_of_sum = square_of_sum(num);
    unsigned int total_sum_of_squares = sum_of_squares(num);
    return total_square_of_sum - total_sum_of_squares;
}
