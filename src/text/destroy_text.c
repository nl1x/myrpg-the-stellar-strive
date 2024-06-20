/*
** EPITECH PROJECT, 2024
** my_rpg
** File description:
** destroy_text
*/

#include "my_rpg.h"

void destroy_text(text_t *text)
{
    if (!text)
        return;
    if (text->format)
        destroy_format(text->format);
    sfFont_destroy((sfFont *)sfText_getFont(text->text));
    sfText_destroy(text->text);
    free(text);
}
