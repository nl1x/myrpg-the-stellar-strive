/*
** EPITECH PROJECT, 2024
** myrpg
** File description:
** get_tmx_name.c
** Author: nathan.jeannot@epitech.eu
*/

#include <string.h>
#include <stdlib.h>

char *get_tmx_type(char *line)
{
    char *type_start = strstr(line, "type=\"") + 6;
    char *type_end = strstr(type_start, "\"");
    size_t type_len = type_end - type_start;
    char *type = calloc(type_len + 1, sizeof(char));

    strncpy(type, type_start, type_len);
    return type;
}
