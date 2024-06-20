/*
** EPITECH PROJECT, 2024
** myrpg
** File description:
** set_player_position.c
** Author: nathan.jeannot@epitech.eu
*/

#include "player.h"
#include "entity.h"

void set_player_position(player_t *player, sfVector2f pos)
{
    set_entity_position(player->animated_entity->entity, pos);
}
