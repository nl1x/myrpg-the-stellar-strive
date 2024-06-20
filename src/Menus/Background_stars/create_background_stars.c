/*
** EPITECH PROJECT, 2024
** my_rpg
** File description:
** create_background_stars
*/

#include "my_rpg.h"

bg_stars_t *create_background_stars(void)
{
    bg_stars_t *stars = calloc(1, sizeof(bg_stars_t));
    int nb_stars = get_random_number(MAX_BASE_NB_BG_STARS,
        MIN_BASE_NB_BG_STARS);
    sfVector2f pos = {0, 0};
    float size = 0.0;

    stars->bg_stars = lx_list_new();
    for (int i = 0; i < nb_stars; i++) {
        pos.x = get_random_number(MAX_X_WINDOW_SIZE, MIN_X_WINDOW_SIZE);
        pos.y = get_random_number(MAX_Y_WINDOW_SIZE, MIN_Y_WINDOW_SIZE);
        size = get_random_number(MAX_SIZE_STARS, MIN_SIZE_STARS);
        lx_list_append(stars->bg_stars, create_rectangle(pos,
            (sfVector2f){ORIGIN_X_STARS, ORIGIN_Y_STARS}, sfWhite,
            (sfVector2f){size, size}));
    }
    return stars;
}
