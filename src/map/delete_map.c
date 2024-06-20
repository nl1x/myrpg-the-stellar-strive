/*
** EPITECH PROJECT, 2024
** myrpg
** File description:
** delete_map.c
** Author: nathan.jeannot@epitech.eu
*/

#include <malloc.h>
#include "map.h"

void delete_map(map_t *map)
{
    if (!map)
        return;
    delete_location(map->inside);
    delete_location(map->outside);
    free(map);
}
