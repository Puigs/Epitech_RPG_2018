/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2018
** File description:
** no_save
*/

#include "include/my.h"

void check_save(data_t *data)
{
    FILE *tt = fopen(".save", "r");

    if (!tt) {
        data->save = 1;
        return;
    }
    data->save = 0;
    fclose(tt);
}

void no_save(data_t *data)
{
    int a = 1;
    sfText *text = sfText_create();
    sfFont *fonte = sfFont_createFromFile("layers/BohemianTypewriter.ttf");

    while (a == 1) {
        sfText_setString(text, "no save found.");
        sfText_setFont(text, fonte);
        sfText_setCharacterSize(text, 60);
        sfText_setPosition(text, (sfVector2f){753, 700});
        sfRenderWindow_clear(data->screen->window, \
        sfColor_fromRGB(0, 255, 255));
        if (sfKeyboard_isKeyPressed(sfKeyEscape))
            a = 0;
        move_parallax(data);
        draw_para(data);
        sfRenderWindow_drawText(data->screen->window, text, NULL);
        sfRenderWindow_display(data->screen->window);
    }
}

void game_over(data_t *data)
{
    sfText *text = sfText_create();
    sfFont *fonte = sfFont_createFromFile("layers/BohemianTypewriter.ttf");
    sfClock *clock = sfClock_create();
    sfTime timer = sfClock_getElapsedTime(clock);
    float seconds = timer.microseconds / 1000000.0;

    while (seconds < 5.0) {
        timer = sfClock_getElapsedTime(clock);
        seconds = timer.microseconds / 1000000.0;
        sfText_setString(text, "GAME OVER!!!!");
        sfText_setFont(text, fonte);
        sfText_setCharacterSize(text, 60);
        sfText_setPosition(text, (sfVector2f){753, 700});
        sfRenderWindow_clear(data->screen->window, \
        sfColor_fromRGB(0, 255, 255));
        move_parallax(data);
        draw_para(data);
        sfRenderWindow_drawText(data->screen->window, text, NULL);
        sfRenderWindow_display(data->screen->window);
    }
}

void victory(data_t *data)
{
    sfText *text = sfText_create();
    sfFont *fonte = sfFont_createFromFile("layers/BohemianTypewriter.ttf");
    sfClock *clock = sfClock_create();
    sfTime timer = sfClock_getElapsedTime(clock);
    float seconds = timer.microseconds / 1000000.0;

    while (seconds < 5.0) {
        timer = sfClock_getElapsedTime(clock);
        seconds = timer.microseconds / 1000000.0;
        sfText_setString(text, "VICTORY!!!!");
        sfText_setFont(text, fonte);
        sfText_setCharacterSize(text, 60);
        sfText_setPosition(text, (sfVector2f){753, 700});
        sfRenderWindow_clear(data->screen->window, \
        sfColor_fromRGB(0, 255, 255));
        move_parallax(data);
        draw_para(data);
        sfRenderWindow_drawText(data->screen->window, text, NULL);
        sfRenderWindow_display(data->screen->window);
    }
}
