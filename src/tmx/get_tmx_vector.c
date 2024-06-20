/*
** EPITECH PROJECT, 2024
** myrpg
** File description:
** get_tmx_rect.c
** Author: nathan.jeannot@epitech.eu
*/

#include <SFML/System/Vector2.h>
#include <string.h>
#include <stdlib.h>

sfVector2f get_tmx_vector(char *line)
{
    char *x_value = strstr(line, "x=\"") + 3;
    char *y_value = strstr(line, "y=\"") + 3;
    float x = strtof(x_value, NULL);
    float y = strtof(y_value, NULL);

    return (sfVector2f) { x, y };
}
