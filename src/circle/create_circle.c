/*
** EPITECH PROJECT, 2023
** bs_my_radar
** File description:
** create_circle
*/

#include "my_rpg.h"

sfCircleShape *create_circle(sfVector2f position, float radius)
{
    sfCircleShape *circle;

    circle = sfCircleShape_create();
    sfCircleShape_setOrigin(circle, (sfVector2f){radius, radius});
    sfCircleShape_setPosition(circle, position);
    sfCircleShape_setRadius(circle, radius);
    sfCircleShape_setFillColor(circle, sfTransparent);
    sfCircleShape_setOutlineThickness(circle, 1);
    sfCircleShape_setOutlineColor(circle, sfRed);
    return circle;
}
