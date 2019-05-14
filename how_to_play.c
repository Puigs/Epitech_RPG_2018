/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2018
** File description:
** how to play
*/

#include "include/my.h"

void my_events(sfRenderWindow *window, data_t *data)
{
    while (sfRenderWindow_pollEvent(window, &data->screen->event)) {
        if (data->screen->event.type == sfEvtClosed)
            sfRenderWindow_close(window);
    }
}

void print_show(button_t *menu, sfRenderWindow *window)
{
    sfVector2f pos;

    for (int a = 0; a < 4; a++) {
        pos.y = 636 + a * 100;
        pos.x = 860;
        print_show_more(menu, a);
        if (a == 1)
            pos.x = 800;
        if (a == 2) {
            pos.y = 610 + a * 100;
            pos.x = 800;
        }
        if (a == 3) {
            pos.y = 620 + a * 100;
            pos.x = 770;
        }
        sfText_setPosition(menu[a].text, pos);
        sfRenderWindow_drawText(window, menu[a].text, NULL);
    }
}

void init_how_text(button_t *menu)
{
    menu[1].texte = "click for drop";
    menu[2].texte = "movement:  z\n qsd";
    menu[0].texte = "HOW TO PLAY";
    menu[3].texte = "press space to attack";
}

button_t *createhow(void)
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
    init_how_text(menu);
    return (menu);
}

void how_to_play(data_t *data)
{
    int a = 1;
    button_t *sprite = createhow();

    while (a == 1) {
        move_parallax(data);
        draw_para(data);
        sprite = print_sprite2(data->screen->window, sprite);
        print_show(sprite, data->screen->window);
        if (sfKeyboard_isKeyPressed(sfKeyEscape))
            a = 0;
        sfRenderWindow_display(data->screen->window);
    }
}
