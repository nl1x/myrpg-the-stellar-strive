/*
** EPITECH PROJECT, 2024
** myrpg
** File description:
** draw_player.c
** Author: nathan.jeannot@epitech.eu
*/

#include "player.h"

void draw_player(player_t *player, sfRenderWindow *win)
{
    draw_animated_entity(player->animated_entity, win);
}
