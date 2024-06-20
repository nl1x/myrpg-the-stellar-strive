/*
** EPITECH PROJECT, 2024
** my_rpg
** File description:
** create_game
*/

#include "my_rpg.h"

game_t *create_game(sfRenderWindow *win)
{
    game_t *game = calloc(1, sizeof(game_t));

    game->delta_clock = sfClock_create();
    game->current_map = load_map(INSIDE_TMX, OUTSIDE_TMX);
    game->player = create_player(win, PLAYER_SPRITE_SHEET,
        game->current_map->current_location->map_spawn->pos);
    create_game_keybinds(game);
    game->fight = create_fighting(game->player);
    create_game_ui(game);
    create_game_rectangles_ui(game);
    game->music = create_music(GAME_MUSIC);
    sfMusic_stop(game->music->music);
    return game;
}
