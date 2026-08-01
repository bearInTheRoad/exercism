#include "robot_simulator.h"
#include <stdio.h>

robot_status_t robot_create(robot_direction_t direction, int x, int y){
    robot_status_t status;
    robot_position_t position;
    position.x = x;
    position.y = y;
    status.direction = direction;
    status.position = position;

    return status;
}
void robot_move(robot_status_t *robot, const char *commands){
    
    int i = 0;
    for (; commands[i] != '\0'; i++){
        if (commands[i] == 'L'){
            (*robot).direction = ((*robot).direction + DIRECTION_MAX - 1) % DIRECTION_MAX;
        }
        else if (commands[i] == 'R'){
            (*robot).direction = ((*robot).direction + 1) % DIRECTION_MAX;
        }

        else if (commands[i] == 'A'){
            if ((*robot).direction == DIRECTION_EAST){
                (*robot).position.x += 1;
            }
            else if ((*robot).direction == DIRECTION_WEST){
                (*robot).position.x -= 1;
            }
            else if ((*robot).direction == DIRECTION_NORTH){
                (*robot).position.y += 1;
            }
            else {
                (*robot).position.y -= 1;
            }
        }
    }
}
