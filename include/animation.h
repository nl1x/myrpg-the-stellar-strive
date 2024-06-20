/*
** EPITECH PROJECT, 2024
** my_rpg
** File description:
** animation
*/

#ifndef ANIMATION_H_
    #define ANIMATION_H_

    #include <SFML/Graphics.h>
    #include "clock.h"

    #define RESET_RECT 0

typedef struct {
    sfIntRect box;
    sfVector2i box_movement;
    sfVector2i box_limit;
    sfClock *clock;
} animation_t;

animation_t *create_animation(sfIntRect box, sfVector2i box_movement,
    sfVector2i box_limit);
void destroy_animation(animation_t *anim);

#endif /* !ANIMATION_H_ */
