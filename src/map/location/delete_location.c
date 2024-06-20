/*
** EPITECH PROJECT, 2024
** myrpg
** File description:
** delete_location.c
** Author: nathan.jeannot@epitech.eu
*/

#include <SFML/Graphics/Sprite.h>
#include <SFML/Graphics/Texture.h>
#include <malloc.h>
#include "map.h"

static
void delete_spawns(lx_list_t *spawns)
{
    lx_list_destroy(spawns, (void (*)(void *)) delete_spawn);
}

static
void delete_houses(lx_list_t *houses)
{
    lx_list_destroy(houses, (void (*)(void *)) delete_house);
}

static
void delete_combat_zones(lx_list_t *combat_zones)
{
    lx_list_destroy(combat_zones, (void (*)(void *)) delete_combat_zone);
}

static
void delete_rects(lx_list_t *rects)
{
    lx_list_destroy(rects, free);
}

void delete_location(location_t *loc)
{
    sfSprite_destroy(loc->sprite);
    sfTexture_destroy(loc->sprite_texture);
    delete_spawn(loc->map_spawn);
    delete_spawns(loc->spawns);
    delete_houses(loc->houses);
    delete_combat_zones(loc->combat_zones);
    delete_rects(loc->collision_rects);
    free(loc);
}
