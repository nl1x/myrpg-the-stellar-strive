/*
** EPITECH PROJECT, 2023
** myhunter
** File description:
** set_current_frame.c
** Author: nathan.jeannot@epitech.eu
*/

#include "lx_csfml.h"

void lx_win_switch_frame(lx_window_t *win, lx_frame_t *frame)
{
    win->current_frame = frame;
}
