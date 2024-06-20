/*
** EPITECH PROJECT, 2024
** my_paint
** File description:
** create_sprite
*/

#include "my_rpg.h"

sfSprite *create_sprite(sfVector2f pos, sfVector2f scale, sfTexture *texture)
{
    sfSprite *sprite = sfSprite_create();

    if (sprite == NULL)
        return NULL;
    sfSprite_setTexture(sprite, texture, sfTrue);
    sfSprite_setPosition(sprite, pos);
    sfSprite_setScale(sprite, scale);
    return sprite;
}
