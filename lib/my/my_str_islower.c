/*
** EPITECH PROJECT, 2018
** my_str_islower.c
** File description:
** Puigsagur
*/

int my_str_islower(char const *str)
{
    int i = 0;

    while (str[i] >= 'a' && str[i] <= 'z')
        i++;
    if (str[i] == '\0')
        return (1);
    if (str[i] != '\0')
        return (0);
}
