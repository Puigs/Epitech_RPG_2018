/*
** EPITECH PROJECT, 2018
** my_strstr.c
** File description:
** Puigsagur
*/

#include <stdlib.h>

char *my_strstr(char *str, char const *to_find)
{
    int a = 0;
    int b = 0;

    while (str[a] != '\0') {
        a = 0;
        b = 0;
        while (str[a] == to_find[b] && to_find[b] != '\0') {
            a++;
            b++;
        }
        if (to_find[b] == '\0') {
            return (str);
        }
        str++;
    }
    return (NULL);
}
