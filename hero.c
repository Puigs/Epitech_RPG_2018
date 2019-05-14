/*
** EPITECH PROJECT, 2019
** rpgmenu
** File description:
** create_hero
*/
// 20 ->
// 32 ^
//    |
// 288 large
// 256 haut

#include "include/my.h"

void print_hero(hero_t *hero, sfRenderWindow *window)
{
    sfSprite_setTexture(hero->sprite, hero->texture, sfTrue);
    sfSprite_setPosition(hero->sprite, hero->pos);
    sfSprite_setTextureRect(hero->sprite, hero->rect);
    sfRenderWindow_drawSprite(window, hero->sprite, NULL);
}

void create_hero(hero_t *hero)
{
    hero->sprite = sfSprite_create();
    hero->texture = sfTexture_createFromFile("layers/nlink.png", NULL);
    hero->rect.top = 0;
    hero->rect.left = 0;
    hero->rect.width = 22;
    hero->rect.height = 26;
    hero->pos.x = 500;
    hero->pos.y = 500;
    hero->pv = 8;
    sfSprite_setScale(hero->sprite, (sfVector2f){1.7, 1.7});
    hero->clock = sfClock_create();
    hero->clock2 = sfClock_create();
    hero->att = 0;
    hero->text = sfText_create();
    hero->fonte = sfFont_createFromFile("layers/BohemianTypewriter.ttf");
    hero->text2 = sfText_create();
}
