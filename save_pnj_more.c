/*
** EPITECH PROJECT, 2019
** save_pnj_more.c
** File description:
** Puigsagur
*/

#include "include/my.h"

void draw_s_dial_more(data_t *data)
{
    data->s_pnj[data->s_i].timer = sfClock_getElapsedTime \
    (data->s_pnj[data->s_i].clock);
    data->s_pnj[data->s_i].seconds = data->s_pnj[data->s_i] \
    .timer.microseconds / 1000000;
    if (data->s_pnj[data->s_i].seconds > 5) {
        data->s_i += 1;
        if (data->s_i == 4) {
            return;
        }
        sfClock_restart(data->s_pnj[data->s_i].clock);
    }
}

void init_pnj_save_more(data_t *data)
{
    data->s_pnj = malloc(sizeof(button_t) * 5);
    for (int i = 0; i < 5; i += 1) {
        data->s_pnj[i].texture = sfTexture_createFromFile(bubble, NULL);
        data->s_pnj[i].sprite = sfSprite_create();
        sfSprite_setTexture(data->s_pnj[i].sprite, \
        data->s_pnj[i].texture, sfTrue);
        data->s_pnj[i].text = sfText_create();
        data-> s_pnj[i].fonte =  sfFont_createFromFile \
        ("layers/BohemianTypewriter.ttf");
        data->s_pnj[i].pos.x = 1920 / 2 - (512 / 2);
        data->s_pnj[i].pos.y = 600;
        sfSprite_setPosition(data->s_pnj[i].sprite, data->s_pnj[i].pos);
        data->s_pnj[i].clock = sfClock_create();
    }
}
