/*
** EPITECH PROJECT, 2024
** DRAW_TUTORIAL
** File description:
** Tutorial window state drawing
** Author: lysandre.boursette@epitech.eu
*/

#include "my_rpg.h"

void draw_tutorial(my_rpg_t *rpg)
{
    draw_tutorial_background(rpg);
    draw_tutorial_buttons(rpg);
    draw_tutorial_images(rpg);
    draw_tutorial_texts(rpg);
}
