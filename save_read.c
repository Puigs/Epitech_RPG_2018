/*
** EPITECH PROJECT, 2019
** save_read.c
** File description:
** Puigsagur
*/

#include "include/my.h"

void save_read5(data_t *data, size_t p, FILE *tt)
{
    p = fread(&data->key1[0]->pos.y, 4, 1, tt);
    if (p == 0)
        return;
    p = fread(&data->key1[0]->pos.x, 4, 1, tt);
    if (p == 0)
        return;
    p = fread(&data->key1[0]->y, 4, 1, tt);
    if (p == 0)
        return;
    p = fread(&data->key1[0]->x, 4, 1, tt);
    if (p == 0)
        return;
    p = fread(&data->sboss->stat, 4, 1, tt);
    if (p == 0)
        return;
    p = fread(&data->sboss->pv, 4, 1, tt);
    if (p == 0)
        return;
}

void save_read4(data_t *data, size_t p, FILE *tt)
{
    p = fread(&data->mob[1][0][2]->pv, 4, 1, tt);
    if (p == 0)
        return;
    p = fread(&data->mob[2][0][0]->pv, 4, 1, tt);
    if (p == 0)
        return;
    p = fread(&data->mob[2][2][0]->pv, 4, 1, tt);
    if (p == 0)
        return;
    p = fread(&data->key, 4, 1, tt);
    if (p == 0)
        return;
    save_read5(data, p, tt);
}

void save_read3(data_t *data, size_t p, FILE *tt)
{
    p = fread(&data->hero->pv, 4, 1, tt);
    if (p == 0)
        return;
    p = fread(&data->hero->att, 4, 1, tt);
    if (p == 0)
        return;
    p = fread(&data->mob[0][2][0]->pv, 4, 1, tt);
    if (p == 0)
        return;
    p = fread(&data->mob[0][2][1]->pv, 4, 1, tt);
    if (p == 0)
        return;
    p = fread(&data->mob[1][0][0]->pv, 4, 1, tt);
    if (p == 0)
        return;
    p = fread(&data->mob[1][0][1]->pv, 4, 1, tt);
    if (p == 0)
        return;
    save_read4(data, p, tt);
}

void save_read2(data_t *data, size_t p, FILE *tt)
{
    p = fread(&data->i, 4, 1, tt);
    if (p == 0)
        return;
    p = fread(&data->s_i, 4, 1, tt);
    if (p == 0)
        return;
    p = fread(&data->pnj, 4, 1, tt);
    if (p == 0)
        return;
    p = fread(&data->pause, 4, 1, tt);
    if (p == 0)
        return;
    p = fread(&data->hero->pos.y, 4, 1, tt);
    if (p == 0)
        return;
    p = fread(&data->hero->pos.x, 4, 1, tt);
    if (p == 0)
        return;
    save_read3(data, p, tt);
}

void save_read(data_t *data)
{
    FILE *tt = fopen(".save", "r");
    size_t p = 0;

    if (!tt)
        return;
    p = fread(&data->y, 4, 1, tt);
    if (p == 0)
        return;
    p = fread(&data->x, 4, 1, tt);
    if (p == 0)
        return;
    p = fread(&data->l, 4, 1, tt);
    if (p == 0)
        return;
    p = fread(&data->i, 4, 1, tt);
    if (p == 0)
        return;
    save_read2(data, p, tt);
    fclose(tt);
}
