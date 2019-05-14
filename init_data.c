/*
** EPITECH PROJECT, 2019
** init_data.c
** File description:
** Puigsagur
*/

#include "include/my.h"

void init_data_more(data_t *data)
{
    data->key = 0;
    data->inv = malloc(sizeof(obj_t));
    data->inv[0] = create_obj("layers/inv.png", (sfVector2f){1700, 30}, \
    (sfIntRect){0, 0, 130, 130});
    data->key_inv = malloc(sizeof(obj_t));
    data->key_inv[0] = create_obj("layers/key.png", (sfVector2f){1700, 30}, \
    (sfIntRect){0, 0, 113, 111});
    data->key1 = malloc(sizeof(inv_t));
    data->key1[0] = create_key("layers/key1.png", (sfVector2f){800, 400}, \
    (sfIntRect){0, 0, 40, 35});
    data->col = can_move(data);
}

void init_data(data_t *data)
{
    data->y = 2;
    data->x = 1;
    data->l = 0;
    data->i = 0;
    data->s_i = 0;
    data->pnj = 0;
    data->ennemy = malloc(sizeof(mob_t));
    data->hero = malloc(sizeof(hero_t));
    data->pause = 0;
    init_parallax(data);
    create_hero(data->hero);
    init_map(data);
    init_mob(data);
    init_pnj(data);
    init_pnj_save(data);
    init_call_e(data);
    init_call_a(data);
    init_call_cast(data);
    init_data_more(data);
}

void init_map_more(data_t *data)
{
    data->map[1][2] = create_map("layers/map5.png", (sfVector2f){0, 0}, \
    (sfIntRect){0, 0, 1920, 1080}, (int[4]){6, 7 , 0, 8});
    data->map[0][2] = create_map("layers/map6.png", (sfVector2f){0, 0}, \
    (sfIntRect){0, 0, 1920, 1080}, (int[4]){6, 7 , 0, 8});
    data->map[0][1] = create_map("layers/map7.png", (sfVector2f){0, 0}, \
    (sfIntRect){0, 0, 1920, 1080}, (int[4]){6, 7 , 0, 8});
    data->map[0][0] = create_map("layers/map8.png", (sfVector2f){0, 0}, \
    (sfIntRect){0, 0, 1920, 1080}, (int[4]){6, 7 , 0, 8});
    data->map[1][1] = create_map("layers/map9.png", (sfVector2f){0, 0}, \
    (sfIntRect){0, 0, 1920, 1080}, (int[4]){6, 7 , 0, 8});
    data->map[3][3] = create_map("layers/map_final.png", (sfVector2f){0, 0}, \
    (sfIntRect){0, 0, 1920, 1080}, (int[4]){6, 7 , 0, 8});
}

void init_map(data_t *data)
{
    data->map = malloc(sizeof(map_t *) * 6);
    for (int i = 0; i <= 5; i += 1)
        data->map[i] = NULL;
    for (int i = 0; i < 5; i += 1)
        data->map[i] = malloc(sizeof(map_t) * 4);

    data->map[2][1] = create_map("layers/map1.png", (sfVector2f){0, 0}, \
    (sfIntRect){0, 0, 1920, 1080}, (int[4]){1, 2, 4, 5});
    data->map[2][2] = create_map("layers/map2.png", (sfVector2f){0, 0}, \
    (sfIntRect){0, 0, 1920, 1080}, (int[4]){6, 7, 0, 8});
    data->map[1][0] = create_map("layers/map4.png", (sfVector2f){0, 0}, \
    (sfIntRect){0, 0, 1920, 1080}, (int[4]){1, 2 , 4, 5});
    data->map[2][0] = create_map("layers/map3.png", (sfVector2f){0, 0}, \
    (sfIntRect){0, 0, 1920, 1080}, (int[4]){6, 7 , 0, 8});
    init_map_more(data);
}

void init_mob(data_t *data)
{
    create_slime(data, (sfVector2f){500, 500});
    data->mob = malloc(sizeof(mob_t **) * 5);
    for (int i = 0; i <= 4; i += 1)
        data->mob[i] = NULL;
    for (int i = 0; i < 4; i += 1)
        data->mob[i] = malloc(sizeof(mob_t *) * 4);
    init_mob2(data);
    data->boss = boss_creation();
    data->sboss = sboss_creation();
}
