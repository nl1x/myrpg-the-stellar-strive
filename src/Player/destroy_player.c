/*
** EPITECH PROJECT, 2024
** myrpg
** File description:
** destroy_player.c
** Author: nathan.jeannot@epitech.eu
*/

#include <malloc.h>
#include "player.h"

void destroy_player(player_t *player)
{
    destroy_animation(player->up_animation);
    destroy_animation(player->down_animation);
    destroy_animation(player->right_animation);
    destroy_animation(player->left_animation);
    free(player);
}
