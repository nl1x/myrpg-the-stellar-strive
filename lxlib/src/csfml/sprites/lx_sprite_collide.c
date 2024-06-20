/*
** EPITECH PROJECT, 2023
** myhunter
** File description:
** collide.c
** Author: nathan.jeannot@epitech.eu
*/

#include <malloc.h>
#include "lx_csfml.h"

sfIntRect *lx_sprite_collide(lx_sprite_t *sprite1, lx_sprite_t *sprite2)
{
    sfIntRect *intersection = malloc(sizeof(sfIntRect));

    if (sfIntRect_intersects(sprite1->rect, sprite2->rect, intersection))
        return intersection;
    free(intersection);
    return NULL;
}
