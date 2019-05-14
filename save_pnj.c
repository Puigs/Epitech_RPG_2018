/*
** EPITECH PROJECT, 2019
** save_pnj.c
** File description:
** Puigsagur
*/

#include "include/my.h"

void init_pnj_save(data_t *data)
{
    init_pnj_save_more(data);
    data->s_pnj[0].texte = "Bonjour jeune homme";
    data->s_pnj[1].texte = "Je suis le lutin de sauvegarde";
    data->s_pnj[2].texte = "Veux-tu sauvegarder ta partie?";
    data->s_pnj[3].texte = "Si oui, appuie sur la touche A";
    data->s_pnj[4].texte = "Ta partie est sauvegardée";
    for (int i = 0; i < 5; i += 1) {
        data->s_pnj[i].pos.x += 6;
        sfText_setString(data->s_pnj[i].text, data->s_pnj[i].texte);
        sfText_setFont(data->s_pnj[i].text, data->s_pnj[i].fonte);
        sfText_setCharacterSize(data->s_pnj[i].text, 30);
        sfText_setPosition(data->s_pnj[i].text, data->s_pnj[i].pos);
    }
}

void draw_s_dial(data_t *data)
{
    if (data->s_i == 4)
        data->s_i = 2;
    if (data->s_i == 0 && data->y == 2 && data->x == 1 \
    && data->hero->pos.y > 770 && data->hero->pos.y < 860 \
    && data->hero->pos.x > 950 && data->hero->pos.x < 1170 \
    && data->screen->event.key.code == sfKeyE) {
        draw_s_dial_more(data);
        sfRenderWindow_drawSprite(data->screen->window, \
        data->s_pnj[data->s_i].sprite, NULL);
        sfRenderWindow_drawText(data->screen->window, \
        data->s_pnj[data->s_i].text, NULL);
    }
}
