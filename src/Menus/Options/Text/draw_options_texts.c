/*
** EPITECH PROJECT, 2024
** my_rpg
** File description:
** draw_options_texts
*/

#include "my_rpg.h"

void draw_options_texts(my_rpg_t *rpg)
{
    for (int i = 0; rpg->options->texts[i] != NULL; i++)
        sfRenderWindow_drawText(rpg->window, rpg->options->texts[i]->text,
            NULL);
}
