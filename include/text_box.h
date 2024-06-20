/*
** EPITECH PROJECT, 2024
** my_rpg
** File description:
** text_box
*/

#ifndef TEXT_BOX_H_
    #define TEXT_BOX_H_

    #include <SFML/Graphics.h>
    #include "text.h"

typedef struct {
    sfSprite *bg;
    sfTexture *texture;
    text_t *text;
    int index;
} text_box_t;

text_box_t *create_text_box(char *str, format_t *format, sfVector2f scale,
    enum assets asset);
void draw_text_box(sfRenderWindow *window, text_box_t *text);
void set_text_text_box(char *text, text_box_t *text_box);
void destroy_text_box(text_box_t *text_box);

#endif /* !TEXT_BOX_H_ */
