/*
** EPITECH PROJECT, 2024
** my_rpg
** File description:
** destroy_animation
*/

#include "my_rpg.h"

void destroy_animation(animation_t *anim)
{
    if (!anim)
        return;
    sfClock_destroy(anim->clock);
    free(anim);
}
