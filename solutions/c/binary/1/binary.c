#include "binary.h"
#include <math.h>
#include <string.h>
#include <stdio.h>

int convert(const char *input){
    int num = 0;
    int n = strlen(input);
    for (int i = 0; input[i] != '\0'; i++){
       if ((input[i] - '0' != 1) && (input[i] - '0' != 0)){
            return -1;
       }
       num = num + (input[i] - '0') * pow(2, n - i - 1);
    }

    return num;
}
