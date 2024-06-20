/*
** EPITECH PROJECT, 2023
** my_hunter
** File description:
** text
*/

#include "my_rpg.h"

sfText *create_text_button(char *str, sfVector2f position, int size,
    char const *path)
{
    sfText *text = sfText_create();
    sfFont *font = sfFont_createFromFile(path);
    sfVector2f origin;
    sfFloatRect text_rect;

    sfText_setString(text, str);
    sfText_setColor(text, sfWhite);
    sfText_setFont(text, font);
    sfText_setCharacterSize(text, size);
    text_rect = sfText_getGlobalBounds(text);
    origin.x = text_rect.width / 2;
    origin.y = text_rect.height / 2;
    sfText_setOrigin(text, origin);
    sfText_setPosition(text, position);
    return text;
}
