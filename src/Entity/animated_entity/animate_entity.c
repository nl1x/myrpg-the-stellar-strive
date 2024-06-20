/*
** EPITECH PROJECT, 2024
** my_rpg
** File description:
** animated_entity
*/

#include "my_rpg.h"

void animate_entity(animated_entity_t *entity, float seconds)
{
    sfTime time = sfClock_getElapsedTime(entity->anim->clock);
    float elapsed_seconds = sfTime_asSeconds(time);

    if (elapsed_seconds > seconds) {
        entity->anim->box.left += entity->anim->box_movement.x;
        if (entity->anim->box.left >= entity->anim->box_limit.x)
            entity->anim->box.left = RESET_RECT;
        sfSprite_setTextureRect(entity->entity->sprite, entity->anim->box);
        sfClock_restart(entity->anim->clock);
    }
}
