#include "rna_transcription.h"
#include <string.h>
#include <stdlib.h>

char *to_rna(const char *dna){
    size_t n = strlen(dna);
    char *rna = malloc(n + 1);
    for (int i = 0; dna[i] != '\0'; i++){
        if (dna[i] == 'G'){
            rna[i] = 'C';
        }
        else if (dna[i] == 'C'){
            rna[i] = 'G';
        }
        else if (dna[i] == 'T'){
            rna[i] = 'A';
        }
        else {
            rna[i] = 'U';
        }
    }
    return rna;
}
