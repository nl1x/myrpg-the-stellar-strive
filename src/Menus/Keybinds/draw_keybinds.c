/*
** EPITECH PROJECT, 2024
** my_rpg
** File description:
** draw_keybinds
*/

#include "my_rpg.h"

void draw_keybinds(my_rpg_t *rpg)
{
    draw_keybinds_bg(rpg);
    clock_keybinds(rpg->options->keybinds);
    draw_keybinds_buttons(rpg);
    draw_keybinds_texts(rpg);
}
