/*
** EPITECH PROJECT, 2024
** SH_STR_CPY
** File description:
** Copies a given string to an empty string.
** Author: lysandre.boursette@epitech.eu
*/

#include "shuvlib/string.h"

char *sh_str_cpy(char *dest, char const *src)
{
    int k = 0;

    for (; src[k] != '\0'; k++)
        dest[k] = src[k];
    dest[k] = '\0';
    return dest;
}
