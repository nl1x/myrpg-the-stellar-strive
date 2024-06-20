/*
** EPITECH PROJECT, 2024
** my_rpg
** File description:
** create_entity
*/

#include "my_rpg.h"

entity_t *create_entity(char *assets, sfVector2f pos, sfVector2f scale,
    area_t *area)
{
    entity_t *entity = calloc(1, sizeof(entity_t));

    entity->sprite = sfSprite_create();
    entity->texture = sfTexture_createFromFile(assets, NULL);
    sfSprite_setTexture(entity->sprite, entity->texture, sfTrue);
    entity->pos = pos;
    entity->velocity = (sfVector2f) { 0, 0 };
    sfSprite_setPosition(entity->sprite, entity->pos);
    entity->scale = scale;
    sfSprite_setScale(entity->sprite, entity->scale);
    entity->area = area;
    return entity;
}
