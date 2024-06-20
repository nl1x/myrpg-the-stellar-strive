/*
** EPITECH PROJECT, 2023
** lib
** File description:
** lx_str_new.c
** Author: nathan.jeannot@epitech.eu
*/

#include "lx_lib.h"

char *lx_str_new(char const *str)
{
    int length = lx_str_len(str);
    char *clone = lx_str_calloc(sizeof(char), (length + 1));

    for (int i = 0; i < length; i++)
        clone[i] = str[i];
    return clone;
}
