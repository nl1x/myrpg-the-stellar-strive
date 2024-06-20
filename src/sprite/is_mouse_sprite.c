/*
** EPITECH PROJECT, 2024
** my_paint
** File description:
** is_mouse_sprite
*/

#include "my_rpg.h"

bool is_mouse_sprite(int x_mouse, int y_mouse, sfSprite *sprite)
{
    sfVector2f pos = sfSprite_getPosition(sprite);
    sfFloatRect sprite_rect = sfSprite_getGlobalBounds(sprite);

    if (x_mouse >= pos.x && x_mouse <= pos.x + sprite_rect.width &&
        y_mouse >= pos.y && y_mouse <= pos.y + sprite_rect.height)
        return true;
    return false;
}
