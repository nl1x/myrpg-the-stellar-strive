/*
** EPITECH PROJECT, 2024
** my_rpg
** File description:
** create_animated_entity
*/

#include "my_rpg.h"

static
void center_animated_entity_with_area(animated_entity_t *anim_entity)
{
    sfVector2f pos = sfSprite_getPosition(anim_entity->entity->sprite);

    if (anim_entity->anim->box_movement.x == 0)
        pos.x -= anim_entity->anim->box_movement.y / MIDDLE_OF_SPRITE_WIDTH *
            sfSprite_getScale(anim_entity->entity->sprite).x;
    else
        pos.x -= anim_entity->anim->box_movement.x / MIDDLE_OF_SPRITE_WIDTH *
            sfSprite_getScale(anim_entity->entity->sprite).x;
    if (anim_entity->anim->box_movement.y == 0)
        pos.y -= anim_entity->anim->box_movement.x / MIDDLE_OF_SPRITE_WIDTH *
        sfSprite_getScale(anim_entity->entity->sprite).y;
    else
        pos.y -= anim_entity->anim->box_movement.y / MIDDLE_OF_SPRITE_WIDTH *
            sfSprite_getScale(anim_entity->entity->sprite).y;
    sfSprite_setTextureRect(anim_entity->entity->sprite,
        anim_entity->anim->box);
    sfSprite_setPosition(anim_entity->entity->sprite, pos);
}

animated_entity_t *create_animated_entity(entity_t *entity,
    animation_t *anim)
{
    animated_entity_t *anim_entity = calloc(1, sizeof(animated_entity_t));

    anim_entity->entity = entity;
    anim_entity->anim = anim;
    center_animated_entity_with_area(anim_entity);
    return anim_entity;
}
