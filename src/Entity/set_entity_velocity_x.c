/*
** EPITECH PROJECT, 2024
** myrpg
** File description:
** set_entity_velocity_x.c
** Author: nathan.jeannot@epitech.eu
*/

#include "entity.h"

void set_entity_velocity_x(entity_t *entity, float x)
{
    set_entity_velocity(entity, (sfVector2f) { x, entity->velocity.y });
}
