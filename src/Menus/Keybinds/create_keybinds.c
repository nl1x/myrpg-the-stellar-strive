/*
** EPITECH PROJECT, 2024
** my_rpg
** File description:
** create_keybinds
*/

#include "my_rpg.h"

keybinds_t *create_keybinds(void)
{
    keybinds_t *keybinds = calloc(1, sizeof(keybinds_t));

    keybinds->clock = calloc(1, sizeof(clockk_t));
    keybinds->clock->clock = sfClock_create();
    create_keybinds_bg(keybinds);
    create_keybinds_bg_entities(keybinds);
    create_keybinds_buttons(keybinds);
    keybinds->sound = create_sound(CLICK_BUTTON_SOUND);
    create_keybinds_texts(keybinds);
    keybinds->stars = create_background_stars();
    return keybinds;
}
