/*
** EPITECH PROJECT, 2024
** DESTROY_FIGHTING_PLAYER_TEXT
** File description:
** Destroy fighting player text
** Author: lysandre.boursette@epitech.eu
*/

#include "my_rpg.h"

void destroy_fighting_player_text(fighting_t *fight)
{
    if (!fight->player_text)
        return;
    destroy_text(fight->player_text);
}
