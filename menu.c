/*
** EPITECH PROJECT, 2019
** project
** File description:
** menu
*/

#include "include/my.h"

void my_events2(sfRenderWindow *window, data_t *data)
{
    while (sfRenderWindow_pollEvent(window, &data->screen->event)) {
        if (data->screen->event.type == sfEvtClosed)
            sfRenderWindow_close(window);
    }
}

button_t *createmenu(void)
{
    button_t *menu = malloc(sizeof(button_t) * 4);

    for (int a = 0; a < 4; a++) {
        menu[a].sprite = sfSprite_create();
        menu[a].texture = sfTexture_createFromFile("layers/mn.png", NULL);
        menu[a].text = sfText_create();
        menu[a].fonte = sfFont_createFromFile("layers/BohemianTypewriter.ttf");
        menu[a].rect.top = 94;
        menu[a].rect.left = 0;
        menu[a].rect.width = 190;
        menu[a].rect.height = 49;
        menu[a].pos.y = 640 + a * 100;
        menu[a].pos.x = 840;
        sfSprite_setTexture(menu[a].sprite, menu[a].texture, sfTrue);
        sfSprite_setTextureRect(menu[a].sprite, menu[a].rect);
    }
    createmenu_text(menu);
    return (menu);
}

int menu(button_t *sprite, data_t *data)
{
    menu_more(sprite, data);
    if (sprite[0].c == 3)
        return (2);
    if (sprite[0].c == 2)
        how_to_play(data);
    if (sprite[0].c == 1) {
        check_save(data);
        if (data->save == 0) {
            save_read(data);
            return (0);
        }
        no_save(data);
        sprite[0].c = 4;
    }
    if (sprite[0].c == 0) {
        free(sprite);
        return (0);
    }
    return (1);
}
