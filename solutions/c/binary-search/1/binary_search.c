#include "binary_search.h"

const int *binary_search(int value, const int *arr, size_t length){

    for (int i = 0; i < (int) length; i++){
        if (arr[i] == value){
            return &arr[i];
        }
    }

    return NULL;
}
