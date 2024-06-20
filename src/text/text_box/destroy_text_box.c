/*
** EPITECH PROJECT, 2024
** my_rpg
** File description:
** destroy_text_box
*/

#include "my_rpg.h"

void destroy_text_box(text_box_t *text_box)
{
    if (!text_box)
        return;
    if (text_box->bg)
        sfSprite_destroy(text_box->bg);
    if (text_box->text)
        destroy_text(text_box->text);
    if (text_box->texture)
        sfTexture_destroy(text_box->texture);
    free(text_box);
}
