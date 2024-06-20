/*
** EPITECH PROJECT, 2024
** my_rpg
** File description:
** create_new_background_stars
*/

#include "my_rpg.h"

void create_new_background_stars(keybinds_t *keybinds)
{
    int new_stars = 0;
    sfVector2f pos = {0, 0};
    float size = 0.0;

    new_stars = get_random_number(MAX_NEW_STARS, MIN_NEW_STARS);
    for (int i = 0; i < new_stars; i++) {
        pos.x = get_random_number(MIN_X_WINDOW_SIZE, MAX_X_WINDOW_SIZE);
        pos.y = get_random_number(MIN_Y_WINDOW_SIZE, MAX_Y_WINDOW_SIZE);
        size = get_random_number(MIN_SIZE_STARS, MAX_SIZE_STARS);
        lx_list_append(keybinds->stars->bg_stars, create_rectangle(pos,
            (sfVector2f){ORIGIN_X_STARS, ORIGIN_Y_STARS}, sfWhite,
            (sfVector2f){size, size}));
    }
}
