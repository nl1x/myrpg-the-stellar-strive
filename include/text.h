/*
** EPITECH PROJECT, 2024
** my_rpg
** File description:
** text
*/

#ifndef TEXT_H_
    #define TEXT_H_

    #include <SFML/Graphics.h>
    #include "assets.h"

typedef struct {
    sfVector2f pos;
    int size;
    char const *path;
    sfColor color;
} format_t;

typedef struct {
    sfText *text;
    char *str;
    format_t *format;
} text_t;

/*      FORMAT      */
format_t *create_format(sfVector2f pos, sfColor color, int size,
    char const *path);
void destroy_format(format_t *format);

/*      TEXT      */
text_t *create_text(char *str, format_t *format);
void destroy_text(text_t *text);

#endif /* !TEXT_H_ */
