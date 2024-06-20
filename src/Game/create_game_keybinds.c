/*
** EPITECH PROJECT, 2024
** my_rpg
** File description:
** create_game_keybinds
*/

#include "my_rpg.h"

void create_game_keybinds(game_t *game)
{
    game->keybinds = calloc(NB_KEYBINDS, sizeof(int));
    game->keybinds[KEYBINDS_MOVE_UP] = sfKeyZ;
    game->keybinds[KEYBINDS_MOVE_LEFT] = sfKeyQ;
    game->keybinds[KEYBINDS_MOVE_RIGHT] = sfKeyD;
    game->keybinds[KEYBINDS_MOVE_DOWN] = sfKeyS;
    game->keybinds[KEYBINDS_INTERACT] = sfKeyF;
    game->keybinds[KEYBINDS_INVENTORY] = sfKeyE;
}
