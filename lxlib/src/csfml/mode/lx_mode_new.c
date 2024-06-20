/*
** EPITECH PROJECT, 2023
** lib
** File description:
** lx_mode_new.c
** Author: nathan.jeannot@epitech.eu
*/

#include <SFML/Window.h>

sfVideoMode lx_mode_new(int width, int height)
{
    sfVideoMode mode = {width, height, 32};

    return mode;
}
