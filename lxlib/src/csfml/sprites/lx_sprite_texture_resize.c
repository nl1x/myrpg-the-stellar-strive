/*
** EPITECH PROJECT, 2023
** lib
** File description:
** lx_sprite_resizetexture.c
** Author: nathan.jeannot@epitech.eu
*/

#include "lx_csfml.h"

void lx_sprite_texture_resize(lx_sprite_t *sprite, int width, int height)
{
    sprite->rect->width = width;
    sprite->rect->height = height;
    sfSprite_setTextureRect(sprite->object, *sprite->rect);
}
