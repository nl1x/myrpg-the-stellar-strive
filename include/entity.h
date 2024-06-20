/*
** EPITECH PROJECT, 2024
** my_rpg
** File description:
** entity
*/

#ifndef ENTITY_H_
    #define ENTITY_H_

    #include "lx_lib.h"
    #include <SFML/Graphics.h>
    #include "lx_lib.h"
    #include "animation.h"
    #include "enum.h"

typedef struct {
    sfCircleShape *area;
    float size;
} area_t;

typedef struct {
    sfSprite *sprite;
    sfTexture *texture;
    sfVector2f scale;
    sfVector2f pos;
    area_t *area;
    sfVector2f velocity;
} entity_t;

typedef struct {
    entity_t *entity;
    animation_t *anim;
} animated_entity_t;

typedef enum entity_movement_e {
    EM_UP_LEFT,
    EM_UP_RIGHT,
    EM_DOWN_LEFT,
    EM_DOWN_RIGHT,
    EM_UP,
    EM_DOWN,
    EM_RIGHT,
    EM_LEFT,
    EM_NONE
} entity_movement_t;

/*      ENTITY      */
entity_t *create_entity(char *assets, sfVector2f pos, sfVector2f scale,
    area_t *area);
void destroy_entity(entity_t *entity);

/*      ANIMATED ENTITY      */
animated_entity_t *create_animated_entity(entity_t *entity,
    animation_t *anim);
void draw_animated_entity(
    animated_entity_t *anim_entity, sfRenderWindow *win);
bool apply_entity_movement(entity_t *entity, lx_list_t *colliders);
void animate_entity(animated_entity_t *entity, float seconds);
void destroy_animated_entity(animated_entity_t *entity);
void draw_entity(entity_t *entity, sfRenderWindow *window);
void set_entity_velocity(entity_t *entity, sfVector2f velocity);
void set_entity_velocity_x(entity_t *entity, float y);
void set_entity_velocity_y(entity_t *entity, float y);
sfVector2f get_entity_velocity(entity_t *entity);
float get_entity_speed(entity_t *entity);
entity_movement_t get_entity_movement(entity_t *entity);
void set_animation(animated_entity_t *entity, animation_t *animation);
void set_entity_position(entity_t *entity, sfVector2f pos);

/*      AREA      */
area_t *create_area(sfVector2f pos, float size);

#endif /* !ENTITY_H_ */
