#include "queen_attack.h"

attack_status_t can_attack(position_t white, position_t black){
    if (
        ((white.column == black.column) && (white.row == black.row))
        || (
            ((white.column == 0) && (white.row == 0)) 
            || ((black.column == 0) && (black.row == 0))
        )
    ){
        return INVALID_POSITION;
    }
    return  (white.column == black.column) || 
            (white.row == black.row) || 
            (
                ((white.column - black.column) == (white.row - black.row))
                || (-1 * (white.column - black.column) == (white.row - black.row))
            );
}
