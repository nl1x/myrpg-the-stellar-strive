/*
** EPITECH PROJECT, 2024
** my_rpg
** File description:
** destroy_button_path
*/

#include "my_rpg.h"

void destroy_button_path(buttons_path_t *button)
{
    if (!button)
        return;
    if (button->clicked_path)
        free(button->clicked_path);
    if (button->hover_path)
        free(button->hover_path);
    if (button->none_path)
        free(button->none_path);
    free(button);
}
