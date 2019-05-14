/*
** EPITECH PROJECT, 2018
** my_str_isupper.c
** File description:
** Puigsagur
*/

int my_str_isupper(char const *str)
{
    int i = 0;

    while (str[i] >= 'A' && str[i] <= 'Z')
        i++;
    if (str[i] == '\0')
        return (1);
    if (str[i] != '\0')
        return (0);
}
