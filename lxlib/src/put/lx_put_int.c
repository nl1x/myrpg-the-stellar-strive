/*
** EPITECH PROJECT, 2023
** lib
** File description:
** lx_put_int.c
** Author: nathan.jeannot@epitech.eu
*/

#include "lx_lib.h"

static
int count_digits(int nb)
{
    int nb_digits = 0;

    do {
        nb_digits++;
        nb /= 10;
    } while (nb != 0);
    return nb_digits;
}

static
void put_nbr(int nb, int nb_digits)
{
    for (int i = nb_digits; i >= 1; i--)
        lx_put_char('0' + lx_int_getdigit(nb, i));
}

int lx_put_int(int nb)
{
    int nb_digits;
    int neg_nb = (nb < 0);

    if (neg_nb) {
        lx_put_char('-');
        nb = -nb;
    }
    nb_digits = count_digits(nb);
    put_nbr(nb, nb_digits);
    return nb_digits + neg_nb;
}
