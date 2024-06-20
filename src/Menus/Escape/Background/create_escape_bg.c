/*
** EPITECH PROJECT, 2024
** my_rpg
** File description:
** create_escape_bg
*/

#include "my_rpg.h"
#include "assets.h"

void create_escape_bg(escape_t *escape)
{
    escape->sprites = calloc(NB_SPRITES_ESCAPE, sizeof(sfSprite *));
    escape->sprites[ESCAPE_BACKGROUND] = create_sprite(
        (sfVector2f){POS_X_BG_ESCAPE, POS_Y_BG_ESCAPE},
        (sfVector2f){SCALE_X_BG_ESCAPE, SCALE_Y_BG_ESCAPE},
        sfTexture_createFromFile(path_assets[MENU_BG], NULL));
}
