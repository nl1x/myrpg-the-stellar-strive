/*
** EPITECH PROJECT, 2024
** my_rpg
** File description:
** draw_fighting_texts
*/

#include "my_rpg.h"

void draw_fighting_texts(my_rpg_t *rpg)
{
    sfRenderWindow_drawText(rpg->window,
        rpg->game->fight->texts[FIGHTING_HP_TEXT]->text, NULL);
    sfRenderWindow_drawText(rpg->window,
        rpg->game->fight->texts[FIGHTING_TURN_TEXT]->text, NULL);
    if (rpg->game->fight->state == FIGHTING_ATTACK_STATE)
        sfRenderWindow_drawText(rpg->window,
            rpg->game->fight->texts[FIGHTING_SELECT_ENEMY_TEXT]->text, NULL);
    if (rpg->game->fight->state == FIGHTING_MENU_MAGIC_STATE)
        for (int i = 2; rpg->game->fight->texts[i] != NULL; i++)
            sfRenderWindow_drawText(rpg->window,
                rpg->game->fight->texts[i]->text, NULL);
}
