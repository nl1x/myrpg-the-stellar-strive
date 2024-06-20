/*
** EPITECH PROJECT, 2024
** myrpg
** File description:
** new_combat_zone.c
** Author: nathan.jeannot@epitech.eu
*/

#include "map.h"

combat_zone_t *new_combat_zone(char *name, sfFloatRect rect)
{
    combat_zone_t *combat_zone = calloc(1, sizeof(combat_zone_t));

    combat_zone->rect = rect;
    combat_zone->name = name;
    return combat_zone;
}
