/*
** EPITECH PROJECT, 2023
** lib
** File description:
** place.c
** Author: nathan.jeannot@epitech.eu
*/

#include <SFML/Graphics.h>

void lx_rect_place(sfIntRect *rect, int x, int y)
{
    rect->left = x;
    rect->top = y;
}
