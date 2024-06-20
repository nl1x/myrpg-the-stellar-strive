/*
** EPITECH PROJECT, 2023
** lib
** File description:
** lx_sprite_movedt.c
** Author: nathan.jeannot@epitech.eu
*/

#include "lx_csfml.h"

void lx_sprite_movedt(lx_sprite_t *sprite, sfVector2f velocity, float dt)
{
    sfVector2f sprite_pos = sfSprite_getPosition(sprite->object);

    sprite_pos.x += velocity.x * dt;
    sprite_pos.y += velocity.y * dt;
    sfSprite_setPosition(sprite->object, sprite_pos);
}
