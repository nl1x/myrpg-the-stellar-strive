/*
** EPITECH PROJECT, 2024
** myrpg
** File description:
** sprite_collide_any.c
** Author: nathan.jeannot@epitech.eu
*/

#include <SFML/Graphics/Sprite.h>
#include "lx_lib.h"
#include "sprite.h"

sfSprite *sprite_collide_any(sfSprite *sprite, lx_list_t *sprites)
{
    lx_node_t *node = sprites->head;
    sfSprite *collider = NULL;

    while (node != NULL) {
        collider = node->data;
        if (sprite_collide_sprite(sprite, collider))
            return collider;
        node = node->next;
    }
    return NULL;
}
