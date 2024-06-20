/*
** EPITECH PROJECT, 2024
** myrpg
** File description:
** delete_combat_zone.c
** Author: nathan.jeannot@epitech.eu
*/

#include "map.h"

void delete_combat_zone(combat_zone_t *combat_zone)
{
    free(combat_zone->name);
    free(combat_zone);
}
