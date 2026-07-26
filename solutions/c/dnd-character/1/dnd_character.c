#include "dnd_character.h"
#include <math.h>
#include <stdlib.h>

int modifier(int score){
    return floor((score - 10) / 2.0);
}

int ability(void){
    int i = 0;
    int n;
    int total = 0;
    int smallest = 0;
    for (;i <= 4; i++){
        n = rand() % 6 + 1; 
        total += n;
        if (smallest > n){
            smallest = n;
        }
    }

    total -= smallest;
    return total;
}
