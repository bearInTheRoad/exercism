#include "two_fer.h"

void two_fer(char *buffer, char *name){
    int i = 0;
    char *prefix = "One for";
    char *suffix = ", one for me.";
    char *new_name = name? name: "you";
    while (prefix[i] != '\0'){
        buffer[i] = prefix[i];
        i++;
    }
    buffer[i] = ' ';
    i++;
    int j = 0;
    while (new_name[j] != '\0'){
        buffer[i] = new_name[j];
        i++;
        j++;
    }
    int k = 0;
    while (suffix[k] != '\0'){
        buffer[i] = suffix[k];
        i++;
        k++;
    }
    buffer[i] = '\0';
}
