/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2018
** File description:
** pause
*/

#include "include/my.h"

void my_events3(sfRenderWindow *window, data_t *data)
{
    while (sfRenderWindow_pollEvent(window, &data->screen->event)) {
        if (data->screen->event.type == sfEvtClosed)
            sfRenderWindow_close(window);
    }
}

button_t *createpause(void)
{
    button_t *menu = malloc(sizeof(button_t) * 2);

    for (int a = 0; a < 2; a++) {
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
    menu[0].texte = "MENU";
    menu[1].texte = "EXIT";
    return (menu);
}

void menu_pause_more(data_t *data)
{
    my_events2(data->screen->window, data);
    sfRenderWindow_clear(data->screen->window, sfColor_fromRGB(0, 0, 0));
    sfRenderWindow_drawSprite(data->screen->window, \
    data->map[data->y][data->x]->sprite, NULL);
    print_hero(data->hero, data->screen->window);
}

int menu_pause(button_t *sprite, data_t *data)
{
    sprite[0].c = 3;
    menu_pause_more(data);
    for (int l = 0; data->mob[data->y][data->x][l]; l += 1) {
        if (data->mob[data->y][data->x][l]->pv > 0)
            sfRenderWindow_drawSprite(data->screen->window, \
            data->mob[data->y][data->x][l]->sprite, NULL);
    }
    sprite = print_sprite3(data->screen->window, sprite);
    print_menu2(sprite, data->screen->window);
    print_s2(sprite, data->screen->window);
    sfRenderWindow_display(data->screen->window);
    if (sprite[0].c == 0) {
        return (2);
    }
    if (sprite[0].c == 1) {
        return (4);
    }
    return (1);
}

int bpause(data_t *data, int c)
{
    button_t *sprite = createpause();
    int a = 1;

    while (1) {
        a = menu_pause(sprite, data);
        if (a != 1) {
            free(sprite);
            return (a);
        }
        if (!sfKeyboard_isKeyPressed(sfKeyEscape))
            c = 0;
        if (sfKeyboard_isKeyPressed(sfKeyEscape) && c == 0) {
            a = 3;
            break;
        }
    }
    free(sprite);
    return (0);
}
