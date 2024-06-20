/*
** EPITECH PROJECT, 2023
** myhunter
** File description:
** new.c
** Author: nathan.jeannot@epitech.eu
*/

#include <malloc.h>
#include "lx_csfml.h"

lx_text_t *lx_text_new(
    char const *content, char const *font_path, int size, sfVector2f pos
)
{
    lx_text_t *text = malloc(sizeof(lx_text_t));
    sfFont *font = sfFont_createFromFile(font_path);

    text->object = sfText_create();
    text->content = lx_str_new(content);
    text->bg = sfTransparent;
    text->fg = sfWhite;
    text->pos = pos;
    text->font = font;
    sfText_setFont(text->object, font);
    sfText_setCharacterSize(text->object, size);
    sfText_setString(text->object, text->content);
    sfText_setPosition(text->object, text->pos);
    return text;
}
