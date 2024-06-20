/*
** EPITECH PROJECT, 2024
** my_rpg
** File description:
** create_format
*/

#include "my_rpg.h"

format_t *create_format(sfVector2f pos, sfColor color, int size,
    char const *path)
{
    format_t *format = calloc(1, sizeof(format_t));

    format->pos = pos;
    format->color = color;
    format->size = size;
    format->path = path;
    return format;
}
