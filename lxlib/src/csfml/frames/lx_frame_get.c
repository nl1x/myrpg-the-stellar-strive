/*
** EPITECH PROJECT, 2023
** myhunter
** File description:
** get.c
** Author: nathan.jeannot@epitech.eu
*/

#include "lx_csfml.h"
#include "lx_lib.h"

lx_frame_t *lx_frame_get(lx_window_t *win, char const *name)
{
    lx_frame_t *frame = NULL;
    unsigned int i = 0;

    do {
        frame = lx_list_get(win->frames->objects, i)->data;
        i++;
    } while (i < win->frames->amount && lx_str_cmp(frame->name, name) == 0);
    return frame;
}
