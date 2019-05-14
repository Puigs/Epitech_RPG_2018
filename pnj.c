/*
** EPITECH PROJECT, 2019
** pnj->c
** File description:
** Puigsagur
*/

#include "include/my.h"

void init_pnj(data_t *data)
{
    init_pnj_more(data);
    init_pnj_text(data);
    for (int i = 0; i < 11; i += 1) {
        data->d_pnj[i].pos.x += 6;
        sfText_setString(data->d_pnj[i].text, data->d_pnj[i].texte);
        sfText_setFont(data->d_pnj[i].text, data->d_pnj[i].fonte);
        sfText_setCharacterSize(data->d_pnj[i].text, 30);
        sfText_setPosition(data->d_pnj[i].text, data->d_pnj[i].pos);
    }
}

void draw_dial_more(data_t *data)
{
    data->d_pnj[data->i].timer = sfClock_getElapsedTime \
    (data->d_pnj[data->i].clock);
    data->d_pnj[data->i].seconds = data->d_pnj[data->i]. \
    timer.microseconds / 1000000;
    if (data->d_pnj[data->i].seconds > 2) {
        data->i += 1;
        if (data->i == 10) {
            data->pnj = 2;
            return;
        }
        sfClock_restart(data->d_pnj[data->i].clock);
    }
}

void draw_dial(data_t *data)
{
    if (data->pnj == 0 && data->hero->pos.y > 450 && data->hero->pos.y < 600 \
    && data->hero->pos.x > 900 && data->hero->pos.x < 1100 && \
    data->screen->event.key.code == sfKeyE && data->y == 1 && \
    data->x == 2)
        data->pnj = 1;
    if (data->pnj == 1 && data->hero->pos.y > 450 && data->hero->pos.y < 600 \
    && data->hero->pos.x > 900 && data->hero->pos.x < 1100 && data->y == 1 \
    && data->x == 2 && data->i < 10) {
        draw_dial_more(data);
        sfRenderWindow_drawSprite(data->screen->window, \
        data->d_pnj[data->i].sprite, NULL);
        sfRenderWindow_drawText(data->screen->window, \
        data->d_pnj[data->i].text, NULL);
    }
}

void draw_dial2(data_t *data)
{
    if (data->pnj == 2 && data->i == 10 && data->hero->pos.y > 450 && \
    data->hero->pos.y < 600 && data->hero->pos.x > 900 && \
    data->hero->pos.x < 1100 && data->screen->event.key.code == sfKeyE && \
    data->y == 1 && data->x == 2) {
        data->d_pnj[10].timer = sfClock_getElapsedTime(data->d_pnj[10].clock);
        data->d_pnj[10].seconds = data->d_pnj[10].timer.microseconds / 1000000;
        if (data->d_pnj[data->i].seconds > 2) {
            sfClock_restart(data->d_pnj[data->i].clock);
        }
        sfRenderWindow_drawSprite(data->screen->window, \
        data->d_pnj[10].sprite, NULL);
        sfRenderWindow_drawText(data->screen->window, \
        data->d_pnj[10].text, NULL);
    }
}
