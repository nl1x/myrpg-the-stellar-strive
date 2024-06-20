/*
** EPITECH PROJECT, 2024
** IS_MOUSE_NPC
** File description:
** Is mouse NPC
** Author: lysandre.boursette@epitech.eu
*/

#include <math.h>
#include "my_rpg.h"

bool is_in_npc_range(my_rpg_t *rpg, npc_t *npc)
{
    sfCircleShape *npc_area = npc->entity->area->area;
    sfVector2f circle_pos = sfCircleShape_getPosition(npc_area);
    sfFloatRect bounds = sfSprite_getGlobalBounds(
        rpg->game->player->animated_entity->entity->sprite);
    float closestX = fmax(bounds.left, fmin(
        circle_pos.x, bounds.left + bounds.width));
    float closestY = fmax(bounds.top, fmin(
        circle_pos.y, bounds.top + bounds.height));
    float distanceX = circle_pos.x - closestX;
    float distanceY = circle_pos.y - closestY;
    float distanceSquared = distanceX * distanceX + distanceY * distanceY;
    float circle_radius = npc->entity->area->size;

    return distanceSquared < (circle_radius * circle_radius);
}
