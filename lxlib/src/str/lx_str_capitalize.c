/*
** EPITECH PROJECT, 2023
** lib
** File description:
** lx_str_capitalize.c
** Author: nathan.jeannot@epitech.eu
*/

#include "lx_lib.h"

char *lx_str_capitalize(char *str)
{
    int i = 1;

    lx_char_toupper(*str);
    while (str[i] != '\0') {
        if (lx_char_isletter(str[i]) && !lx_char_isletter(str[i - 1]))
            lx_char_toupper(str[i]);
        else
            lx_char_tolower(str[i]);
        i++;
    }
    return str;
}
