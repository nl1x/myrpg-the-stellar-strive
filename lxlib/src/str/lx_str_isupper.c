/*
** EPITECH PROJECT, 2023
** lib
** File description:
** lx_str_isupper.c
** Author: nathan.jeannot@epitech.eu
*/

#include "lx_lib.h"

int lx_str_isupper(char const *str)
{
    int i = 0;
    int is_upper = 1;

    while (str[i] != '\0' && is_upper) {
        is_upper = lx_char_isupper(str[i]);
        i++;
    }
    return is_upper;
}
