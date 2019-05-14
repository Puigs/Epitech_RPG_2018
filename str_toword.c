/*
** EPITECH PROJECT, 2018
** PSU_my_sokoban_2018
** File description:
** str to word array
*/
#include "include/my.h"

char **countmy_z(char *test, char z)
{
    int i = 0;
    int a = 0;
    char **sort;

    for (;test[i] != '\0'; i++) {
        if (test[i] == z)
            a++;
    }
    sort = malloc(sizeof(char *) * (a + 2));
    for (int b = 0; b != a; b++)
        sort[b] = NULL;
    return (sort);
}

int is_break(char *str, int i, int *brack)
{
    if (str[i] == '\0' || str[i] == '\n') {
        *brack = 1;
        return (1);
    }
    return (0);
}

char **removel(char **str)
{
    for (int a = 0; str[a]; a++)
    {
        if (str[a][0] == '\0') {
            str[a] = NULL;
            break;
        }
    }
    return (str);
}

char **str_toword(char *str, char z)
{
    int nb = 0;
    char **array = NULL;
    if (str == NULL)
        return NULL;
    for (int i = 0; str[i] != 0; i += 1) {
        if (str[i] == z && str[i + 1] == z && str[i + 2] == 0)
            continue;
        if (str[i] == z && str[i + 1] == 0)
            continue;
        if (str[i] == z)
            nb += 1;
    }
    nb += 1;
    array = str_to_word(array, str, nb, z);
    return (array);
}
