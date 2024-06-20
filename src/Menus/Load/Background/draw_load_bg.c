/*
** EPITECH PROJECT, 2024
** my_rpg
** File description:
** draw_load_bg
*/

#include "my_rpg.h"

void draw_load_bg(my_rpg_t *rpg)
{
    for (int i = 0; rpg->load->sprites[i] != NULL; i++)
        sfRenderWindow_drawSprite(rpg->window, rpg->load->sprites[i], NULL);
    for (int i = 0; rpg->load->anim_entity[i] != NULL; i++)
        sfRenderWindow_drawSprite(rpg->window,
            rpg->load->anim_entity[i]->entity->sprite, NULL);
}
