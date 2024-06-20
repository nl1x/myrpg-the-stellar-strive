/*
** EPITECH PROJECT, 2024
** my_rpg
** File description:
** draw_escape
*/

#include "my_rpg.h"

void draw_escape(my_rpg_t *rpg)
{
    sfRenderWindow_setView(rpg->window,
        sfRenderWindow_getDefaultView(rpg->window));
    draw_escape_bg(rpg);
    draw_escape_buttons(rpg);
}
