/*
** EPITECH PROJECT, 2023
** lib
** File description:
** lx_char_toupper.c
** Author: nathan.jeannot@epitech.eu
*/

#include "lx_lib.h"

char lx_char_toupper(char lower)
{
    char upper = lower;

    if (lx_char_islower(lower))
        upper -= 'a' - 'A';
    return upper;
}
