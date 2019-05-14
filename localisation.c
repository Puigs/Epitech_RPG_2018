/*
** EPITECH PROJECT, 2019
** localisation.c
** File description:
** Puigsagur
*/

#include "include/my.h"

void check_localisation_more(data_t *data)
{
    if (data->hero->pos.x <= 0) {
        data->x -= 1;
        if (data->x == -1) {
            data->hero->pos.x += 5;
            data->x = 0;
            return;
        }
        data->hero->pos.x = 1850;
        data->col = can_move(data);
    } else if (data->hero->pos.x >= 1850) {
        data->x += 1;
        if (data->x == 3) {
            data->hero->pos.x -= 5;
            data->x = 2;
            return;
        }
        data->hero->pos.x = 50;
        data->col = can_move(data);
    }
}

void check_localisation(data_t *data)
{
    if (data->hero->pos.y <= 0) {
        data->y -= 1;
        if (data->y == -1) {
            data->hero->pos.y += 5;
            data->y = 0;
            return;
        }
        data->hero->pos.y = 950;
        data->col = can_move(data);
    } else if (data->hero->pos.y >= 1050) {
        data->y += 1;
        if (data->y == 3) {
            data->hero->pos.y -= 5;
            data->y = 2;
            return;
        }
        data->hero->pos.y = 50;
        data->col = can_move(data);
    }
    check_localisation_more(data);
}
