/*
** EPITECH PROJECT, 2024
** myrpg
** File description:
** handle_player_movement.c
** Author: nathan.jeannot@epitech.eu
*/

#include <math.h>
#include "my_rpg.h"
#include "map.h"

static
void set_vertical_velocity(UNUSED my_rpg_t *rpg, player_t *player)
{
    int vertical_velocity = sfKeyboard_isKeyPressed(
        rpg->game->keybinds[KEYBINDS_MOVE_DOWN])
        - sfKeyboard_isKeyPressed(rpg->game->keybinds[KEYBINDS_MOVE_UP]);

    set_player_velocity_y(player, (float) vertical_velocity);
}

static
void set_horizontal_velocity(UNUSED my_rpg_t *rpg, player_t *player)
{
    int horizontal_velocity = sfKeyboard_isKeyPressed(
        rpg->game->keybinds[KEYBINDS_MOVE_RIGHT])
        - sfKeyboard_isKeyPressed(rpg->game->keybinds[KEYBINDS_MOVE_LEFT]);

    set_player_velocity_x(player, (float) horizontal_velocity);
}

static
sfVector2f normalize_velocity(sfVector2f velocity)
{
    float length = sqrtf(velocity.x * velocity.x + velocity.y * velocity.y);

    if (length != 0) {
        velocity.x /= length;
        velocity.y /= length;
    }
    return velocity;
}

static
void fix_velocity(player_t *player, float delta_time)
{
    sfVector2f velocity = get_player_velocity(player);

    velocity = normalize_velocity(velocity);
    velocity.x *= PLAYER_VELOCITY * delta_time;
    velocity.y *= PLAYER_VELOCITY * delta_time;
    set_player_velocity(player, velocity);
}

static
animation_t *get_player_animation(player_t *player, entity_movement_t movement)
{
    switch (movement) {
        case EM_UP_RIGHT:
            return player->up_right_animation;
        case EM_UP_LEFT:
            return player->up_left_animation;
        case EM_DOWN_RIGHT:
            return player->down_right_animation;
        case EM_DOWN_LEFT:
            return player->down_left_animation;
        case EM_UP:
            return player->up_animation;
        case EM_DOWN:
            return player->down_animation;
        case EM_RIGHT:
            return player->right_animation;
        case EM_LEFT:
            return player->left_animation;
        default:
            return player->idle_animation;
    }
}

static
void animate_player(player_t *player)
{
    entity_movement_t movement =
        get_entity_movement(player->animated_entity->entity);
    animation_t *animation = get_player_animation(player, movement);

    set_animation(player->animated_entity, animation);
    animate_entity(player->animated_entity, PLAYER_ANIMATION_SPEED);
}

static
void handle_player_camera_movement(player_t *player)
{
    sfVector2f pos = player->animated_entity->entity->pos;

    set_camera_center(player->camera, pos);
    update_camera(player->camera);
}

void handle_player_movement(my_rpg_t *rpg, player_t *player,
    map_t *map)
{
    bool has_collided = false;
    bool has_moved = false;

    set_horizontal_velocity(rpg, player);
    set_vertical_velocity(rpg, player);
    fix_velocity(player, rpg->game->delta_time);
    has_collided = !apply_entity_movement(player->animated_entity->entity,
        map->current_location->collision_rects);
    has_moved = !has_collided && (get_player_speed(player) > 0);
    if (has_moved) {
        animate_player(player);
        handle_player_camera_movement(player);
        handle_houses(player, map);
        handle_combat_zones(rpg, player, map);
    }
}
