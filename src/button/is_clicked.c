/*
** EPITECH PROJECT, 2024
** my_paint
** File description:
** is_clicked
*/

#include "my_rpg.h"

bool is_clicked(button_t *button, sfEvent event, enum button_state state)
{
    if (is_mouse_button(event.mouseButton.x, event.mouseButton.y,
        button) == true) {
        button->state = state;
        return true;
    }
    return false;
}
