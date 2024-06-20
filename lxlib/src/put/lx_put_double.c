/*
** EPITECH PROJECT, 2023
** lib
** File description:
** lx_put_double.c
** Author: nathan.jeannot@epitech.eu
*/

#include "lx_lib.h"

static int put_last_decimal(double nb)
{
    int digit;
    int size = 0;

    nb *= 100;
    digit = lx_int_getdigit(nb, 2);
    size += lx_put_int(digit + (lx_int_getdigit(nb, 1) >= 5));
    return size;
}

int put_decimales(double nb, int precision)
{
    int i = 0;
    int size = 0;
    int digit;

    if (precision <= 0)
        return 0;
    lx_put_char('.');
    while (i < precision - 1) {
        nb *= 10;
        digit = lx_int_getdigit((int) nb, 1);
        size += lx_put_int(digit);
        i++;
    }
    size += put_last_decimal(nb);
    return size + 1;
}

int lx_put_double(double nb, int precision)
{
    int size = 0;

    size += lx_put_int((int) nb);
    nb -= (int) nb;
    if (precision < 0)
        return size;
    else if (nb < 0)
        nb = -nb;
    size += put_decimales(nb, precision);
    return size;
}
