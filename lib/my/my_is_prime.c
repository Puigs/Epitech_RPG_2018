/*
** EPITECH PROJECT, 2018
** my_is_prime.c
** File description:
** Puigsagur
*/

int my_is_prime(int nb)
{
    int a = 2;

    while (a < nb) {
        if (nb% a > 0) {
            return (1);
        } else {
            return (0);
        }
    a++;
    }

    if (nb == 1)
    return (0);
    if (nb == 2)
    return (1);
}
