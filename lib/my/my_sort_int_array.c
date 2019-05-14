/*
** EPITECH PROJECT, 2018
** my_sort_int_array.c
** File description:
** Puigsagur
*/

#include <stdio.h>

char *my_put_sort(int *array, int i, int j)
{
    int c;

    if (array[i] > array[j]) {
        c = array[i];
        array[i] = array[j];
        array[j] = c;
    }
}

void my_sort_int_array(int *array, int size)
{
    int i = 0;
    int j = i;
    char c;

    while (i < size) {
        while (j < size) {
            my_put_sort(array, i, j);
            j++;
        }
        i++;
        j = i + 1;
    }
}
