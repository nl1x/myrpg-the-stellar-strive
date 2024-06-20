/*
** EPITECH PROJECT, 2023
** lib
** File description:
** lx_char_isletter.c
** Author: nathan.jeannot@epitech.eu
*/

#include <stdbool.h>

bool lx_char_isletter(char c)
{
    return (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z');
}
