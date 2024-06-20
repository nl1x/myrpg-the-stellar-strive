/*
** EPITECH PROJECT, 2023
** lib
** File description:
** lx_strcat.c
** Author: nathan.jeannot@epitech.eu
*/

#include "lx_lib.h"

void concat(char *dest, char const *src)
{
    int i = 0;
    int j = 0;

    while (dest[i] != '\0')
        i++;
    while (src[j] != '\0') {
        dest[i] = src[j];
        i++;
        j++;
    }
}

char *lx_str_cat(char *dest, const char *src)
{
    unsigned int src_len = lx_str_len(src);

    dest = lx_str_realloc(dest, src_len + 1);
    concat(dest, src);
    return dest;
}
