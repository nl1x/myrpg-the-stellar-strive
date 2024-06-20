/*
** EPITECH PROJECT, 2024
** DRAW_TUTORIAL_TEXTS
** File description:
** Draw tutorial texts
** Author: lysandre.boursette@epitech.eu
*/

#include "my_rpg.h"

void draw_tutorial_texts(my_rpg_t *rpg)
{
    for (int i = 0; rpg->tutorial->texts[i] != NULL; i++)
        sfRenderWindow_drawText(rpg->window,
            rpg->tutorial->texts[i]->text, NULL);
}
