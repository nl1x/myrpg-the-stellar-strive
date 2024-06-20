/*
** EPITECH PROJECT, 2024
** my_paint
** File description:
** is_activated
*/

#include "my_rpg.h"

void is_activated(button_t *button, sfEvent event, enum button_state state)
{
    if (is_mouse_button(event.mouseMove.x, event.mouseMove.y,
        button) == true && button->state != CLICKED)
        button->state = state;
    else if (state == HOVER && button->state != CLICKED &&
        is_mouse_button(event.mouseMove.x,
        event.mouseMove.y, button) == false)
        button->state = NONE;
}
