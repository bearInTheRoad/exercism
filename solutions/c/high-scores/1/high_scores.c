#include "high_scores.h"
#include <stdlib.h>
#include <string.h>

int32_t latest(const int32_t *scores, size_t scores_len){
    return scores[scores_len - 1];
}

int32_t personal_best(const int32_t *scores, size_t scores_len){
    int i = 0;
    int32_t highest = 0;
    for (; i < (int) scores_len; i++){
        if (scores[i] > highest){
            highest = scores[i];
        }
    }

    return highest;
}

static int cmp_int_desc(const void *a, const void *b){
    int lhs = *(const int *)a;
    int rhs = *(const int *)b;
    if (lhs < rhs) return 1;
    if (rhs < lhs) return -1;
    return 0;
}

size_t personal_top_three(const int32_t *scores, size_t scores_len, int32_t *output){
    
    int32_t *new_scores = malloc(scores_len);
    memcpy(new_scores, scores, scores_len * sizeof(scores[0]));
    qsort(new_scores, scores_len, sizeof(scores[0]), cmp_int_desc);

    int i = 0;
    int max_element = scores_len > 3? 3: scores_len;
    for (;i < max_element; i++){
        output[i] = new_scores[i];
    }
    return max_element;
}

