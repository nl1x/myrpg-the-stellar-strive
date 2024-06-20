/*
** EPITECH PROJECT, 2024
** my_rpg
** File description:
** draw_menu
*/

#include "my_rpg.h"

void draw_menu(my_rpg_t *rpg)
{
    draw_menu_bg(rpg);
    clock_menu(rpg->menu);
    draw_menu_buttons(rpg);
}
