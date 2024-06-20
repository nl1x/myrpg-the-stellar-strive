/*
** EPITECH PROJECT, 2023
** lib
** File description:
** lx_sprite_collide_point.c
** Author: nathan.jeannot@epitech.eu
*/

#include "lx_csfml.h"

int lx_sprite_collide_point(lx_sprite_t *sprite, sfVector2f point)
{
    sfVector2f spos = sfSprite_getPosition(sprite->object);
    sfIntRect srect = *sprite->rect;

    srect.left = (int) spos.x;
    srect.top = (int) spos.y;
    return sfIntRect_contains(&srect, (int) point.x, (int) point.y);
}
