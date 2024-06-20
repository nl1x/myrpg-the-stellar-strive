/*
** EPITECH PROJECT, 2024
** my_rpg
** File description:
** create_load
*/

#include "my_rpg.h"
#include "assets.h"

load_t *create_load(void)
{
    load_t *load = calloc(1, sizeof(load_t));

    load->clock = calloc(1, sizeof(clockk_t));
    create_load_bg(load);
    load->clock->clock = sfClock_create();
    create_load_bg_entities(load);
    create_load_buttons(load);
    load->sound = create_sound(CLICK_BUTTON_SOUND);
    create_load_texts(load);
    return load;
}
