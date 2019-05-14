/*
** EPITECH PROJECT, 2019
** call_a.c
** File description:
** Puigsagur
*/

#include "include/my.h"

void call_a(data_t *data)
{
    if (data->hero->pos.y > 770 && data->hero->pos.y < 860 \
    && data->hero->pos.x > 950 && data->hero->pos.x < 1170 && data->y == 2 \
    && data->x == 1) {
        sfRenderWindow_drawSprite(data->screen->window, \
        data->call_a->sprite, NULL);
        sfRenderWindow_drawText(data->screen->window, \
        data->call_a->text, NULL);
    }
}

void init_text_a(data_t *data)
{
    data->call_a->texte = "Press a to save.";
    data->call_a->pos.x += 15;
    sfText_setString(data->call_a->text, data->call_a->texte);
    sfText_setFont(data->call_a->text, data->call_a->fonte);
    sfText_setCharacterSize(data->call_a->text, 30);
    sfText_setPosition(data->call_a->text, data->call_a->pos);
}

void init_call_a(data_t *data)
{
    data->call_a = malloc(sizeof(button_t));
    data->call_a->texture = sfTexture_createFromFile(bubble, NULL);
    data->call_a->sprite = sfSprite_create();
    sfSprite_setTexture(data->call_a->sprite, \
    data->call_a->texture, sfTrue);
    data->call_a->text = sfText_create();
    data-> call_a->fonte =  sfFont_createFromFile \
    ("layers/BohemianTypewriter.ttf");
    data->call_a->pos.x = 10;
    data->call_a->pos.y = 900;
    sfSprite_setPosition(data->call_a->sprite, data->call_a->pos);
    data->call_a->clock = sfClock_create();
    init_text_a(data);
}
