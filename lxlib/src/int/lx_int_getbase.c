/*
** EPITECH PROJECT, 2023
** lib
** File description:
** lx_str_getbase.c
** Author: nathan.jeannot@epitech.eu
*/

#include <malloc.h>
#include "lx_lib.h"

static char get_char(unsigned long long rest)
{
    char c = '\0';

    if (rest > 9)
        c = 'a' + (rest - 10);
    else
        c = '0' + rest;
    return c;
}

static char *remalloc(char *str)
{
    int str_length = lx_str_len(str);
    char *new = lx_str_calloc(sizeof(char), str_length + 2);

    lx_str_cat(new + 1, str);
    free(str);
    return new;
}

char *lx_int_getbase(unsigned long long nb, int base)
{
    unsigned long long rest = 0;
    char *result = lx_str_calloc(sizeof(char), 1);

    while (nb > 0) {
        rest = nb % base;
        result = remalloc(result);
        result[0] = get_char(rest);
        nb /= base;
    }
    return result;
}
