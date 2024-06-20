/*
** EPITECH PROJECT, 2024
** myrpg
** File description:
** lx_vector_length.c
** Author: nathan.jeannot@epitech.eu
*/

#include <SFML/System/Vector2.h>
#include <math.h>

float lx_vector_length(sfVector2f vector)
{
    return sqrtf(vector.x * vector.x + vector.y * vector.y);
}
