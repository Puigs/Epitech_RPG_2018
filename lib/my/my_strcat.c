/*
** EPITECH PROJECT, 2018
** my_strcat.c
** File description:
** Puigsagur
*/

char *my_strcat(char *dest, char const *src)
{
    int j = 0;
    int i = 0;

    while (dest[i] != '\0') {
        i++;
    }
    while (src[j] != '\0'){
        dest[i] = src[j];
        i++;
        j++;
    }
    dest[i] = '\0';
    return (dest);
}
