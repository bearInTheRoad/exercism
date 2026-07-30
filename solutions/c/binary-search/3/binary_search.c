#include "binary_search.h"
#include <stdio.h>

const int *binary_search(int value, const int *arr, size_t length){

    int left = 0;
    int right = ((int) length) - 1;

    while ((left <= right) && (right - left != 1)) {
        int ptr = (left + right ) / 2;
        if (value > arr[ptr]){
            left = ptr + 1;
        }
        else if (value < arr[ptr]){
            right = ptr - 1;
        }
        else {
            return &arr[ptr];
        }
    }

    return NULL;
}
