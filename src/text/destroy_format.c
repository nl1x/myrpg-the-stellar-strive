/*
** EPITECH PROJECT, 2024
** my_rpg
** File description:
** destroy_format
*/

#include "my_rpg.h"

void destroy_format(format_t *format)
{
    if (!format)
        return;
    free(format);
}
