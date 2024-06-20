/*
** EPITECH PROJECT, 2024
** my_rpg
** File description:
** create_options
*/

#include "my_rpg.h"

options_t *create_options(void)
{
    options_t *options = calloc(1, sizeof(options_t));

    options->clock = calloc(1, sizeof(clockk_t));
    create_options_bg(options);
    options->clock->clock = sfClock_create();
    create_options_bg_entities(options);
    create_options_buttons(options);
    create_options_rectangles(options);
    options->sound = create_sound(CLICK_BUTTON_SOUND);
    create_options_texts(options);
    options->keybinds = create_keybinds();
    return options;
}
