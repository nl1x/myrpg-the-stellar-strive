/*
** EPITECH PROJECT, 2024
** my_rpg
** File description:
** clock_options
*/

#include "my_rpg.h"
#include "assets.h"

void clock_options(options_t *options)
{
    options->clock->time = sfClock_getElapsedTime(options->clock->clock);
    options->clock->seconds = options->clock->time.microseconds / AS_SECOND;
    if (options->clock->seconds > 0.1) {
        for (int i = 0; options->anim_entity[i] != NULL; i++)
            animate_entity(options->anim_entity[i], PLANET_75PX_SPEED);
    }
}
