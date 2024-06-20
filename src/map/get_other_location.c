/*
** EPITECH PROJECT, 2024
** myrpg
** File description:
** get_other_location.c
** Author: nathan.jeannot@epitech.eu
*/

#include "map.h"

location_t *get_other_location(map_t *map)
{
    if (map->current_location == map->inside)
        return map->outside;
    else
        return map->inside;
}
