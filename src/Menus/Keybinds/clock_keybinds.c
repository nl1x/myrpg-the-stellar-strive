/*
** EPITECH PROJECT, 2024
** my_rpg
** File description:
** clock_keybinds
*/

#include "my_rpg.h"
#include "assets.h"

void clock_keybinds(keybinds_t *keybinds)
{
    keybinds->clock->time = sfClock_getElapsedTime(keybinds->clock->clock);
    keybinds->clock->seconds = keybinds->clock->time.microseconds / AS_SECOND;
    if (keybinds->clock->seconds > 0.1) {
        for (int i = 0; keybinds->anim_entity[i] != NULL; i++)
            animate_entity(keybinds->anim_entity[i],
            BLACK_HOLE_KEYBINDS_SPEED);
        change_background_stars_color(keybinds);
        create_new_background_stars(keybinds);
        remove_background_stars(keybinds);
        sfClock_restart(keybinds->clock->clock);
    }
}
