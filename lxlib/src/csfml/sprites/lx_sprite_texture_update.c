/*
** EPITECH PROJECT, 2023
** myhunter
** File description:
** texture.c
** Author: nathan.jeannot@epitech.eu
*/

#include "lx_csfml.h"

static
void lx_sprite_init_texture(lx_sprite_t *sprite)
{
    sfTexture *texture = sfTexture_createFromFile(sprite->texture_path, NULL);

    sprite->texture = texture;
}

void lx_sprite_texture_update(lx_sprite_t *sprite)
{
    sfIntRect *rect = sprite->texture_rect;
    int anim_length = sprite->nb_frames;

    if (sprite->texture == NULL)
        lx_sprite_init_texture(sprite);
    if (lx_clock_get_seconds(sprite->clock) > sprite->animation_timer) {
        lx_rect_move(rect, rect->width, rect->width * (anim_length - 1));
        lx_clock_restart(sprite->clock);
    }
    sfSprite_setTextureRect(sprite->object, *sprite->texture_rect);
    sfSprite_setTexture(sprite->object, sprite->texture, sfFalse);
}
