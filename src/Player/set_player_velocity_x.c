/*
** EPITECH PROJECT, 2024
** myrpg
** File description:
** set_player_velocity_x.c
** Author: nathan.jeannot@epitech.eu
*/

#include "entity.h"
#include "player.h"

void set_player_velocity_x(player_t *player, float x)
{
    set_entity_velocity_x(player->animated_entity->entity, x);
}
