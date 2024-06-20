/*
** EPITECH PROJECT, 2024
** my_rpg
** File description:
** draw_text_box
*/

#include "my_rpg.h"

void draw_text_box(sfRenderWindow *window, text_box_t *text)
{
    sfRenderWindow_drawSprite(window, text->bg, NULL);
    sfRenderWindow_drawText(window, text->text->text, NULL);
}
