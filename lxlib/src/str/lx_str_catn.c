/*
** EPITECH PROJECT, 2023
** lib
** File description:
** lx_str_catn.c
** Author: nathan.jeannot@epitech.eu
*/

#include "lx_lib.h"

char *lx_str_catn(char *dest, char const *src, int nb)
{
    int i = 0;
    int dest_len = lx_str_len(dest);

    while (i < nb && src[i] != '\0') {
        dest[i + dest_len] = src[i];
        i++;
    }
    dest[i + dest_len] = '\0';
    return dest;
}
