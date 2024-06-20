/*
** EPITECH PROJECT, 2024
** my_rpg
** File description:
** check_keybinds_already_used
*/

#include "my_rpg.h"

bool check_keybinds_already_used(my_rpg_t *rpg, int key)
{
    bool is_used = false;

    for (int i = 0; rpg->game->keybinds[i] != '\0'; i++) {
        if (key == rpg->game->keybinds[i])
            is_used = true;
    }
    return is_used;
}
