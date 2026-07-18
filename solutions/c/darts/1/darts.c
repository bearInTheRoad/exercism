#include "darts.h"

static float calc_distance(coordinate_t pos){
    return (pos.x * pos.x + pos.y * pos.y);
}

int score(coordinate_t pos){
    float distance = calc_distance(pos);
    if (distance <= 1){
        return 10;
    }
    else if (distance <= 25){
        return 5;
    }
    else if (distance <= 100){
        return 1;
    }
    else {
        return 0;
    }
}

