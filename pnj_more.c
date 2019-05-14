/*
** EPITECH PROJECT, 2019
** pnj_more.c
** File description:
** Puigsagur
*/

#include "include/my.h"

void init_pnj_text(data_t *data)
{
    data->d_pnj[0].texte = "Hi to you traveler";
    data->d_pnj[1].texte = "I have a favor to ask of you";
    data->d_pnj[2].texte = "There is a monster who took possesion\n \
    of the castle";
    data->d_pnj[3].texte = "Please release this monster";
    data->d_pnj[4].texte = "and save us";
    data->d_pnj[5].texte = "(You do not have a choice bro";
    data->d_pnj[6].texte = "Hum hum...";
    data->d_pnj[7].texte = "You need the key before going to\n \
    the castle";
    data->d_pnj[8].texte = "Be careful, a monster keeps";
    data->d_pnj[9].texte = "Kill the mosnter";
    data->d_pnj[10].texte = "Do you have the key";
}

void init_pnj_more(data_t *data)
{
    data->d_pnj = malloc(sizeof(button_t) * 11);
    for (int i = 0; i < 11; i += 1) {
        data->d_pnj[i].texture = sfTexture_createFromFile(bubble, NULL);
        data->d_pnj[i].sprite = sfSprite_create();
        sfSprite_setTexture(data->d_pnj[i].sprite, \
        data->d_pnj[i].texture, sfTrue);
        data->d_pnj[i].text = sfText_create();
        data-> d_pnj[i].fonte =  sfFont_createFromFile \
        ("layers/BohemianTypewriter.ttf");
        data->d_pnj[i].pos.x = 1920 / 2 - (512 / 2);
        data->d_pnj[i].pos.y = 600;
        sfSprite_setPosition(data->d_pnj[i].sprite, data->d_pnj[i].pos);
        data->d_pnj[i].clock = sfClock_create();
    }
}
