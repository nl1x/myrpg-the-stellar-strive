/*
** EPITECH PROJECT, 2024
** my_rpg
** File description:
** create_new_game_bg
*/

#include "my_rpg.h"
#include "assets.h"

void create_new_game_bg(new_game_t *new_game)
{
    new_game->sprites = calloc(2, sizeof(sfSprite *));
    new_game->sprites[0] = create_sprite((sfVector2f){0, 0},
        (sfVector2f){1, 1},
        sfTexture_createFromFile(path_assets[KEYBINDS_BG], NULL));
}
