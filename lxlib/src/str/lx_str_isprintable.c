/*
** EPITECH PROJECT, 2023
** lib
** File description:
** lx_str_isprintable.c
** Author: nathan.jeannot@epitech.eu
*/

#include "lx_lib.h"

int lx_str_isprintable(char const *str)
{
    int i = 0;
    int is_printable = 1;

    while (str[i] != '\0' && is_printable) {
        is_printable = lx_char_isprintable(str[i]);
        i++;
    }
    return is_printable;
}
