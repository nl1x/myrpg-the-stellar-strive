/*
** EPITECH PROJECT, 2024
** myrpg
** File description:
** get_player_velocity.c
** Author: nathan.jeannot@epitech.eu
*/

#include "player.h"

sfVector2f get_player_velocity(player_t *player)
{
    return get_entity_velocity(player->animated_entity->entity);
}
