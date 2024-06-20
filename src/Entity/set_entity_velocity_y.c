/*
** EPITECH PROJECT, 2024
** myrpg
** File description:
** set_entity_velocity_y.c
** Author: nathan.jeannot@epitech.eu
*/

#include "entity.h"

void set_entity_velocity_y(entity_t *entity, float y)
{
    set_entity_velocity(entity, (sfVector2f) { entity->velocity.x, y });
}
