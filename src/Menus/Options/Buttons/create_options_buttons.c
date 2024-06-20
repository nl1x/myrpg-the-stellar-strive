/*
** EPITECH PROJECT, 2024
** my_rpg
** File description:
** create_options_buttons
*/

#include "my_rpg.h"

static
void create_options_buttons_2(options_t *options)
{
    options->buttons[OPTIONS_SOUND_OFF] = create_button(
        (sfVector2f){POS_X_SOUND_OFF_BUTTON, POS_Y_SOUND_OFF_BUTTON},
        (sfVector2f){SCALE_X_SOUND_OFF_BUTTON, SCALE_Y_SOUND_OFF_BUTTON},
        BUTTONS_SOUND_OFF, " ");
    options->buttons[OPTIONS_KEYBINDS] = create_button(
        (sfVector2f){POS_X_KEYBINDS_BUTTON, POS_Y_KEYBINDS_BUTTON},
        (sfVector2f){SCALE_X_KEYBINDS_BUTTON, SCALE_Y_KEYBINDS_BUTTON},
        BUTTONS_MENU, "KEYBINDS");
}

void create_options_buttons(options_t *options)
{
    options->buttons = calloc(NB_BUTTONS_OPTIONS, sizeof(button_t *));
    options->buttons[OPTIONS_BACK_BUTTON] = create_button(
        (sfVector2f){POS_X_BACK_BUTTON_OPTIONS, POS_Y_BACK_BUTTON_OPTIONS},
        (sfVector2f){SCALE_X_BACK_BUTTON_OPTIONS, SCALE_Y_BACK_BUTTON_OPTIONS},
        BUTTONS_BACK, " ");
    options->buttons[OPTIONS_MUSIC_ON] = create_button(
        (sfVector2f){POS_X_MUSIC_ON_BUTTON, POS_Y_MUSIC_ON_BUTTON},
        (sfVector2f){SCALE_X_MUSIC_ON_BUTTON, SCALE_Y_MUSIC_ON_BUTTON},
        BUTTONS_MUSIC_ON, " ");
    options->buttons[OPTIONS_MUSIC_OFF] = create_button(
        (sfVector2f){POS_X_MUSIC_OFF_BUTTON, POS_Y_MUSIC_OFF_BUTTON},
        (sfVector2f){SCALE_X_MUSIC_OFF_BUTTON, SCALE_Y_MUSIC_OFF_BUTTON},
        BUTTONS_MUSIC_OFF, " ");
    options->buttons[OPTIONS_SOUND_ON] = create_button(
        (sfVector2f){POS_X_SOUND_ON_BUTTON, POS_Y_SOUND_ON_BUTTON},
        (sfVector2f){SCALE_X_SOUND_ON_BUTTON, SCALE_Y_SOUND_ON_BUTTON},
        BUTTONS_SOUND_ON, " ");
    create_options_buttons_2(options);
}
