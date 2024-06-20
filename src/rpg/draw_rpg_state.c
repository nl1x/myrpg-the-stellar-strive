/*
** EPITECH PROJECT, 2024
** my_rpg
** File description:
** draw_rpg_state.c
*/

#include "my_rpg.h"

void draw_rpg_state(my_rpg_t *rpg)
{
    if (rpg->state == MENU_STATE)
        draw_menu(rpg);
    if (rpg->state == OPTIONS_STATE)
        draw_options(rpg);
    if (rpg->state == LOAD_STATE)
        draw_load(rpg);
    if (rpg->state == KEYBINDS_STATE)
        draw_keybinds(rpg);
    if (rpg->state == TUTORIAL_STATE)
        draw_tutorial(rpg);
    if (rpg->state == NEW_GAME_STATE)
        draw_game(rpg);
    if (rpg->state == FIGHTING_NINJA_BASIC_STATE)
        draw_fighting(rpg);
    if (rpg->state == INVENTORY_STATE)
        draw_inventory(rpg);
    if (rpg->state == ESCAPE_STATE)
        draw_escape(rpg);
}
