/*
** EPITECH PROJECT, 2024
** my_rpg
** File description:
** set_text_text_box
*/

#include "my_rpg.h"

void set_text_text_box(char *text, text_box_t *text_box)
{
    sfText_setString(text_box->text->text, text);
}
