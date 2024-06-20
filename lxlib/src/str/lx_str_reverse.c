/*
** EPITECH PROJECT, 2023
** lib
** File description:
** lx_str_reverse.c
** Author: nathan.jeannot@epitech.eu
*/

#include "lx_lib.h"

char *lx_str_reverse(char *str)
{
    int strlen = lx_str_len(str);

    for (int i = 0; i < strlen / 2; i++) {
        lx_char_swap(str + i, str + strlen - i - 1);
    }
    return str;
}
