/*
** EPITECH PROJECT, 2024
** UPDATE_TURN_TEXT
** File description:
** Update turn text
** Author: lysandre.boursette@epitech.eu
*/

#include <stdio.h>
#include "my_rpg.h"

void update_turn_text(fighting_t *fight, bool turn)
{
    char text[14];

    sprintf(text, "Turn: %s", turn ? "Enemy" : "You");
    sfText_setString(fight->texts[FIGHTING_TURN_TEXT]->text, text);
}
