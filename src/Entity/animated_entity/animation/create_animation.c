/*
** EPITECH PROJECT, 2024
** my_rpg
** File description:
** create_animation
*/

#include "my_rpg.h"

animation_t *create_animation(sfIntRect box, sfVector2i box_movement,
    sfVector2i box_limit)
{
    animation_t *anim = calloc(1, sizeof(animation_t));

    anim->clock = sfClock_create();
    anim->box = box;
    anim->box_movement = box_movement;
    anim->box_limit = box_limit;
    return anim;
}
