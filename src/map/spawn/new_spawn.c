/*
** EPITECH PROJECT, 2024
** myrpg
** File description:
** new_spawn.c
** Author: nathan.jeannot@epitech.eu
*/

#include <malloc.h>
#include "map.h"

spawn_t *new_spawn(char *name, sfVector2f pos)
{
    spawn_t *spawn = calloc(1, sizeof(spawn_t));

    spawn->name = name;
    spawn->pos = pos;
    return spawn;
}
