/*
** EPITECH PROJECT, 2018
** my_str_to_word_array.c
** File description:
** Puigsagur
*/

#include <stdlib.h>

char ** my_str_two(char **dest, char *str)
{
    int i = 0;
    int d = 0;
    int j = 0;
    for (; str[i] != '\0'; i++, j++) {
        if (str[i] == '\n') {
            dest[d][j] = '\0';
            d++;
            j = 0;
            i++;
        }
        dest[d][j] = str[i];
    }
    return (dest);
}

char **my_str_to_word_array(char *str)
{
    int i = 0;
    int j = 0;
    int d = 0;
    char **dest;

    for (; str[j] != '\0'; j++) {
        if (str[j] == '\n')
            d++;
    }
    d++;
    for (; str[i] != '\n'; i++);
    dest = malloc(sizeof(char *) * (d+1));
    dest[d] = NULL;
    for (int z = 0; z < d; z++) {
        dest[z] = malloc(sizeof(char) * i + 1);
    }
    dest = my_str_two(dest, str);
    return (dest);
}
