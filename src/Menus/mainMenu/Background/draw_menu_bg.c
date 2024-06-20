/*
** EPITECH PROJECT, 2024
** my_rpg
** File description:
** draw_menu_bg
*/

#include "my_rpg.h"

void draw_menu_bg(my_rpg_t *rpg)
{
    for (int i = 0; rpg->menu->sprites[i] != NULL; i++)
        sfRenderWindow_drawSprite(rpg->window, rpg->menu->sprites[i], NULL);
    for (int i = 0; rpg->menu->anim_entity[i] != NULL; i++)
        sfRenderWindow_drawSprite(rpg->window,
            rpg->menu->anim_entity[i]->entity->sprite, NULL);
}
