#include "pangram.h"
#include <stdio.h>
#include <ctype.h>

bool is_pangram(const char *sentence){
    if (sentence == NULL){
        return false;
    }
   const char *alphabet = "abcdefghijklmnopqrstuvwxyz";

    int i = 0;
    while (alphabet[i] != '\0'){
        int found = 0;
        int j = 0;
        for (; sentence[j] != '\0'; j++){
            if (alphabet[i] == tolower(sentence[j])){
                i++;
                found = 1;
                break;
            }
        }
        if (found == 0){
            return false;
        }
    }

    return true;
}
