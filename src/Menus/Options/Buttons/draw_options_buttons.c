/*
** EPITECH PROJECT, 2024
** my_rpg
** File description:
** draw_options_buttons
*/

#include "my_rpg.h"

void draw_options_buttons(my_rpg_t *rpg)
{
    for (int i = 0; rpg->options->buttons[i] != NULL; i++) {
        sfRenderWindow_drawSprite(rpg->window,
            rpg->options->buttons[i]->sprites[
            rpg->options->buttons[i]->state], NULL);
        sfRenderWindow_drawText(rpg->window,
            rpg->options->buttons[i]->text, NULL);
    }
}
