/*
** EPITECH PROJECT, 2023
** lib
** File description:
** lx_str_calloc.c
** Author: nathan.jeannot@epitech.eu
*/

#include <stdlib.h>

/*
 * Malloc a string of size `type_size * length`
 * and set every value to \0.
 */
char *lx_str_calloc(size_t type_size, size_t length)
{
    char *pointer = malloc(type_size * length);

    for (size_t i = 0; i < (type_size * length); i++)
        pointer[i] = '\0';
    return pointer;
}
