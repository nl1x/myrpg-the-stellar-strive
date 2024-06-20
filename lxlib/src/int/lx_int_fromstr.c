/*
** EPITECH PROJECT, 2023
** lib
** File description:
** lx_int_fromstr.c
** Author: nathan.jeannot@epitech.eu
*/

#include "lx_lib.h"

static
int char_to_digit(char c)
{
    return c - '0';
}

static
int get_first_digit_index(char const *str)
{
    int i = 0;

    while (str[i] != '\0' && !lx_char_isdigit(str[i]))
        i++;
    return i;
}

int lx_int_fromstr(const char *str)
{
    int i = get_first_digit_index(str);
    int sign = 1;
    int nb = 0;

    if (str[i] == '\0')
        return 0;
    else if (i > 0 && str[i - 1] == '-')
        sign = -1;
    while (str[i] != '\0' && lx_char_isdigit(str[i])) {
        nb *= 10;
        nb += char_to_digit(str[i]);
        i++;
    }
    return nb * sign;
}
