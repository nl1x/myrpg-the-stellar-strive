/*
** EPITECH PROJECT, 2024
** my_rpg
** File description:
** remove_background_stars
*/

#include "my_rpg.h"

void remove_background_stars(keybinds_t *keybinds)
{
    lx_node_t *node = keybinds->stars->bg_stars->head;
    sfRectangleShape *star = NULL;
    sfColor color;

    while (node != NULL) {
        star = node->data;
        color = sfRectangleShape_getFillColor(star);
        if (color.a <= 1)
            lx_list_remove(keybinds->stars->bg_stars, node);
        node = node->next;
    }
}
