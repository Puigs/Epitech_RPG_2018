/*
** EPITECH PROJECT, 2019
** call_cast.c
** File description:
** Puigsagur
*/

#include "include/my.h"

void call_cast(data_t *data)
{
    if (data->hero->pos.y > 250 && data->hero->pos.y < 380 \
    && data->hero->pos.x > 900 && data->hero->pos.x < 1000 && data->y == 1 \
    && data->x == 1 && data->key == 0) {
        sfRenderWindow_drawSprite(data->screen->window, \
        data->cast->sprite, NULL);
        sfRenderWindow_drawText(data->screen->window, \
        data->cast->text, NULL);
    }
}

void init_text_cast(data_t *data)
{
    data->cast->texte = "You need a key to enter.";
    data->cast->pos.x += 15;
    sfText_setString(data->cast->text, data->cast->texte);
    sfText_setFont(data->cast->text, data->cast->fonte);
    sfText_setCharacterSize(data->cast->text, 30);
    sfText_setPosition(data->cast->text, data->cast->pos);
}

void init_call_cast(data_t *data)
{
    data->cast = malloc(sizeof(button_t));
    data->cast->texture = sfTexture_createFromFile(bubble, NULL);
    data->cast->sprite = sfSprite_create();
    sfSprite_setTexture(data->cast->sprite, \
    data->cast->texture, sfTrue);
    data->cast->text = sfText_create();
    data-> cast->fonte =  sfFont_createFromFile \
    ("layers/BohemianTypewriter.ttf");
    data->cast->pos.x = 1920 / 2 - 300;
    data->cast->pos.y = 600;
    sfSprite_setPosition(data->cast->sprite, data->cast->pos);
    data->cast->clock = sfClock_create();
    init_text_cast(data);
}
