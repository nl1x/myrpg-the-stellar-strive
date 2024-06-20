/*
** EPITECH PROJECT, 2023
** myhunter
** File description:
** display.c
** Author: nathan.jeannot@epitech.eu
*/

#include <SFML/Graphics.h>
#include "lx_lib.h"
#include "lx_csfml.h"

void lx_sprite_display(lx_sprite_t *sprite, lx_window_t *win)
{
    sfRenderWindow_drawSprite(win->object, sprite->object, NULL);
}
