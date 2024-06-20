/*
** EPITECH PROJECT, 2024
** my_paint
** File description:
** is_rect_clicked
*/

#include "my_rpg.h"

bool is_rect_clicked(sfMouseButtonEvent event, sfRectangleShape *rectangle)
{
    sfVector2f pos = sfRectangleShape_getPosition(rectangle);
    sfFloatRect rect = sfRectangleShape_getGlobalBounds(rectangle);

    if (event.x >= pos.x && event.x <= pos.x + rect.width &&
        event.y >= pos.y && event.y <= pos.y + rect.height)
        return true;
    return false;
}
