/*
** EPITECH PROJECT, 2024
** myrpg
** File description:
** get_spawn.c
** Author: nathan.jeannot@epitech.eu
*/

#include <string.h>
#include "map.h"

spawn_t *get_spawn(lx_list_t *spawns, char *name)
{
    lx_node_t *node = spawns->head;
    spawn_t *spawn = NULL;

    while (node != NULL) {
        spawn = node->data;
        if (strcmp(spawn->name, name) == 0)
            return spawn;
        node = node->next;
    }
    return NULL;
}
