/*
** EPITECH PROJECT, 2024
** myrpg
** File description:
** new_location.c
** Author: nathan.jeannot@epitech.eu
*/

#include <malloc.h>
#include <string.h>
#include "map.h"
#include "tmx_parser.h"

static
spawn_t *get_map_spawn(lx_list_t *list)
{
    lx_node_t *node = list->head;
    spawn_t *spawn = NULL;

    while (node != NULL) {
        spawn = node->data;
        if (strcmp(spawn->name, MAP_SPAWN_NAME) == 0)
            return spawn;
        node = node->next;
    }
    return NULL;
}

static
void load_tmx_data(location_t *loc, const char *tmx)
{
    loc->collision_rects = get_tmx_collision_rect(tmx);
    loc->houses = get_tmx_houses(tmx);
    loc->spawns = get_tmx_spawnpoints(tmx);
    loc->combat_zones = get_tmx_combat_zones(tmx);
    loc->map_spawn = get_map_spawn(loc->spawns);
    if (loc->map_spawn == NULL) {
        loc->map_spawn = new_spawn(strdup(MAP_SPAWN_NAME),
            (sfVector2f) {0, 0});
    }
}

static
void load_default_data(location_t *loc)
{
    loc->collision_rects = lx_list_new();
    loc->houses = lx_list_new();
    loc->spawns = lx_list_new();
    loc->map_spawn = new_spawn(strdup(MAP_SPAWN_NAME),
        (sfVector2f) { 0, 0 });
}

location_t *new_location(const char *texture_path, const char *tmx_path)
{
    location_t *loc = calloc(1, sizeof(location_t));

    loc->sprite_texture = sfTexture_createFromFile(texture_path, NULL);
    loc->sprite = sfSprite_create();
    sfSprite_setTexture(loc->sprite, loc->sprite_texture, sfTrue);
    if (tmx_path == NULL)
        load_default_data(loc);
    else
        load_tmx_data(loc, tmx_path);
    return loc;
}
