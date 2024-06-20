/*
** EPITECH PROJECT, 2023
** lib
** File description:
** lx_int_to_str.c
** Author: nathan.jeannot@epitech.eu
*/

#include "lx_lib.h"

static
long long count_digits(long long nb)
{
    long long nb_digits = 0;

    do {
        nb_digits++;
        nb /= 10;
    } while (nb != 0);
    return nb_digits;
}

static
char *put_nbr(long long nb, long long nb_digits)
{
    char *buf = lx_str_calloc(sizeof(char), 2);
    char int_buf[2] = { 0 };

    if (nb < 0) {
        int_buf[0] = '-';
        buf = lx_str_cat(buf, int_buf);
        nb *= -1;
    }
    for (long long i = nb_digits; i >= 1; i--) {
        int_buf[0] = '0' + lx_int_getdigit(nb, i);
        buf = lx_str_cat(buf, int_buf);
    }
    return buf;
}

char *lx_int_to_str(long long nb)
{
    long long nb_digits;

    nb_digits = count_digits(nb < 0 ? -nb : nb);
    return put_nbr(nb, nb_digits);
}
