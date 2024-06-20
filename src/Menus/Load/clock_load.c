/*
** EPITECH PROJECT, 2024
** my_rpg
** File description:
** clock_load
*/

#include "my_rpg.h"
#include "assets.h"

void clock_load(load_t *load)
{
    load->clock->time = sfClock_getElapsedTime(load->clock->clock);
    load->clock->seconds = load->clock->time.microseconds / AS_SECOND;
    if (load->clock->seconds > 0.1) {
        for (int i = 0; load->anim_entity[i] != NULL; i++)
            animate_entity(load->anim_entity[i], PLANET_75PX_SPEED);
    }
}
