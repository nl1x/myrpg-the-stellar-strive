/*
** EPITECH PROJECT, 2024
** myrpg
** File description:
** draw_map.c
** Author: nathan.jeannot@epitech.eu
*/

#include "map.h"

void draw_map(map_t *map, sfRenderWindow *win)
{
    sfRenderWindow_drawSprite(win, map->current_location->sprite, NULL);
}
