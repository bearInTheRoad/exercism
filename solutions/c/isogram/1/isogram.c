#include "isogram.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

bool is_isogram(const char phrase[]){
    if (phrase == NULL) return false;
    if (phrase[0] == '\0') return true;
    char letters[26];
    letters[0] = tolower(phrase[0]);
    int letter_len = 1;

    for (int i=1; phrase[i] != '\0'; i++){
        for (int j = 0; j <= letter_len - 1; j++){
            if (letters[j] == tolower(phrase[i]) && (isalpha(phrase[i]))){
                return false;
            }
        }
        if (isalpha(phrase[i])){
            letters[letter_len] = tolower(phrase[i]);
            letter_len += 1;
        }
    }

    return true;
}
