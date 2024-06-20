/*
** EPITECH PROJECT, 2024
** my_rpg
** File description:
** draw_escape_bg
*/

#include "my_rpg.h"

void draw_escape_bg(my_rpg_t *rpg)
{
    for (int i = 0; rpg->escape->sprites[i] != NULL; i++)
        sfRenderWindow_drawSprite(rpg->window, rpg->escape->sprites[i],
            NULL);
}
