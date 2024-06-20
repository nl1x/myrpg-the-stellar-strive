/*
** EPITECH PROJECT, 2024
** myrpg
** File description:
** map.h
** Author: nathan.jeannot@epitech.eu
*/

#ifndef MYRPG_MAP_H
    #define MYRPG_MAP_H

    #define MAP_SPAWN_NAME "map"
    #include <SFML/Graphics.h>
    #include "lx_lib.h"
    #include "player.h"
    #include "assets.h"
    #include "enum.h"

typedef struct tmx_file_s {
    char *tmx;
    char *path;
} tmx_file_t;

    #define INSIDE_TMX_PATH path_assets[MAP_1_INSIDE_TMX]
    #define INSIDE_PNG_PATH path_assets[MAP_1_INSIDE_PNG]
    #define INSIDE_TMX ((tmx_file_t) { INSIDE_TMX_PATH, INSIDE_PNG_PATH })

    #define OUTSIDE_TMX_PATH path_assets[MAP_1_OUTSIDE_TMX]
    #define OUTSIDE_PNG_PATH path_assets[MAP_1_OUTSIDE_PNG]
    #define OUTSIDE_TMX ((tmx_file_t) { OUTSIDE_TMX_PATH, OUTSIDE_PNG_PATH })

typedef struct spawn_s {
    char *name;
    sfVector2f pos;
} spawn_t;

typedef struct house_s {
    char *name;
    sfFloatRect rect;
} house_t;

typedef struct combat_zone_s {
    char *name;
    sfFloatRect rect;
} combat_zone_t;

typedef struct location_s {
    lx_list_t *collision_rects;
    lx_list_t *spawns;
    lx_list_t *houses;
    lx_list_t *combat_zones;
    spawn_t *map_spawn;
    sfSprite *sprite;
    sfTexture *sprite_texture;
} location_t;

typedef struct map_s {
    location_t *inside;
    location_t *outside;
    location_t *current_location;
} map_t;

map_t *load_map(tmx_file_t inside, tmx_file_t outside);
void delete_map(map_t *map);
location_t *get_other_location(map_t *map);
void draw_map(map_t *map, sfRenderWindow *win);

spawn_t *new_spawn(char *name, sfVector2f pos);
spawn_t *get_spawn(lx_list_t *spawns, char *name);
void delete_spawn(spawn_t *house);

house_t *new_house(char *name, sfFloatRect rect);
void delete_house(house_t *house);

combat_zone_t *new_combat_zone(char *name, sfFloatRect rect);
void delete_combat_zone(combat_zone_t *combat_zone);

location_t *new_location(const char *texture_path, const char *tmx_path);
void delete_location(location_t *loc);

void handle_houses(player_t *player, map_t *map);

#endif //MYRPG_MAP_H
