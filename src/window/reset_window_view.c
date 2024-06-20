/*
** EPITECH PROJECT, 2024
** myrpg
** File description:
** reset_window_view.c
** Author: nathan.jeannot@epitech.eu
*/

#include "my_rpg.h"

void reset_window_view(my_rpg_t *rpg)
{
    const sfView *view = sfRenderWindow_getDefaultView(rpg->window);

    sfRenderWindow_setView(rpg->window, view);
}
