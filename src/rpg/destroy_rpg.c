/*
** EPITECH PROJECT, 2024
** my_rpg
** File description:
** destroy_rpg
*/

#include "my_rpg.h"

void destroy_rpg(my_rpg_t *rpg)
{
    if (!rpg)
        return;
    if (rpg->icon)
        sfImage_destroy(rpg->icon);
    if (rpg->load)
        destroy_load(rpg->load);
    if (rpg->menu)
        destroy_menu(rpg->menu);
    if (rpg->options)
        destroy_options(rpg->options);
    if (rpg->window)
        sfRenderWindow_destroy(rpg->window);
    if (rpg->tutorial)
        destroy_tutorial(rpg->tutorial);
    if (rpg->new_game)
        destroy_new_game(rpg->new_game);
    if (rpg->game)
        destroy_game(rpg->game);
    free(rpg);
}
