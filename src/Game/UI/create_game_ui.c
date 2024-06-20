/*
** EPITECH PROJECT, 2024
** my_rpg
** File description:
** create_game_ui
*/

#include "my_rpg.h"
#include "assets.h"

void create_game_rectangles_ui(game_t *game)
{
    game->rectangles = calloc(4, sizeof(sfRectangleShape *));
    game->rectangles[GAME_HP_RECTANGLE] = create_rectangle(
        (sfVector2f){80, 30}, (sfVector2f){0, 0}, sfRed,
        (sfVector2f){42.5, 4.3});
    game->rectangles[GAME_MANA_RECTANGLE] = create_rectangle(
        (sfVector2f){80, 90}, (sfVector2f){0, 0}, sfBlue,
        (sfVector2f){42.5, 4.3});
    game->rectangles[GAME_XP_RECTANGLE] = create_rectangle(
        (sfVector2f){80, 90}, (sfVector2f){0, 0}, sfGreen,
        (sfVector2f){42.5, 4.3});
}

void create_game_ui(game_t *game)
{
    game->sprites = calloc(4, sizeof(sfSprite *));
    game->sprites[GAME_HP_BAR] = create_sprite((sfVector2f){30, 30},
        (sfVector2f){0.6, 0.6},
        sfTexture_createFromFile(path_assets[HP_BAR_ASSET], NULL));
    game->sprites[GAME_MANA_BAR] = create_sprite((sfVector2f){30, 90},
        (sfVector2f){0.6, 0.6},
        sfTexture_createFromFile(path_assets[MANA_BAR_ASSET], NULL));
    game->sprites[GAME_XP_BAR] = create_sprite((sfVector2f){30, 90},
        (sfVector2f){0.6, 0.6},
        sfTexture_createFromFile(path_assets[XP_BAR_ASSET], NULL));
}
