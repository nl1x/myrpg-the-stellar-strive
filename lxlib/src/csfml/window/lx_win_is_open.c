/*
** EPITECH PROJECT, 2023
** myhunter
** File description:
** is_open.c
** Author: nathan.jeannot@epitech.eu
*/

#include "lx_csfml.h"

int lx_win_is_open(lx_window_t *win)
{
    if (win == NULL)
        return 0;
    return sfRenderWindow_isOpen(win->object);
}
