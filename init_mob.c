/*
** EPITECH PROJECT, 2019
** init_mob.c
** File description:
** Puigsagur
*/

#include "include/my.h"

void init_mob_more(data_t *data)
{
    data->mob[2][0] = malloc(sizeof(mob_t) * 2);
    data->mob[2][0][0] = create_mob(slime, \
    (sfVector2f){400, 200}, (sfIntRect){0, 0, 114, 77}, 5);
    data->mob[2][0][1] = NULL;
    data->mob[2][2] = malloc(sizeof(mob_t) * 2);
    data->mob[2][2][0] = create_mob(slime, \
    (sfVector2f){1000, 400}, (sfIntRect){0, 0, 114, 77}, 5);
    data->mob[2][2][1] = NULL;
    data->mob[0][0] = malloc(sizeof(mob_t));
    data->mob[0][0][0] = NULL;
    data->mob[0][1] = malloc(sizeof(mob_t));
    data->mob[0][1][0] = NULL;
    data->mob[1][1] = malloc(sizeof(mob_t));
    data->mob[1][1][0] = NULL;
    data->mob[3][3] = malloc(sizeof(mob_t));
    data->mob[3][3][0] = NULL;
}

void init_mob2(data_t *data)
{
    data->mob[2][1] = malloc(sizeof(mob_t));
    data->mob[2][1][0] = NULL;
    data->mob[0][2] = malloc(sizeof(mob_t) * 4);
    data->mob[0][2][0] = create_mob(slime, \
    (sfVector2f){1000, 500}, (sfIntRect){0, 0, 114, 77}, 5);
    data->mob[0][2][1] = create_mob(slime, \
    (sfVector2f){800, 500}, (sfIntRect){0, 0, 114, 77}, 5);
    data->mob[0][2][2] = NULL;
    data->mob[1][2] = malloc(sizeof(mob_t));
    data->mob[1][2][0] = NULL;
    data->mob[1][0] = malloc(sizeof(mob_t) * 4);
    data->mob[1][0][0] = create_mob(slime, \
    (sfVector2f){800, 500}, (sfIntRect){0, 0, 114, 77}, 5);
    data->mob[1][0][1] = create_mob(slime, \
    (sfVector2f){400, 200}, (sfIntRect){0, 0, 114, 77}, 5);
    data->mob[1][0][2] = create_mob(slime, \
    (sfVector2f){600, 400}, (sfIntRect){0, 0, 114, 77}, 5);
    data->mob[1][0][3] = NULL;
    init_mob_more(data);
}
