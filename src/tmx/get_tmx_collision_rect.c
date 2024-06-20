/*
** EPITECH PROJECT, 2024
** myrpg
** File description:
** get_tmx_collision_rect.c
** Author: nathan.jeannot@epitech.eu
*/

#include <string.h>
#include <stdio.h>
#include <SFML/Graphics/Rect.h>
#include <stdlib.h>
#include "lx_lib.h"
#include "tmx_parser.h"
#include "my_rpg.h"

static
sfFloatRect *create_float_rect(float x, float y, float width, float height)
{
    sfFloatRect *rect = calloc(1, sizeof(sfFloatRect));

    if (rect == NULL)
        return NULL;
    rect->top = y;
    rect->left = x;
    rect->width = width;
    rect->height = height;
    return rect;
}

static
sfFloatRect *new_collision_rect(const char *line)
{
    char *x_value = strstr(line, "x=\"") + 3;
    char *y_value = strstr(line, "y=\"") + 3;
    char *width_value = strstr(line, "width=\"") + 7;
    char *height_value = strstr(line, "height=\"") + 8;
    float x = strtof(x_value, NULL);
    float y = strtof(y_value, NULL);
    float width = strtof(width_value, NULL);
    float height = strtof(height_value, NULL);

    return create_float_rect(x, y, width, height);
}

lx_list_t *get_tmx_collision_rect(const char *tmx_file)
{
    lx_list_t *list = lx_list_new();
    FILE *file = fopen(tmx_file, "r");
    char *line = NULL;
    ssize_t nread = 0;
    size_t len = 0;

    if (file == NULL) {
        print_file_not_found(tmx_file);
        return list;
    }
    while (nread != -1) {
        nread = getline(&line, &len, file);
        if (!strstr(line, TMX_OBJ)
            || !strstr(line, TMX_NAME_COLLISION))
            continue;
        lx_list_append(list, new_collision_rect(line));
    }
    fclose(file);
    return list;
}
