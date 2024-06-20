/*
** EPITECH PROJECT, 2024
** myrpg
** File description:
** get_tmx_rect.c
** Author: nathan.jeannot@epitech.eu
*/

#include <SFML/Graphics/Rect.h>
#include <string.h>
#include <stdlib.h>

sfFloatRect get_tmx_rect(char *line)
{
    char *x_value = strstr(line, "x=\"") + 3;
    char *y_value = strstr(line, "y=\"") + 3;
    char *width_value = strstr(line, "width=\"") + 7;
    char *height_value = strstr(line, "height=\"") + 8;
    float x = strtof(x_value, NULL);
    float y = strtof(y_value, NULL);
    float width = strtof(width_value, NULL);
    float height = strtof(height_value, NULL);

    return (sfFloatRect) { x, y, width, height };
}
