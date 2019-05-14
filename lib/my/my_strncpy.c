/*
** EPITECH PROJECT, 2018
** my_strncpy.c
** File description:
** Puigsagur
*/

char *my_strncpy(char *dest, char const *src, int n)
{
    int i = n;
    int a = 0;

    for (; i > 0; i--, a++)
        dest[a] = src[a];
    dest[a] = '\0';
    return (dest);
}
