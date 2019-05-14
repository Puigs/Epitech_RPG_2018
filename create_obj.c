/*
** EPITECH PROJECT, 2019
** create_obj.c
** File description:
** Puigsagur
*/

#include "include/my.h"

void create_slime(data_t *data, sfVector2f pos)
{
    data->ennemy->sprite = sfSprite_create();
    data->ennemy->texture = \
    sfTexture_createFromFile("layers/shime1.png", NULL);
    data->ennemy->pos.x = pos.x;
    data->ennemy->pos.y = pos.y;
    data->ennemy->pv = 5;
    data->ennemy->div = 0;
    data->ennemy->a = 0;
    sfSprite_setTexture(data->ennemy->sprite, data->ennemy->texture, sfTrue);
}

mob_t *create_mob(const char *path, sfVector2f pos, sfIntRect rect, int life)
{
    mob_t *mob = malloc(sizeof(mob_t));

    mob->texture = sfTexture_createFromFile(path, NULL);
    mob->sprite = sfSprite_create();
    sfSprite_setTexture(mob->sprite, mob->texture, sfTrue);
    mob->pos.x = pos.x;
    mob->pos.y = pos.y;
    mob->pv = life;
    mob->a = 0;
    sfSprite_setPosition(mob->sprite, mob->pos);
    mob->rect = rect;
    sfSprite_setTextureRect(mob->sprite, mob->rect);
    return (mob);
}

map_t *create_map(const char *path_to_spritesheet, sfVector2f pos, \
    sfIntRect rect, int *nb)
{
    map_t *map = malloc(sizeof(map_t));

    map->texture = sfTexture_createFromFile(path_to_spritesheet, NULL);
    map->sprite = sfSprite_create();
    sfSprite_setTexture(map->sprite, map->texture, sfTrue);
    map->position = pos;
    sfSprite_setPosition(map->sprite, map->position);
    map->rect = rect;
    sfSprite_setTextureRect(map->sprite, map->rect);
    map->top = nb[0];
    map->right = nb[1];
    map->bot = nb[2];
    map->left = nb[3];
    return (map);
}

inv_t *create_key(const char *path_to_spritesheet, sfVector2f pos, \
    sfIntRect rect)
{
    inv_t *key = malloc(sizeof(inv_t));

    key->texture = sfTexture_createFromFile(path_to_spritesheet, NULL);
    key->sprite = sfSprite_create();
    sfSprite_setTexture(key->sprite, key->texture, sfTrue);
    key->pos = pos;
    sfSprite_setPosition(key->sprite, key->pos);
    key->rect = rect;
    sfSprite_setTextureRect(key->sprite, key->rect);
    key->y = 0;
    key->x = 0;
    return (key);
}

obj_t *create_obj(const char *path_to_spritesheet, sfVector2f pos, \
    sfIntRect rect)
{
    obj_t *obj = malloc(sizeof(obj_t));

    obj->texture = sfTexture_createFromFile(path_to_spritesheet, NULL);
    obj->sprite = sfSprite_create();
    sfSprite_setTexture(obj->sprite, obj->texture, sfTrue);
    obj->position = pos;
    sfSprite_setPosition(obj->sprite, obj->position);
    obj->rect = rect;
    sfSprite_setTextureRect(obj->sprite, obj->rect);
    return (obj);
}
