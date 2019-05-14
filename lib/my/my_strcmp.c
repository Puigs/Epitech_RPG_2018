/*
** EPITECH PROJECT, 2018
** my_strcmp.c
** File description:
** Puigsagur
*/

int my_strcmp(char const *s1, char const *s2)
{
    int nb;
    int i = 0;

    while (s1[i] != '\0' && s2[i] != '\0') {
        nb = s1[i] - s2[i];
        if (s1[i] == s2[i])
            i++;
        else
            return (nb);
    }
}
