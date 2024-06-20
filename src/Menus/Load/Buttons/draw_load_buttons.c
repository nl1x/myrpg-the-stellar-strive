/*
** EPITECH PROJECT, 2024
** my_rpg
** File description:
** draw_load_buttons
*/

#include "my_rpg.h"

void draw_load_buttons(my_rpg_t *rpg)
{
    for (int i = 0; rpg->load->buttons[i] != NULL; i++) {
        sfRenderWindow_drawSprite(rpg->window,
            rpg->load->buttons[i]->sprites[
            rpg->load->buttons[i]->state], NULL);
        sfRenderWindow_drawText(rpg->window,
            rpg->load->buttons[i]->text, NULL);
    }
}
