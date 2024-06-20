/*
** EPITECH PROJECT, 2024
** myrpg
** File description:
** load_map.c
** Author: nathan.jeannot@epitech.eu
*/

#include "map.h"

map_t *load_map(tmx_file_t inside, tmx_file_t outside)
{
    map_t *map = calloc(1, sizeof(map_t));

    map->inside = new_location(inside.path, inside.tmx);
    map->outside = new_location(outside.path, outside.tmx);
    map->current_location = map->outside;
    return map;
}
