/*
** EPITECH PROJECT, 2024
** myrpg
** File description:
** set_entity_position.c
** Author: nathan.jeannot@epitech.eu
*/

#include "entity.h"

void set_entity_position(entity_t *entity, sfVector2f pos)
{
    entity->pos = pos;
    sfSprite_setPosition(entity->sprite, entity->pos);
}
