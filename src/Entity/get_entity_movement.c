/*
** EPITECH PROJECT, 2024
** myrpg
** File description:
** get_entity_movement.c
** Author: nathan.jeannot@epitech.eu
*/

#include "entity.h"

static
entity_movement_t get_movement_up(sfVector2f velocity)
{
    if (velocity.x < 0)
        return EM_UP_LEFT;
    else if (velocity.x > 0)
        return EM_UP_RIGHT;
    else
        return EM_UP;
}

static
entity_movement_t get_movement_down(sfVector2f velocity)
{
    if (velocity.x < 0)
        return EM_DOWN_LEFT;
    else if (velocity.x > 0)
        return EM_DOWN_RIGHT;
    else
        return EM_DOWN;
}

static
entity_movement_t get_horizontal_movement(sfVector2f velocity)
{
    if (velocity.x < 0)
        return EM_LEFT;
    else if (velocity.x > 0)
        return EM_RIGHT;
    else
        return EM_NONE;
}

entity_movement_t get_entity_movement(entity_t *entity)
{
    sfVector2f velocity = get_entity_velocity(entity);

    if (velocity.y < 0)
        return get_movement_up(velocity);
    else if (velocity.y > 0)
        return get_movement_down(velocity);
    else
        return get_horizontal_movement(velocity);
}
