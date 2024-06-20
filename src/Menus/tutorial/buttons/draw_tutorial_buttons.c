/*
** EPITECH PROJECT, 2024
** DRAW_TUTORIAL_BUTTONS
** File description:
** draw tutorial buttons
** Author: lysandre.boursette@epitech.eu
*/

#include "my_rpg.h"

void draw_tutorial_buttons(my_rpg_t *rpg)
{
    for (int i = 0; rpg->tutorial->buttons[i] != NULL; i++) {
        sfRenderWindow_drawSprite(rpg->window,
            rpg->tutorial->buttons[i]->sprites[
            rpg->tutorial->buttons[i]->state], NULL);
    }
}
