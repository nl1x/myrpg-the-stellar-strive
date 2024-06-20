/*
** EPITECH PROJECT, 2024
** my_rpg
** File description:
** destroy_clock
*/

#include "my_rpg.h"

void destroy_clockk(clockk_t *clock)
{
    if (!clock)
        return;
    if (clock->clock)
        sfClock_destroy(clock->clock);
    free(clock);
}
