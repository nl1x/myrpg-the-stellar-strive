/*
** EPITECH PROJECT, 2024
** myrpg
** File description:
** get_entity_speed.c
** Author: nathan.jeannot@epitech.eu
*/

#include "entity.h"
#include "lx_csfml.h"

float get_entity_speed(entity_t *entity)
{
    sfVector2f velocity = get_entity_velocity(entity);

    return lx_vector_length(velocity);
}
