/*
** EPITECH PROJECT, 2024
** CREATE_TUTORIAL_IMAGES
** File description:
** Create tutorial_images
** Author: lysandre.boursette@epitech.eu
*/

#include "my_rpg.h"
#include "assets.h"

void create_tutorial_images(tutorial_t *tutorial)
{
    tutorial->sprites = calloc(NB_SPRITES_TUTORIAL + 1, sizeof(sfSprite *));
    tutorial->sprites[TUTORIAL_KEYS_IMAGE] = create_sprite(
        (sfVector2f){POS_X_KEYS_IMG, POS_Y_KEYS_IMG},
        (sfVector2f){SCALE_X_KEYS_IMG, SCALE_Y_KEYS_IMG},
        sfTexture_createFromFile(path_assets[KEYS_IMG], NULL));
}
