/*
** EPITECH PROJECT, 2024
** my_rpg
** File description:
** draw_new_game
*/

#include "my_rpg.h"

void draw_new_game(my_rpg_t *rpg)
{
    draw_new_game_bg(rpg);
    if (rpg->new_game->npc == NULL)
        return;
    for (int i = 0; rpg->new_game->npc[i] != NULL; i++)
        if (rpg->new_game->npc[i]->in_text_box == true)
            draw_text_box(rpg->window, rpg->new_game->npc[i]->text);
}
