/*
** EPITECH PROJECT, 2024
** my_paint
** File description:
** is_mouse_rectangle
*/

#include "my_rpg.h"

bool is_mouse_rectangle(int x_mouse, int y_mouse, sfRectangleShape *rectangle)
{
    sfVector2f pos = sfRectangleShape_getPosition(rectangle);
    sfFloatRect sprite_rect = sfRectangleShape_getGlobalBounds(rectangle);

    if (x_mouse >= pos.x && x_mouse <= pos.x + sprite_rect.width &&
        y_mouse >= pos.y && y_mouse <= pos.y + sprite_rect.height)
        return true;
    return false;
}
