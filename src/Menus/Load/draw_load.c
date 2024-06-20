/*
** EPITECH PROJECT, 2024
** my_rpg
** File description:
** draw_load
*/

#include "my_rpg.h"

void draw_load(my_rpg_t *rpg)
{
    clock_load(rpg->load);
    draw_load_bg(rpg);
    draw_load_buttons(rpg);
    draw_load_texts(rpg);
}
