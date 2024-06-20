/*
** EPITECH PROJECT, 2024
** myrpg
** File description:
** player.h
** Author: nathan.jeannot@epitech.eu
*/

#ifndef MYRPG_PLAYER_H
    #define MYRPG_PLAYER_H
    #include "animation.h"
    #include "entity.h"
    #include "enum.h"
    #include "item.h"
    #include "camera.h"
    #include "stats.h"

    #define PLAYER_VELOCITY 100
    #define PLAYER_ANIMATION_SPEED 0.16f
    #define PLAYER_DEFAULT_SCALE ((sfVector2f) { 0.97, 0.97 })

    #define CAMERA_ZOOM 0.2f

    #define PLAYER_ANIM_BOX_MOVEMENT ((sfVector2i) { 13, 0 })
    #define PLAYER_ANIM_BOX_LIMIT ((sfVector2i) { 52, 17 })

    #define PLAYER_ANIM_UP_BOX ((sfIntRect) { 0, 0, 13, 17 })
    #define PLAYER_ANIM_RIGHT_BOX ((sfIntRect) { 0, 17, 13, 17 })
    #define PLAYER_ANIM_LEFT_BOX ((sfIntRect) { 0, 34, 13, 17 })
    #define PLAYER_ANIM_DOWN_BOX ((sfIntRect) { 0, 51, 13, 17 })
    #define PLAYER_ANIM_DOWN_RIGHT_BOX ((sfIntRect) { 0, 68, 13, 17 })
    #define PLAYER_ANIM_DOWN_LEFT_BOX ((sfIntRect) { 0, 85, 13, 17 })
    #define PLAYER_ANIM_UP_LEFT_BOX ((sfIntRect) { 0, 102, 13, 17 })
    #define PLAYER_ANIM_UP_RIGHT_BOX ((sfIntRect) { 0, 119, 13, 17 })

typedef struct player_s {
    animated_entity_t *animated_entity;
    animation_t *left_animation;
    animation_t *right_animation;
    animation_t *up_animation;
    animation_t *down_animation;
    animation_t *up_left_animation;
    animation_t *up_right_animation;
    animation_t *down_left_animation;
    animation_t *down_right_animation;
    animation_t *idle_animation;
    camera_t *camera;
    stats_t *stats;
    inventory_t *inventory;
} player_t;

player_t *create_player(sfRenderWindow *win, enum assets asset,
    sfVector2f pos);
void destroy_player(player_t *player);
void draw_player(player_t *player, sfRenderWindow *win);
sfVector2f get_player_velocity(player_t *player);
float get_player_speed(player_t *player);
void set_player_velocity(player_t *player, sfVector2f velocity);
void set_player_velocity_x(player_t *player, float x);
void set_player_velocity_y(player_t *player, float y);
void set_player_position(player_t *player, sfVector2f pos);

#endif //MYRPG_PLAYER_H
