/*
** EPITECH PROJECT, 2024
** my_rpg
** File description:
** destroy_button
*/

#include "my_rpg.h"

void destroy_button(button_t *button)
{
    if (!button)
        return;
    for (int i = 0; button->sprites[i] != NULL; i++)
        sfSprite_destroy(button->sprites[i]);
    for (int i = 0; button->textures[i] != NULL; i++)
        sfTexture_destroy(button->textures[i]);
    sfFont_destroy((sfFont *)sfText_getFont(button->text));
    sfText_destroy(button->text);
    free(button);
}
