/*
** EPITECH PROJECT, 2023
** lib
** File description:
** lx_char_isprintable.c
** Author: nathan.jeannot@epitech.eu
*/

#include <stdbool.h>

bool lx_char_isprintable(char c)
{
    return (c < '~' && c >= ' ');
}
