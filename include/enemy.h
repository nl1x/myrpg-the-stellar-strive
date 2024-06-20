/*
** EPITECH PROJECT, 2024
** ENEMY_H_
** File description:
** ENEMY's header
** Author: lysandre.boursette@epitech.eu
*/

#ifndef ENEMY_H_
    #define ENEMY_H_

    #define ENEMY_ANIMATION_SPEED 0.16f
    #define ENEMY_DEFAULT_SCALE ((sfVector2f) { 5, 5 })

    #define ENEMY_ANIM_BOX_MOVEMENT ((sfVector2i) { 13, 0 })
    #define ENEMY_ANIM_BOX_LIMIT ((sfVector2i) { 52, 17 })

    #define ENEMY_ANIM_LEFT_BOX ((sfIntRect) { 32, 48, 16, 16 })

    #define ENEMY_POS_X 1160
    #define ENEMY_POS_Y 310
    #define ENEMY_DEFAULT_HP 20

    #define ENEMY_HEALTH_BAR_WIDTH 120
    #define ENEMY_HEALTH_BAR_HEIGHT 20

    #include "entity.h"

typedef struct enemy_s {
    animated_entity_t *animated_entity;
    animation_t *idle_animation;
    stats_t *stats;
    text_t *text;
    sfClock *clock;
    int is_in_fire;
    int is_poisoned;
    int is_iced;
} enemy_t;

#endif /* ENEMY_H_ */
