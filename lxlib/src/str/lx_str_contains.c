/*
** EPITECH PROJECT, 2023
** lib
** File description:
** lx_contains.c
** Author: nathan.jeannot@epitech.eu
*/

#include <stdbool.h>
#include "lx_lib.h"

bool lx_str_contains(char const *str, char c)
{
    int i = 0;
    bool found = false;

    while (!found && str[i] != '\0') {
        found = str[i] == c;
        i++;
    }
    return found;
}
