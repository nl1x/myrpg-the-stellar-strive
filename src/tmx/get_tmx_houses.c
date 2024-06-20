/*
** EPITECH PROJECT, 2024
** myrpg
** File description:
** get_houses.c
** Author: nathan.jeannot@epitech.eu
*/

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "lx_lib.h"
#include "tmx_parser.h"
#include "my_rpg.h"
#include "map.h"

static
house_t *get_house(char *line)
{
    sfFloatRect rect = get_tmx_rect(line);
    char *name = get_tmx_type(line);

    return new_house(name, rect);
}

lx_list_t *get_tmx_houses(const char *tmx_file)
{
    lx_list_t *houses = lx_list_new();
    FILE *file = fopen(tmx_file, "r");
    char *line = NULL;
    ssize_t nread = 0;
    size_t len = 0;

    if (file == NULL) {
        print_file_not_found(tmx_file);
        return houses;
    }
    while (nread != -1) {
        nread = getline(&line, &len, file);
        if (!strstr(line, TMX_OBJ)
            || !strstr(line, TMX_NAME_HOUSE))
            continue;
        lx_list_append(houses, get_house(line));
    }
    return houses;
}
