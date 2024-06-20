/*
** EPITECH PROJECT, 2024
** my_rpg
** File description:
** create_fighting_bg
*/

#include "my_rpg.h"
#include "assets.h"

void create_fighting_bg(fighting_t *fight)
{
    fight->sprites = calloc(NB_FIGHTING_SPRITES + 1, sizeof(sfSprite *));
    fight->sprites[BG_FIGHTING_NINJA_BASIC] = create_sprite(
        POS_BG_FIGHTING_NINJA_BASIC, SCALE_BG_FIGHTING_NINJA_BASIC,
        sfTexture_createFromFile(path_assets[MAP_FIGHTING_NINJA_BASIC], NULL));
    fight->sprites[BG_FIGHTING_NINJA_FIELD] = create_sprite(
        POS_BG_FIGHTING_NINJA_BASIC, SCALE_BG_FIGHTING_NINJA_BASIC,
        sfTexture_createFromFile(path_assets[MAP_FIGHTING_NINJA_FIELD], NULL));
    fight->sprites[BG_FIGHTING_NINJA_GREEN] = create_sprite(
        POS_BG_FIGHTING_NINJA_BASIC, SCALE_BG_FIGHTING_NINJA_BASIC,
        sfTexture_createFromFile(path_assets[MAP_FIGHTING_NINJA_GREEN], NULL));
    fight->sprites[BOX_FIGHTING] = create_sprite(POS_BOX_FIGHTING,
        SCALE_BOX_FIGHTING,
        sfTexture_createFromFile(path_assets[DIALOGUE_BOX_SIMPLE], NULL));
    fight->sprites[PLAYER_FIGHTING] = create_sprite(POS_PLAYER_FIGHTING,
        SCALE_PLAYER_FIGHTING,
        sfTexture_createFromFile(path_assets[PLAYER_FIGHTING_POS], NULL));
    fight->sprites[ARROW_SELECT_FIGHTING] = create_sprite(
        POS_ARROW_SELECT_FIGHTING, SCALE_ARROW_SELECT_FIGHTING,
            sfTexture_createFromFile(path_assets[ARROW_SELECT], NULL));
}
