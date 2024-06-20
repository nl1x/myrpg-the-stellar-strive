/*
** EPITECH PROJECT, 2023
** lib
** File description:
** lx_sprite_list_collide_point.c
** Author: nathan.jeannot@epitech.eu
*/

#include "lx_csfml.h"

lx_sprite_t *lx_sprite_list_collide_point(lx_node_t *sprites, sfVector2f point)
{
    lx_sprite_t *current_sprite = NULL;
    lx_sprite_t *collider = NULL;

    while (sprites != NULL && collider == NULL) {
        current_sprite = sprites->data;
        if (lx_sprite_collide_point(current_sprite, point))
            collider = current_sprite;
        sprites = sprites->next;
    }
    return collider;
}
