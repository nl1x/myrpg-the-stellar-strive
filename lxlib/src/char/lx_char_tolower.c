/*
** EPITECH PROJECT, 2023
** lib
** File description:
** lx_char_tolower.c
** Author: nathan.jeannot@epitech.eu
*/

#include "lx_lib.h"

char lx_char_tolower(char upper)
{
    char lower = upper;

    if (lx_char_isupper(upper))
        lower += 'a' - 'A';
    return lower;
}
