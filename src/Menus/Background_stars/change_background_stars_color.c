/*
** EPITECH PROJECT, 2024
** my_rpg
** File description:
** change_background_stars_color
*/

#include "my_rpg.h"

void change_background_stars_color(keybinds_t *keybinds)
{
    int nb_stars = 0;
    int index_star = 0;
    int alpha = 0;
    int new_alpha = 0;
    sfRectangleShape *star = NULL;
    sfColor color;

    nb_stars = get_random_number(keybinds->stars->bg_stars->size, MIN_NB_STAR);
    for (int i = 0; i < nb_stars; i++) {
        index_star = rand() % keybinds->stars->bg_stars->size + MIN_INDEX_STAR;
        star = lx_list_get(keybinds->stars->bg_stars, index_star - 1)->data;
        color = sfRectangleShape_getFillColor(star);
        alpha = get_random_number(MAX_ALPHA, MIN_ALPHA);
        new_alpha = color.a - alpha;
        if (new_alpha <= 0)
            new_alpha = 1;
        sfRectangleShape_setFillColor(star,
            sfColor_fromRGBA(color.r, color.g, color.b, new_alpha));
    }
}
