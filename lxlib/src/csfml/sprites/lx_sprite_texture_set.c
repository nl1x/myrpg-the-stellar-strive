/*
** EPITECH PROJECT, 2023
** lib
** File description:
** lx_sprite_settexture.c
** Author: nathan.jeannot@epitech.eu
*/

#include "lx_csfml.h"

static
void lx_sprite_init_texture(lx_sprite_t *sprite)
{
    sfTexture *texture = sfTexture_createFromFile(sprite->texture_path, NULL);

    sprite->texture = texture;
}

void lx_sprite_texture_set(lx_sprite_t *sprite, int index)
{
    sfIntRect *rect = sprite->texture_rect;
    int nb_frames = sprite->nb_frames;

    rect->left = 0;
    if (sprite->texture == NULL)
        lx_sprite_init_texture(sprite);
    lx_rect_move(rect, rect->width * index, rect->width * (nb_frames - 1));
    sfSprite_setTextureRect(sprite->object, *rect);
    sfSprite_setTexture(sprite->object, sprite->texture, sfFalse);
}
