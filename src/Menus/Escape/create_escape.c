/*
** EPITECH PROJECT, 2024
** my_rpg
** File description:
** create_escape
*/

#include "my_rpg.h"

escape_t *create_escape(void)
{
    escape_t *escape = calloc(1, sizeof(escape_t));

    create_escape_bg(escape);
    create_escape_buttons(escape);
    create_sound(CLICK_BUTTON_SOUND);
    return escape;
}
