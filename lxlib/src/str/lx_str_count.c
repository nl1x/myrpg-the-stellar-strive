/*
** EPITECH PROJECT, 2023
** lib
** File description:
** count_occurences.c
** Author: nathan.jeannot@epitech.eu
*/

#include "lx_lib.h"

unsigned int lx_str_count(char *str, char *substr)
{
    unsigned int occurences = 0;
    char *substr_idx = lx_str_find(str, substr);

    while (substr_idx != NULL) {
        occurences++;
        substr_idx = lx_str_find(substr_idx + lx_str_len(substr), substr);
    }
    return occurences;
}
