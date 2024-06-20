/*
** EPITECH PROJECT, 2023
** lib
** File description:
** lx_str_islower.c
** Author: nathan.jeannot@epitech.eu
*/

#include "lx_lib.h"

int lx_str_islower(char const *str)
{
    int i = 0;
    int is_lower = 1;

    while (str[i] != '\0' && is_lower) {
        is_lower = lx_char_islower(str[i]);
        i++;
    }
    return is_lower;
}
