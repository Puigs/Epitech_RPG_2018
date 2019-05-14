/*
** EPITECH PROJECT, 2019
** call_e.c
** File description:
** Puigsgaur
*/

#include "include/my.h"

void call_e_more(data_t *data)
{
    if (data->key == 0 && data->sboss->stat == 1 \
    && data->key1[0]->y == data->y && \
    data->key1[0]->x == data->x) {
        sfRenderWindow_drawSprite(data->screen->window, \
        data->call_e->sprite, NULL);
        sfRenderWindow_drawText(data->screen->window, \
        data->call_e->text, NULL);
    }
}

void call_e(data_t *data)
{
    if (data->hero->pos.y > 450 && data->hero->pos.y < 600 \
    && data->hero->pos.x > 900 && data->hero->pos.x < 1100 && data->y == 1 \
    && data->x == 2) {
        sfRenderWindow_drawSprite(data->screen->window, \
        data->call_e->sprite, NULL);
        sfRenderWindow_drawText(data->screen->window, \
        data->call_e->text, NULL);
    }
    call_e_more(data);
}

void init_text_e(data_t *data)
{
    data->call_e->texte = "Press E to interact.";
    data->call_e->pos.x += 15;
    sfText_setString(data->call_e->text, data->call_e->texte);
    sfText_setFont(data->call_e->text, data->call_e->fonte);
    sfText_setCharacterSize(data->call_e->text, 30);
    sfText_setPosition(data->call_e->text, data->call_e->pos);
}

void init_call_e(data_t *data)
{
    data->call_e = malloc(sizeof(button_t));
    data->call_e->texture = sfTexture_createFromFile(bubble, NULL);
    data->call_e->sprite = sfSprite_create();
    sfSprite_setTexture(data->call_e->sprite, \
    data->call_e->texture, sfTrue);
    data->call_e->text = sfText_create();
    data-> call_e->fonte =  sfFont_createFromFile \
    ("layers/BohemianTypewriter.ttf");
    data->call_e->pos.x = 10;
    data->call_e->pos.y = 800;
    sfSprite_setPosition(data->call_e->sprite, data->call_e->pos);
    data->call_e->clock = sfClock_create();
    init_text_e(data);
}
