/*
** EPITECH PROJECT, 2024
** myrpg
** File description:
** move_entity.c
** Author: nathan.jeannot@epitech.eu
*/

#include <stdbool.h>
#include "lx_lib.h"
#include "entity.h"
#include "sprite.h"

static
void cancel_entity_movement(entity_t *entity, sfVector2f moved_velocity)
{
    moved_velocity.x = -moved_velocity.x;
    moved_velocity.y = -moved_velocity.y;
    sfSprite_move(entity->sprite, moved_velocity);
}

static
sfFloatRect *get_first_colliding_rect(entity_t *entity, lx_list_t *colliders)
{
    lx_node_t *node = colliders->head;
    sfFloatRect *collider = NULL;
    sfFloatRect entity_bounds = sfSprite_getGlobalBounds(entity->sprite);

    while (node != NULL) {
        collider = node->data;
        if (sfFloatRect_intersects(collider, &entity_bounds, NULL))
            return collider;
        node = node->next;
    }
    return NULL;
}

static
bool check_collision(lx_list_t *colliders, entity_t *entity,
    sfVector2f velocity)
{
    sfFloatRect *collision_rect = NULL;

    if (colliders == NULL || colliders->size == 0)
        return true;
    collision_rect = get_first_colliding_rect(entity, colliders);
    if (collision_rect != NULL) {
        cancel_entity_movement(entity, velocity);
        return false;
    } else {
        entity->pos.x += velocity.x;
        entity->pos.y += velocity.y;
    }
    return true;
}

static
bool apply_horizontal_movement(lx_list_t *colliders, entity_t *entity,
    sfVector2f velocity)
{
    velocity.y = 0;
    sfSprite_move(entity->sprite, velocity);
    return check_collision(colliders, entity, velocity);
}

static
bool apply_vertical_movement(lx_list_t *colliders, entity_t *entity,
    sfVector2f velocity)
{
    velocity.x = 0;
    sfSprite_move(entity->sprite, velocity);
    return check_collision(colliders, entity, velocity);
}

/*
 * Apply movement to the entity.
 *
 * @param   rpg             The main structure of the rpg that
 *                          contains deltaClock.
 * @param   entity          The entity to move.
 * @param   colliders       The list of SPRITE that correspond
 *                          to the colliders.
 * @return  {@code true}    if the entity moved, {@code false} otherwise.
 */
bool apply_entity_movement(entity_t *entity, lx_list_t *colliders)
{
    sfVector2f velocity = get_entity_velocity(entity);
    bool has_moved = apply_horizontal_movement(colliders, entity, velocity);

    has_moved = apply_vertical_movement(colliders, entity, velocity)
        || has_moved;
    return has_moved;
}
