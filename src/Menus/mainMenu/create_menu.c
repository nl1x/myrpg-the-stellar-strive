/*
** EPITECH PROJECT, 2024
** my_rpg
** File description:
** create_menu
*/

#include "my_rpg.h"
#include "assets.h"

menu_t *create_menu(void)
{
    menu_t *menu = calloc(1, sizeof(menu_t));

    menu->clock = calloc(1, sizeof(clockk_t));
    create_menu_bg(menu);
    menu->clock->clock = sfClock_create();
    create_menu_bg_entities(menu);
    create_menu_buttons(menu);
    menu->music = create_music(MAIN_MENU_THEME);
    menu->sound = create_sound(CLICK_BUTTON_SOUND);
    return menu;
}
