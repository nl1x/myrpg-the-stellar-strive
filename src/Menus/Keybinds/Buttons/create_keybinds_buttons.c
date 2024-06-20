/*
** EPITECH PROJECT, 2024
** my_rpg
** File description:
** create_keybinds_buttons
*/

#include "my_rpg.h"
#include "assets.h"

void create_keybinds_buttons(keybinds_t *keybinds)
{
    keybinds->buttons = calloc(NB_BUTTONS_KEYBINDS, sizeof(button_t *));
    keybinds->buttons[KEYBINDS_BACK_BUTTON] = create_button(
        (sfVector2f){POS_X_BACK_BUTTON_KEYBINDS, POS_Y_BACK_BUTTON_KEYBINDS},
        (sfVector2f){SCALE_X_BACK_BUTTON_KEYBINDS,
        SCALE_Y_BACK_BUTTON_KEYBINDS},
        BUTTONS_BACK, " ");
    keybinds->buttons[KEYBINDS_MOVE_UP_BUTTON] = create_button(
        POS_MOVE_UP_BUTTON, SCALE_KEYBINDS_BUTTONS, BUTTONS_MENU, "Z");
    keybinds->buttons[KEYBINDS_MOVE_LEFT_BUTTON] = create_button(
        POS_MOVE_LEFT_BUTTON, SCALE_KEYBINDS_BUTTONS, BUTTONS_MENU, "Q");
    keybinds->buttons[KEYBINDS_MOVE_RIGHT_BUTTON] = create_button(
        POS_MOVE_RIGHT_BUTTON, SCALE_KEYBINDS_BUTTONS, BUTTONS_MENU, "D");
    keybinds->buttons[KEYBINDS_MOVE_DOWN_BUTTON] = create_button(
        POS_MOVE_DOWN_BUTTON, SCALE_KEYBINDS_BUTTONS, BUTTONS_MENU, "S");
    keybinds->buttons[KEYBINDS_INTERACT_BUTTON] = create_button(
        POS_INTERACT_BUTTON, SCALE_KEYBINDS_BUTTONS, BUTTONS_MENU, "F");
    keybinds->buttons[KEYBINDS_INVENTORY_BUTTON] = create_button(
        POS_INVENTORY_BUTTON, SCALE_KEYBINDS_BUTTONS, BUTTONS_MENU, "E");
}
