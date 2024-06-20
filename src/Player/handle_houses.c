/*
** EPITECH PROJECT, 2024
** myrpg
** File description:
** handle_houses.c
** Author: nathan.jeannot@epitech.eu
*/

#include <stdio.h>
#include "player.h"
#include "map.h"

static
house_t *get_colliding_house(player_t *player, lx_list_t *houses)
{
    sfFloatRect player_rect = sfSprite_getGlobalBounds(
        player->animated_entity->entity->sprite);
    lx_node_t *node = houses->head;
    house_t *house = NULL;

    while (node != NULL) {
        house = node->data;
        if (sfFloatRect_intersects(&house->rect, &player_rect, NULL))
            return house;
        node = node->next;
    }
    return NULL;
}

void handle_houses(player_t *player, map_t *map)
{
    house_t *house = get_colliding_house(player,
        map->current_location->houses);
    location_t *other_location = get_other_location(map);
    spawn_t *house_spawn = NULL;

    if (house == NULL)
        return;
    house_spawn = get_spawn(other_location->spawns, house->name);
    if (house_spawn == NULL)
        return;
    set_player_position(player, house_spawn->pos);
    map->current_location = other_location;
    update_camera(player->camera);
}
