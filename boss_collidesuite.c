/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2018
** File description:
** my.h
*/

#include "include/my.h"

void boss_collidesuite(data_t *data, boss_t *boss)
{
    if (data->hero->pos.x > boss->pos.x - 30 && \
    data->hero->pos.x < boss->pos.x + 130 && \
    data->hero->pos.y < boss->pos.y + 30 && \
    data->hero->pos.y > boss->pos.y - 30) {
        data->hero->pv--;
        data->hero->pos.x += 157 - data->boss->div;
    } else if (data->hero->pos.x < boss->pos.x + 30 && \
        data->hero->pos.x > boss->pos.x - 157 && \
        data->hero->pos.y < boss->pos.y + 30 && \
        data->hero->pos.y > boss->pos.y - 30) {
        data->hero->pv--;
        data->hero->pos.x -= 130 - data->boss->div;
    }
}
