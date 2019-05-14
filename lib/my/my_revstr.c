/*
** EPITECH PROJECT, 2018
** my_revstr.c
** File description:
** Puisgagur
*/

char *my_revstr(char *str)
{
    int i = 0;
    int c = 0;
    char j;

    while (str[c] != '\0')
        c++;
    c = c - 1;
    for (; i < c; i++, c--) {
        j = str[i];
        str[i] = str[c];
        str[c] = j;
    }
    return (str);
}
