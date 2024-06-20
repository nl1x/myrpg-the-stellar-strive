/*
** EPITECH PROJECT, 2024
** my_rpg
** File description:
** create_menu_buttons
*/

#include "my_rpg.h"
#include "assets.h"

void create_menu_buttons(menu_t *menu)
{
    menu->buttons = calloc(NB_BUTTONS_MENU, sizeof(button_t *));
    menu->buttons[NEW_GAME_BUTTON] = create_button(
        (sfVector2f){POS_X_NEW_GAME_BUTTON, POS_Y_NEW_GAME_BUTTON},
        (sfVector2f){SCALE_X_NEW_GAME_BUTTON, SCALE_Y_NEW_GAME_BUTTON},
        BUTTONS_MENU, "NEW GAME");
    menu->buttons[LOAD_BUTTON] = create_button(
        (sfVector2f){POS_X_LOAD_BUTTON, POS_Y_LOAD_BUTTON},
        (sfVector2f){SCALE_X_LOAD_BUTTON, SCALE_Y_LOAD_BUTTON},
        BUTTONS_MENU, "LOAD");
    menu->buttons[OPTIONS_BUTTON] = create_button(
        (sfVector2f){POS_X_OPTIONS_BUTTON, POS_Y_OPTIONS_BUTTON},
        (sfVector2f){SCALE_X_OPTIONS_BUTTON, SCALE_Y_OPTIONS_BUTTON},
        BUTTONS_MENU, "OPTIONS");
    menu->buttons[EXIT_BUTTON] = create_button(
        (sfVector2f){POS_X_EXIT_BUTTON, POS_Y_EXIT_BUTTON},
        (sfVector2f){SCALE_X_EXIT_BUTTON, SCALE_Y_EXIT_BUTTON},
        BUTTONS_MENU, "EXIT");
}
