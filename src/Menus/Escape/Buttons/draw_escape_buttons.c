/*
** EPITECH PROJECT, 2024
** my_rpg
** File description:
** draw_escape_buttons
*/

#include "my_rpg.h"

void draw_escape_buttons(my_rpg_t *rpg)
{
    for (int i = 0; rpg->escape->buttons[i] != NULL; i++) {
        sfRenderWindow_drawSprite(rpg->window,
            rpg->escape->buttons[i]->sprites[
            rpg->escape->buttons[i]->state], NULL);
        sfRenderWindow_drawText(rpg->window,
            rpg->escape->buttons[i]->text, NULL);
    }
}
