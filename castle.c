/*
** EPITECH PROJECT, 2019
** castle.c
** File description:
** Puigsagur
*/

#include "include/my.h"

void check_castle_more(data_t *data)
{
    if (data->y == 3 && data->x == 3 && data->hero->pos.y >= 1050)
        data->hero->pos.y -= 5;
}

void check_castle(data_t *data)
{
    if (data->key == 1 && data->y == 1 && data->x == 1 \
    && data->hero->pos.y == 260 && data->hero->pos.x > 930 \
    && data->hero->pos.x < 990) {
        data->y = 3;
        data->x = 3;
        data->hero->pos.y = 1030;
        data->col = can_move(data);
    }
    check_castle_more(data);
}
