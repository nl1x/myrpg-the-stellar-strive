/*
** EPITECH PROJECT, 2024
** my_rpg
** File description:
** create_load_buttons
*/

#include "my_rpg.h"
#include "assets.h"

void create_load_buttons(load_t *load)
{
    load->buttons = calloc(NB_BUTTONS_LOAD, sizeof(button_t *));
    load->buttons[LOAD_BACK_BUTTON] = create_button(
        (sfVector2f){POS_X_BACK_BUTTON_LOAD, POS_Y_BACK_BUTTON_LOAD},
        (sfVector2f){SCALE_X_BACK_BUTTON_LOAD, SCALE_Y_BACK_BUTTON_LOAD},
        BUTTONS_BACK, " ");
}
