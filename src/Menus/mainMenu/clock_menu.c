/*
** EPITECH PROJECT, 2024
** my_rpg
** File description:
** clock_menu
*/

#include "my_rpg.h"
#include "assets.h"

void clock_menu(menu_t *menu)
{
    menu->clock->time = sfClock_getElapsedTime(menu->clock->clock);
    menu->clock->seconds = menu->clock->time.microseconds / AS_SECOND;
    if (menu->clock->seconds > 0.1) {
        for (int i = 0; menu->anim_entity[i] != NULL; i++)
            animate_entity(menu->anim_entity[i], PLANET_75PX_SPEED);
    }
}
