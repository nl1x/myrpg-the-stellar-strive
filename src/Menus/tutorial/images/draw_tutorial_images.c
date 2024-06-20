/*
** EPITECH PROJECT, 2024
** DRAW_TUTORIAL_BUTTONS
** File description:
** draw tutorial buttons
** Author: lysandre.boursette@epitech.eu
*/

#include "my_rpg.h"

void draw_tutorial_images(my_rpg_t *rpg)
{
    for (int i = 0; rpg->tutorial->sprites[i] != NULL; i++) {
        sfRenderWindow_drawSprite(rpg->window,
            rpg->tutorial->sprites[i], NULL);
    }
}
