/*
** EPITECH PROJECT, 2023
** lib
** File description:
** lx_str_realloc.c
** Author: nathan.jeannot@epitech.eu
*/

#include <stdlib.h>
#include "lx_lib.h"

char *lx_str_realloc(char *buf, size_t additional_size)
{
    int str_len = lx_str_len(buf);
    char *bufcpy = lx_str_new(buf);

    if (buf != NULL)
        free(buf);
    buf = lx_str_calloc(sizeof(char), str_len + additional_size + 1);
    lx_str_copy(buf, bufcpy);
    return buf;
}
