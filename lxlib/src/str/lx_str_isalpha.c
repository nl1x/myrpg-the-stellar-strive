/*
** EPITECH PROJECT, 2023
** lib
** File description:
** lx_str_isalpha.c
** Author: nathan.jeannot@epitech.eu
*/

#include "lx_lib.h"

int lx_str_isalpha(char const *str)
{
    int i = 0;
    int is_alpha = 1;

    while (str[i] != '\0' && is_alpha) {
        is_alpha = lx_char_isletter(str[i]);
        i++;
    }
    return is_alpha;
}
