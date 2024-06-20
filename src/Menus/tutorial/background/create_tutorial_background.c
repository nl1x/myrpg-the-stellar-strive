/*
** EPITECH PROJECT, 2024
** CREATE_TUTORIAL_BACKGROUND
** File description:
** Create tutorial background
** Author: lysandre.boursette@epitech.eu
*/

#include "my_rpg.h"
#include "assets.h"

void create_tutorial_background(tutorial_t *tutorial)
{
    tutorial->background = create_sprite((sfVector2f){0, 0},
        (sfVector2f){1, 1},
        sfTexture_createFromFile(path_assets[KEYBINDS_BG], NULL));
}
