/*
** EPITECH PROJECT, 2024
** my_rpg
** File description:
** draw_fighting_buttons
*/

#include "my_rpg.h"

void draw_fighting_buttons(my_rpg_t *rpg)
{
    if (rpg->game->fight->state == FIGHTING_MENU_STATE)
        for (int i = 0; i < 4; i++)
            sfRenderWindow_drawText(rpg->window,
                rpg->game->fight->buttons[i]->text, NULL);
    if (rpg->game->fight->state == FIGHTING_MENU_MAGIC_STATE)
        for (int i = 4; i < 8; i++)
            sfRenderWindow_drawText(rpg->window,
                rpg->game->fight->buttons[i]->text, NULL);
    if (rpg->game->fight->state == FIGHTING_ATTACK_STATE)
        sfRenderWindow_drawText(rpg->window,
            rpg->game->fight->buttons[FIGHTING_CANCEL_BUTTONS]->text,
            NULL);
}
