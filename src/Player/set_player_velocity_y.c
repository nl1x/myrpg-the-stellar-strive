/*
** EPITECH PROJECT, 2024
** myrpg
** File description:
** set_player_velocity_y.c
** Author: nathan.jeannot@epitech.eu
*/

#include "entity.h"
#include "player.h"

void set_player_velocity_y(player_t *player, float y)
{
    set_entity_velocity_y(player->animated_entity->entity, y);
}
