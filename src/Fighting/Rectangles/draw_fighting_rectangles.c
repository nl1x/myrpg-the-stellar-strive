/*
** EPITECH PROJECT, 2024
** my_rpg
** File description:
** draw_fighting_rectangles
*/

#include "my_rpg.h"

void draw_fighting_rectangles(my_rpg_t *rpg)
{
    for (int i = 0; rpg->game->fight->rectangles[i] != NULL; i++)
        sfRenderWindow_drawRectangleShape(rpg->window,
            rpg->game->fight->rectangles[i], NULL);
}
