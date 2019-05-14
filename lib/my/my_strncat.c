/*
** EPITECH PROJECT, 2018
** my_strncat.c
** File description:
** Puigsagur
*/

char *my_strncat(char *dest, char const *src, int nb)
{
    int j = 0;
    int i = 0;
    int n = nb;

    while (dest[i] != '\0')
        i++;
    for (; n > 0; n--, j++, i++)
        dest[i] = src[j];
    dest[i] = '\0';
    return (dest);
}
