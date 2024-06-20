/*
** EPITECH PROJECT, 2023
** myhunter
** File description:
** set_position.c
** Author: nathan.jeannot@epitech.eu
*/

#include "lx_csfml.h"

void lx_sprite_setpos(lx_sprite_t *sprite, sfVector2f pos)
{
    sfSprite_setPosition(sprite->object, pos);
}
