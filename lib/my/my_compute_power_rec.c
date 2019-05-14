/*
** EPITECH PROJECT, 2018
** my_compute_power_rec.c
** File description:
** Puigsagur
*/

int my_compute_power_rec(int nb, int p)
{
    int t = nb;

    if (p == 0)
        return (1);
    if (nb == 0)
        return (0);
    if (p == 1)
        return (nb);

    if (nb < 0 || nb > 2147483645) {
        return (0);
    }
    else t = t * my_compute_power_rec(nb, p - 1);
    return (t);
}
