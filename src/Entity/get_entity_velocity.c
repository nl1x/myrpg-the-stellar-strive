/*
** EPITECH PROJECT, 2024
** myrpg
** File description:
** get_entity_velocity.c
** Author: nathan.jeannot@epitech.eu
*/

#include "entity.h"

sfVector2f get_entity_velocity(entity_t *entity)
{
    return entity->velocity;
}
