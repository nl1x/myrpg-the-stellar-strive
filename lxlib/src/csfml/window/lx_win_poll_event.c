/*
** EPITECH PROJECT, 2023
** myhunter
** File description:
** events.c
** Author: nathan.jeannot@epitech.eu
*/

#include "lx_csfml.h"

int lx_win_poll_event(lx_window_t *win, sfEvent *event)
{
    if (win == NULL || win->object == NULL)
        return 0;
    return sfRenderWindow_pollEvent(win->object, event);
}
