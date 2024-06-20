/*
** EPITECH PROJECT, 2024
** my_rpg
** File description:
** destroy_background_stars
*/

#include "my_rpg.h"

void destroy_background_stars(bg_stars_t *stars)
{
    if (!stars)
        return;
    if (stars->bg_stars)
        lx_list_destroy(stars->bg_stars, (void *)sfRectangleShape_destroy);
    free(stars);
}
