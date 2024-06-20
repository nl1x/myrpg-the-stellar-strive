/*
** EPITECH PROJECT, 2024
** my_rpg
** File description:
** draw_options
*/

#include "my_rpg.h"

void draw_options(my_rpg_t *rpg)
{
    draw_options_bg(rpg);
    clock_options(rpg->options);
    draw_options_buttons(rpg);
    draw_options_rectangles(rpg);
    draw_options_texts(rpg);
}
