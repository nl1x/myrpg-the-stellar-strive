/*
** EPITECH PROJECT, 2024
** my_rpg
** File description:
** button
*/

#ifndef BUTTON_H_
    #define BUTTON_H_

    #include <SFML/Graphics.h>
    #include <stdbool.h>
    #include "enum.h"

typedef struct {
    char *none_path;
    char *hover_path;
    char *clicked_path;
} buttons_path_t;

extern const buttons_path_t list_buttons[];

typedef struct {
    sfVector2f pos;
    sfSprite **sprites;
    sfTexture **textures;
    sfVector2f scale;
    sfText *text;
    enum button_state state;
} button_t;

button_t *create_button(sfVector2f pos, sfVector2f scale,
    enum enum_list_buttons l_buttons, char *text);
bool is_mouse_button(int x_mouse, int y_mouse, button_t *button);
void is_activated(button_t *button, sfEvent event, enum button_state state);
bool is_clicked(button_t *button, sfEvent event, enum button_state state);
void destroy_button(button_t *button);
void destroy_button_path(buttons_path_t *button);

#endif /* !BUTTON_H_ */
