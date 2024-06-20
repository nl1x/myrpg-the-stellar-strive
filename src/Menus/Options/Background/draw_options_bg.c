/*
** EPITECH PROJECT, 2024
** my_rpg
** File description:
** draw_options_bg
*/

#include "my_rpg.h"

void draw_options_bg(my_rpg_t *rpg)
{
    for (int i = 0; rpg->options->sprites[i] != NULL; i++)
        sfRenderWindow_drawSprite(rpg->window, rpg->options->sprites[i], NULL);
    for (int i = 0; rpg->options->anim_entity[i] != NULL; i++)
        sfRenderWindow_drawSprite(rpg->window,
            rpg->options->anim_entity[i]->entity->sprite, NULL);
}
