/*
** EPITECH PROJECT, 2023
** my_hunter
** File description:
** button
*/

#include "my_rpg.h"
#include "assets.h"

static
void create_button_2(button_t *button, enum button_state state, char *text)
{
    sfFloatRect sprite_rect;
    sfVector2f position_text;

    sfSprite_setPosition(button->sprites[state], button->pos);
    sfSprite_setTexture(button->sprites[state], button->textures[state],
        sfTrue);
    sfSprite_setScale(button->sprites[state], button->scale);
    position_text = sfSprite_getPosition(button->sprites[state]);
    sprite_rect = sfSprite_getGlobalBounds(button->sprites[state]);
    position_text.x += sprite_rect.width / 2;
    position_text.y += sprite_rect.height / 3;
    button->text = create_text_button(text, position_text, 50,
        path_assets[FONT]);
}

button_t *create_button(sfVector2f pos, sfVector2f scale,
    enum enum_list_buttons l_buttons, char *text)
{
    button_t *button = calloc(1, sizeof(button_t));

    button->pos = pos;
    button->sprites = calloc((3 + 1), sizeof(sfSprite *));
    button->textures = calloc((3 + 1), sizeof(sfTexture *));
    for (int i = 0; i < 3; i++)
        button->sprites[i] = sfSprite_create();
    button->scale = scale;
    button->state = NONE;
    button->textures[NONE] =
        sfTexture_createFromFile(list_buttons[l_buttons].none_path, NULL);
    button->textures[HOVER] =
        sfTexture_createFromFile(list_buttons[l_buttons].hover_path, NULL);
    button->textures[CLICKED] =
        sfTexture_createFromFile(list_buttons[l_buttons].clicked_path, NULL);
    create_button_2(button, NONE, text);
    create_button_2(button, HOVER, text);
    create_button_2(button, CLICKED, text);
    return button;
}
