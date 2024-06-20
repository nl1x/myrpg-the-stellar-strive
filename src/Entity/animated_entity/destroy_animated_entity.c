/*
** EPITECH PROJECT, 2024
** my_rpg
** File description:
** destroy_animated_entity
*/

#include "my_rpg.h"

void destroy_animated_entity(animated_entity_t *entity)
{
    if (!entity)
        return;
    if (entity->anim)
        destroy_animation(entity->anim);
    if (entity->entity)
        destroy_entity(entity->entity);
    free(entity);
}
