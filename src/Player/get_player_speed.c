/*
** EPITECH PROJECT, 2024
** myrpg
** File description:
** get_player_speed.c
** Author: nathan.jeannot@epitech.eu
*/

#include "player.h"

float get_player_speed(player_t *player)
{
    return get_entity_speed(player->animated_entity->entity);
}
