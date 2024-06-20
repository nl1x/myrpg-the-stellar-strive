/*
** EPITECH PROJECT, 2023
** myhunter
** File description:
** destroy.c
** Author: nathan.jeannot@epitech.eu
*/

#include <malloc.h>
#include "lx_csfml.h"

void lx_win_destroy(lx_window_t *win)
{
    if (win == NULL)
        return;
    sfRenderWindow_destroy(win->object);
    lx_frame_destroy(win->current_frame);
    free(win);
}
