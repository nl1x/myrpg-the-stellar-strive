/*
** EPITECH PROJECT, 2024
** myrpg
** File description:
** set_player_velocity.c
** Author: nathan.jeannot@epitech.eu
*/

#include "player.h"

void set_player_velocity(player_t *player, sfVector2f velocity)
{
    set_entity_velocity(player->animated_entity->entity, velocity);
}
