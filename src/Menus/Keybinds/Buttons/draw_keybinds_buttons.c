/*
** EPITECH PROJECT, 2024
** my_rpg
** File description:
** draw_keybinds_buttons
*/

#include "my_rpg.h"

void draw_keybinds_buttons(my_rpg_t *rpg)
{
    for (int i = 0; rpg->options->keybinds->buttons[i] != NULL; i++) {
        sfRenderWindow_drawSprite(rpg->window,
            rpg->options->keybinds->buttons[i]->sprites[
            rpg->options->keybinds->buttons[i]->state], NULL);
        sfRenderWindow_drawText(rpg->window,
            rpg->options->keybinds->buttons[i]->text, NULL);
    }
}
