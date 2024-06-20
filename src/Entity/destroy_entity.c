/*
** EPITECH PROJECT, 2024
** my_rpg
** File description:
** destroy_entity
*/

#include "my_rpg.h"

void destroy_entity(entity_t *entity)
{
    if (!entity)
        return;
    if (entity->sprite)
        sfSprite_destroy(entity->sprite);
    if (entity->texture)
        sfTexture_destroy(entity->texture);
    free(entity);
}
