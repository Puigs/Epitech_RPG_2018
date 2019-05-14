/*
** EPITECH PROJECT, 2019
** parsing_coll_more.c
** File description:
** Puigsagur
*/

#include "include/my.h"

void call_hmovement(data_t *data)
{
    if (data->hero->seconds > 0.007) {
        if (sfKeyboard_isKeyPressed(sfKeyZ) && data->hero->att == 0)
            up_side(data);
        if (sfKeyboard_isKeyPressed(sfKeyS) && data->hero->att == 0)
            down_side(data);
        if (sfKeyboard_isKeyPressed(sfKeyD) && data->hero->att == 0)
            right_side(data);
        if (sfKeyboard_isKeyPressed(sfKeyQ) && data->hero->att == 0)
            left_side(data);
    }
}

int **can_move_more1(data_t *data, int **coll)
{
    if (data->y == 0) {
        if (data->x == 2)
            coll = create_coll("layers/map6.json");
        if (data->x == 1)
            coll = create_coll("layers/map7.json");
        if (data->x == 0)
            coll = create_coll("layers/map8.json");
    }
    return (coll);
}

int **can_move_more(data_t *data, int **coll)
{
    if (data->y == 3) {
        if (data->x == 3)
            coll = create_coll("layers/salleduboss.json");
    }
    if (data->y == 1) {
        if (data->x == 0)
            coll = create_coll("layers/map4.json");
        if (data->x == 2)
            coll = create_coll("layers/map5.json");
        if (data->x == 1)
            coll = create_coll("layers/mapchateau.json");
    }
    coll = can_move_more1(data, coll);
    return (coll);
}
