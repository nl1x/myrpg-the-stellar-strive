/*
** EPITECH PROJECT, 2024
** my_rpg
** File description:
** destroy_new_game
*/

#include "my_rpg.h"

void destroy_new_game(new_game_t *game)
{
    if (!game)
        return;
    if (game->npc)
        for (int i = 0; game->npc[i] != NULL; i++)
            destroy_npc(game->npc[i]);
    if (game->sprites)
        for (int i = 0; game->sprites[i] != NULL; i++)
            sfSprite_destroy(game->sprites[i]);
    if (game->textures)
        for (int i = 0; game->textures[i] != NULL; i++)
            sfTexture_destroy(game->textures[i]);
    free(game);
}
