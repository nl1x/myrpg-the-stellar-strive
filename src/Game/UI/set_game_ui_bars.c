/*
** EPITECH PROJECT, 2024
** my_rpg
** File description:
** set_game_ui_bars
*/

#include "my_rpg.h"

void set_game_ui_bars(game_t *game)
{
    sfRectangleShape_setSize(game->rectangles[GAME_HP_RECTANGLE],
        (sfVector2f){42.5 *
        (game->player->stats->hp / game->player->stats->hp_max), 4.3});
    sfRectangleShape_setSize(game->rectangles[GAME_MANA_RECTANGLE],
        (sfVector2f){42.5 *
        (game->player->stats->mana / game->player->stats->mana_max), 4.3});
    sfRectangleShape_setSize(game->rectangles[GAME_XP_RECTANGLE],
        (sfVector2f){42.5 *
        (game->player->stats->xp / game->player->stats->xp_max), 4.3});
}
