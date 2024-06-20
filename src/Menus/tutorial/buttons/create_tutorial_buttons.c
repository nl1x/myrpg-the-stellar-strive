/*
** EPITECH PROJECT, 2024
** CREATE_TUTORIAL_BUTTONS
** File description:
** create tutorial buttons
** Author: lysandre.boursette@epitech.eu
*/

#include "my_rpg.h"

void create_tutorial_buttons(tutorial_t *tutorial)
{
    tutorial->buttons = calloc(NB_BUTTONS_TUTORIAL + 1, sizeof(button_t *));
    tutorial->buttons[TUTORIAL_PLAY_BUTTON] = create_button(
        (sfVector2f){POS_X_PLAY_BUTTON_TUTORIAL, POS_Y_PLAY_BUTTON_TUTORIAL},
        (sfVector2f){SCALE_X_PLAY_BUTTON_TUTORIAL,
            SCALE_Y_PLAY_BUTTON_TUTORIAL},
        BUTTONS_PLAY, " ");
}
