#include "space_age.h"

const int EARTH_YEAR_SECONDS = 31557600;

const float ORBITAL_LIST[] = {
    0.2408467,
    0.61519726,
    1,
    1.8808158,
    11.862615,
    29.447498,
    84.016846,
    164.79132
};

float age(planet_t planet, int64_t seconds){
    if (planet < 0 || planet > 7){
        return -1;
    }
    return (seconds / ORBITAL_LIST[planet]) / EARTH_YEAR_SECONDS;
}
