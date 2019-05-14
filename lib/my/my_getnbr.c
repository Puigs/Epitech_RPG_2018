/*
** EPITECH PROJECT, 2018
** my_get_nbr.c
** File description:
** Puigsagur
*/

#include <stdio.h>

int my_getnbr(char const *str)
{
    int i = 0;
    int j = 0;
    int k = 1;
    int n = 1;
    int nb = 0;

    while (str[i] == '+' || str[i] == '-') {
        if (str[i] == '-')
            n = n * -1;
        i++;
    }
    j = i;
    while (str[j] >= 48 && str[j] <= 57)
        j++;
    while (i <= j - 1) {
        nb = nb + (str[j - 1] - 48) * k;
        k = k * 10;
        j--;
    }
    return (nb * n);
}
