/*
** EPITECH PROJECT, 2024
** my_rpg
** File description:
** draw_keybinds_bg
*/

#include "my_rpg.h"

void draw_keybinds_bg(my_rpg_t *rpg)
{
    lx_node_t *node = rpg->options->keybinds->stars->bg_stars->head;
    sfRectangleShape *star = NULL;

    for (int i = 0; rpg->options->keybinds->sprites[i] != NULL; i++)
        sfRenderWindow_drawSprite(rpg->window,
        rpg->options->keybinds->sprites[i], NULL);
    while (node != NULL) {
        star = node->data;
        sfRenderWindow_drawRectangleShape(rpg->window, star, NULL);
        node = node->next;
    }
    for (int i = 0; rpg->options->keybinds->anim_entity[i] != NULL; i++)
        sfRenderWindow_drawSprite(rpg->window,
            rpg->options->keybinds->anim_entity[i]->entity->sprite, NULL);
}
