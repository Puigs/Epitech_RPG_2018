/*
** EPITECH PROJECT, 2019
** rpgmenu
** File description:
** hero.h
*/

#include "my.h"

typedef struct hero_s {
    sfSprite *sprite;
    sfTexture *texture;
    sfIntRect rect;
    sfVector2f pos;
    sfClock *clock;
    sfTime timer;
    float seconds;
    sfClock *clock2;
    sfTime timer2;
    float seconds2;
    int pv;
    int att;
    sfText *text;
    sfFont *fonte;
    sfText *text2;
}hero_t;

void create_hero(hero_t *hero);
void print_hero(hero_t *hero, sfRenderWindow *window);
