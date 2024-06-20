/*
** EPITECH PROJECT, 2024
** my_rpg
** File description:
** draw_keybinds_texts
*/

#include "my_rpg.h"

void draw_keybinds_texts(my_rpg_t *rpg)
{
    for (int i = 0; rpg->options->keybinds->texts[i] != NULL; i++)
        sfRenderWindow_drawText(rpg->window,
        rpg->options->keybinds->texts[i]->text, NULL);
}
