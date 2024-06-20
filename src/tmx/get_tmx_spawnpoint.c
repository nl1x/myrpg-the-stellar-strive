/*
** EPITECH PROJECT, 2024
** myrpg
** File description:
** get_tmx_spawnpoint.c
** Author: nathan.jeannot@epitech.eu
*/

#include <string.h>
#include <stdio.h>
#include "lx_lib.h"
#include "tmx_parser.h"
#include "my_rpg.h"

static
spawn_t *parse_spawn(char *line)
{
    char *name = get_tmx_type(line);
    sfVector2f pos = get_tmx_vector(line);

    return new_spawn(lx_str_new(name), pos);
}

lx_list_t *get_tmx_spawnpoints(const char *tmx_file)
{
    lx_list_t *spawns = lx_list_new();
    FILE *file = fopen(tmx_file, "r");
    char *line = NULL;
    ssize_t nread = 0;
    size_t len = 0;

    if (file == NULL) {
        print_file_not_found(tmx_file);
        return spawns;
    }
    while (nread != -1) {
        nread = getline(&line, &len, file);
        if (!strstr(line, TMX_OBJ)
            || !strstr(line, TMX_NAME_SPAWNPOINT))
            continue;
        lx_list_append(spawns, parse_spawn(line));
    }
    return spawns;
}
