/*
** EPITECH PROJECT, 2024
** my_rpg
** File description:
** create_escape_buttons
*/

#include "my_rpg.h"

void create_escape_buttons(escape_t *escape)
{
    escape->buttons = calloc(3, sizeof(button_t *));
    escape->buttons[ESCAPE_RESUME] = create_button((sfVector2f){200, 450},
        (sfVector2f){1.5, 1.5}, BUTTONS_MENU, "RESUME");
    escape->buttons[BACK_TO_MENU_RESUME] = create_button(
        (sfVector2f){1200, 450}, (sfVector2f){1.5, 1.5},
        BUTTONS_MENU, "BACK TO MENU");
}
