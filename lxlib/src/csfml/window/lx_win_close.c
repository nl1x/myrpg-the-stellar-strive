/*
** EPITECH PROJECT, 2023
** myhunter
** File description:
** close.c
** Author: nathan.jeannot@epitech.eu
*/

#include <malloc.h>
#include "lx_csfml.h"

static
void destroy_frame(lx_frame_t *frame)
{
    if (frame != NULL)
        lx_frame_destroy(frame);
}

void lx_win_close(lx_window_t *win, int destroy)
{
    if (lx_win_is_open(win))
        sfRenderWindow_close(win->object);
    if (destroy) {
        for (unsigned int i = 0; i < win->frames->amount; i++)
            destroy_frame(lx_list_get(win->frames->objects, i)->data);
        sfRenderWindow_destroy(win->object);
        free(win);
    }
}
