/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2018
** File description:
** collide
*/

#include "include/my.h"

int my_strlen_tab(char **tab)
{
    int a = 0;

    for (; tab[a]; a++);
    return (a);
}

int *linec(char *mline)
{
    char **test = str_toword(mline, ',');
    int *line = malloc(sizeof(int) * my_strlen_tab(test));

    for (int a = 0; test[a]; a++) {
        line[a] = my_getnbr(test[a]);
    }
    return (line);
}

int **create_coll(char *mname)
{
    struct stat file;
    FILE *fd = fopen(mname, "r");
    char **line;
    int **tab;
    char *test;

    stat(mname, &file);
    test = malloc(sizeof(char) * (file.st_size + 1));
    test[fread(test, 1, file.st_size, fd)] = 0;
    line = str_toword(test, '\n');
    tab = malloc(sizeof(int *) * my_strlen_tab(line));
    for (int a = 0; line[a]; a++)
        tab[a] = linec(line[a]);
    fclose(fd);
    free(test);
    free(line);
    return (tab);
}

int **can_move(data_t *data)
{
    int **coll;

    if (data->y == 2) {
        if (data->x == 0)
            coll = create_coll("layers/map3.json");
        if (data->x == 1)
            coll = create_coll("layers/map1.json");
        if (data->x == 2)
            coll = create_coll("layers/map2.json");
    }
    coll = can_move_more(data, coll);
    return (coll);
}

int can_movee(data_t *data)
{
    int stock_x = 0;
    int stock_y = 0;

    stock_x = (data->mob[data->y][data->x][data->l]->pos.x + 11) / 16;
    stock_y = (data->mob[data->y][data->x][data->l]->pos.y + 13) / 16;
    if (data->mob[data->y][data->x][data->l]->pos.y > 0 && \
        data->mob[data->y][data->x][data->l]->pos.x > 0) {
        if (data->col[stock_y][stock_x] == 1) {
            return (0);
        }
    }
    return (1);
}
