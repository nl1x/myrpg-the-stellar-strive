/*
** EPITECH PROJECT, 2024
** my_rpg
** File description:
** draw_load_texts
*/

#include "my_rpg.h"

void draw_load_texts(my_rpg_t *rpg)
{
    for (int i = 0; rpg->load->texts[i] != NULL; i++)
        sfRenderWindow_drawText(rpg->window, rpg->load->texts[i]->text, NULL);
}
