/*
** EPITECH PROJECT, 2024
** my_rpg
** File description:
** destroy_game
*/

#include "my_rpg.h"

static
void destroy_game_2(game_t *game)
{
    if (game->rectangles)
        for (int i = 0; game->rectangles[i] != NULL; i++)
            sfRectangleShape_destroy(game->rectangles[i]);
    if (game->sprites)
        for (int i = 0; game->sprites[i] != NULL; i++)
            sfSprite_destroy(game->sprites[i]);
    if (game->textures)
        for (int i = 0; game->textures[i] != NULL; i++)
            sfTexture_destroy(game->textures[i]);
}

void destroy_game(game_t *game)
{
    if (!game)
        return;
    if (game->delta_clock)
        sfClock_destroy(game->delta_clock);
    if (game->current_map)
        delete_map(game->current_map);
    if (game->npc)
        for (int i = 0; game->npc[i] != NULL; i++)
            destroy_npc(game->npc[i]);
    if (game->player)
        destroy_player(game->player);
    if (game->fight)
        destroy_fighting(game->fight);
    destroy_game_2(game);
    free(game);
}
