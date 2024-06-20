/*
** EPITECH PROJECT, 2024
** my_rpg
** File description:
** draw_menu_buttons
*/

#include "my_rpg.h"

void draw_menu_buttons(my_rpg_t *rpg)
{
    for (int i = 0; rpg->menu->buttons[i] != NULL; i++) {
        sfRenderWindow_drawSprite(rpg->window,
            rpg->menu->buttons[i]->sprites[
            rpg->menu->buttons[i]->state], NULL);
        sfRenderWindow_drawText(rpg->window,
            rpg->menu->buttons[i]->text, NULL);
    }
}
