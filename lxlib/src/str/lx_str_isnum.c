/*
** EPITECH PROJECT, 2023
** lib
** File description:
** lx_str_isnum.c
** Author: nathan.jeannot@epitech.eu
*/

#include "lx_lib.h"

int lx_str_isnum(char const *str)
{
    int i = 0;
    int is_num = 1;

    while (str[i] != '\0' && is_num) {
        is_num = lx_char_isdigit(str[i]);
        i++;
    }
    return is_num;
}
