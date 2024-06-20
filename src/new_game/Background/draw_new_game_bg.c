/*
** EPITECH PROJECT, 2024
** my_rpg
** File description:
** draw_new_game_bg
*/

#include "my_rpg.h"

void draw_new_game_bg(my_rpg_t *rpg)
{
    for (int i = 0; rpg->new_game->sprites[i] != NULL; i++)
        sfRenderWindow_drawSprite(rpg->window,
        rpg->new_game->sprites[i], NULL);
}
