/*
** EPITECH PROJECT, 2023
** myhunter
** File description:
** display.c
** Author: nathan.jeannot@epitech.eu
*/

#include "lx_csfml.h"

static
void lx_frame_display_sprites(lx_children_t *sprites, lx_window_t *win)
{
    unsigned int amount = sprites->amount;

    for (unsigned int i = 0; i < amount; i++) {
        lx_sprite_display(lx_list_get(sprites->objects, i)->data, win);
    }
}

static
void lx_frame_display_texts(lx_children_t *texts, lx_window_t *win)
{
    unsigned int amount = texts->amount;

    for (unsigned int i = 0; i < amount; i++) {
        lx_text_display(lx_list_get(texts->objects, i)->data, win);
    }
}

void lx_frame_display(lx_frame_t *frame, lx_window_t *win)
{
    lx_frame_display_sprites(frame->sprites, win);
    lx_frame_display_texts(frame->texts, win);
}
