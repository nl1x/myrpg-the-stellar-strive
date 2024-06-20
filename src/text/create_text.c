/*
** EPITECH PROJECT, 2024
** my_rpg
** File description:
** create_text_t
*/

#include "my_rpg.h"

text_t *create_text(char *str, format_t *format)
{
    text_t *text = calloc(1, sizeof(text_t));
    sfFont *font = sfFont_createFromFile(format->path);
    sfVector2f origin;
    sfFloatRect text_rect;

    text->text = sfText_create();
    sfText_setString(text->text, str);
    sfText_setColor(text->text, format->color);
    sfText_setFont(text->text, font);
    sfText_setCharacterSize(text->text, format->size);
    text_rect = sfText_getGlobalBounds(text->text);
    origin.x = text_rect.width / 2;
    origin.y = text_rect.height / 2;
    sfText_setOrigin(text->text, origin);
    sfText_setPosition(text->text, format->pos);
    return text;
}
