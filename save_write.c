/*
** EPITECH PROJECT, 2019
** save_write.c
** File description:
** Puigsagur
*/

#include "include/my.h"

void save_write2(data_t *data, FILE *tt)
{
    fwrite(&data->mob[0][2][0]->pv, 4, 1, tt);
    fwrite(&data->mob[0][2][1]->pv, 4, 1, tt);
    fwrite(&data->mob[1][0][0]->pv, 4, 1, tt);
    fwrite(&data->mob[1][0][1]->pv, 4, 1, tt);
    fwrite(&data->mob[1][0][2]->pv, 4, 1, tt);
    fwrite(&data->mob[2][0][0]->pv, 4, 1, tt);
    fwrite(&data->mob[2][2][0]->pv, 4, 1, tt);
    fwrite(&data->key, 4, 1, tt);
    fwrite(&data->key1[0]->pos.y, 4, 1, tt);
    fwrite(&data->key1[0]->pos.x, 4, 1, tt);
    fwrite(&data->key1[0]->y, 4, 1, tt);
    fwrite(&data->key1[0]->x, 4, 1, tt);
    fwrite(&data->sboss->stat, 4, 1, tt);
    fwrite(&data->sboss->pv, 4, 1, tt);
}

void save_write(data_t *data)
{
    FILE *tt = fopen(".save", "w");

    if (!tt)
        return;
    fwrite(&data->y, 4, 1, tt);
    fwrite(&data->x, 4, 1, tt);
    fwrite(&data->l, 4, 1, tt);
    fwrite(&data->i, 4, 1, tt);
    fwrite(&data->i, 4, 1, tt);
    fwrite(&data->s_i, 4, 1, tt);
    fwrite(&data->pnj, 4, 1, tt);
    fwrite(&data->pause, 4, 1, tt);
    fwrite(&data->hero->pos.y, 4, 1, tt);
    fwrite(&data->hero->pos.x, 4, 1, tt);
    fwrite(&data->hero->pv, 4, 1, tt);
    fwrite(&data->hero->att, 4, 1, tt);
    save_write2(data, tt);
    fclose(tt);
}
