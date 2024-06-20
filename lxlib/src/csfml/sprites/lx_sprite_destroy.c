/*
** EPITECH PROJECT, 2023
** myhunter
** File description:
** destroy.c
** Author: nathan.jeannot@epitech.eu
*/

#include <malloc.h>
#include "lx_csfml.h"

void lx_sprite_destroy(lx_sprite_t *sprite)
{
    if (sprite == NULL)
        return;
    sfSprite_destroy(sprite->object);
    sfClock_destroy(sprite->clock);
    sfTexture_destroy(sprite->texture);
    free(sprite->texture_path);
    free(sprite);
}
