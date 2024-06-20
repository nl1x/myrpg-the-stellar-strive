/*
** EPITECH PROJECT, 2024
** my_rpg
** File description:
** create_new_game
*/

#include "my_rpg.h"

new_game_t *create_new_game(void)
{
    new_game_t *new_game = calloc(1, sizeof(new_game_t));

    create_new_game_bg(new_game);
    new_game->npc = NULL;
    return new_game;
}
