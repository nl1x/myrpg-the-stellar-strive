/*
** EPITECH PROJECT, 2023
** my_radar
** File description:
** hitbox_plane
*/

#include "my_rpg.h"

sfRectangleShape *create_rectangle(sfVector2f pos, sfVector2f origin,
    sfColor fill_color, sfVector2f size)
{
    sfRectangleShape *rectangle = sfRectangleShape_create();

    if (rectangle == NULL)
        return NULL;
    sfRectangleShape_setOrigin(rectangle, origin);
    sfRectangleShape_setPosition(rectangle, pos);
    sfRectangleShape_setOutlineThickness(rectangle, 0);
    sfRectangleShape_setFillColor(rectangle, fill_color);
    sfRectangleShape_setOutlineColor(rectangle, sfBlack);
    sfRectangleShape_setSize(rectangle, size);
    return rectangle;
}
