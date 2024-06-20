/*
** EPITECH PROJECT, 2024
** my_rpg
** File description:
** create_rpg
*/

#include <stdio.h>
#include "my_rpg.h"
#include "assets.h"

static
void create_icon(my_rpg_t *rpg)
{
    rpg->icon = sfImage_createFromFile(path_assets[ICON_WINDOW]);
    sfRenderWindow_setIcon(rpg->window, sfImage_getSize(rpg->icon).x,
        sfImage_getSize(rpg->icon).y, sfImage_getPixelsPtr(rpg->icon));
}

my_rpg_t *create_rpg(void)
{
    my_rpg_t *rpg = calloc(1, sizeof(my_rpg_t));

    rpg->mode = (sfVideoMode){1920, 1080, 32};
    rpg->window = sfRenderWindow_create(rpg->mode, "My RPG",
        sfResize | sfClose, NULL);
    rpg->state = MENU_STATE;
    create_icon(rpg);
    rpg->menu = create_menu();
    rpg->options = create_options();
    rpg->load = create_load();
    rpg->game = create_game(rpg->window);
    rpg->new_game = create_new_game();
    rpg->tutorial = create_tutorial(rpg);
    if (load_npcs(rpg) == FAILURE)
        return destroy_rpg(rpg), NULL;
    rpg->all_items = create_all_items();
    reset_window_view(rpg);
    rpg->escape = create_escape();
    return rpg;
}
