/*
** EPITECH PROJECT, 2024
** myrpg
** File description:
** set_entity_velocity.c
** Author: nathan.jeannot@epitech.eu
*/

#include "entity.h"

void set_entity_velocity(entity_t *entity, sfVector2f velocity)
{
    entity->velocity = velocity;
}
