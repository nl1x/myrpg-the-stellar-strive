/*
** EPITECH PROJECT, 2023
** my_hunter
** File description:
** is_mouse_button
*/

#include "button.h"

bool is_mouse_button(int x_mouse, int y_mouse, button_t *button)
{
    sfVector2f pos = sfSprite_getPosition(button->sprites[NONE]);
    sfFloatRect sprite_rect = sfSprite_getGlobalBounds(button->sprites[NONE]);

    if (x_mouse >= pos.x && x_mouse <= pos.x + sprite_rect.width &&
        y_mouse >= pos.y && y_mouse <= pos.y + sprite_rect.height)
        return true;
    return false;
}
