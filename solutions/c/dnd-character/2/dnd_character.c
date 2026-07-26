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
    int smallest = 6;
    for (;i <= 3; i++){
        n = rand() % 6 + 1; 
        total += n;
        if (smallest > n){
            smallest = n;
        }
    }

    total -= smallest;
    return total;
}

dnd_character_t make_dnd_character(void){
    dnd_character_t new_character;

    new_character.strength = ability();
    new_character.dexterity = ability();
    new_character.constitution = ability();
    new_character.intelligence = ability();
    new_character.wisdom = ability();
    new_character.charisma = ability();

    new_character.hitpoints = 10 + modifier(new_character.constitution);

    return new_character;
}
