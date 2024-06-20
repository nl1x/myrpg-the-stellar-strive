/*
** EPITECH PROJECT, 2023
** lib
** File description:
** get_microseconds.c
** Author: nathan.jeannot@epitech.eu
*/

#include <SFML/Window.h>

long long lx_clock_get_ms(sfClock *clock)
{
    sfTime time = sfClock_getElapsedTime(clock);

    return time.microseconds;
}
