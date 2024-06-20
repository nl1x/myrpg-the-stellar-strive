/*
** EPITECH PROJECT, 2024
** DRAW_TUTORIAL_BACKGROUND
** File description:
** Draw tutorial background
** Author: lysandre.boursette@epitech.eu
*/

#include "my_rpg.h"

void draw_tutorial_background(my_rpg_t *rpg)
{
    sfRenderWindow_drawSprite(rpg->window, rpg->tutorial->background, NULL);
}
