/*
** EPITECH PROJECT, 2024
** my_rpg
** File description:
** create_text_box
*/

#include "my_rpg.h"
#include "assets.h"

text_box_t *create_text_box(char *str, format_t *format, sfVector2f scale,
    enum assets asset)
{
    text_box_t *text = calloc(1, sizeof(text_box_t));
    sfFloatRect sprite_rect;
    sfVector2f pos_text;

    text->bg = create_sprite(format->pos, scale,
        sfTexture_createFromFile(path_assets[asset], NULL));
    text->text = create_text(str, format);
    pos_text = sfSprite_getPosition(text->bg);
    sprite_rect = sfSprite_getGlobalBounds(text->bg);
    pos_text.x += sprite_rect.width / MIDDLE_OF_SPRITE_WIDTH;
    pos_text.y += sprite_rect.height / MIDDLE_OF_SPRITE_HEIGHT;
    sfText_setPosition(text->text->text, pos_text);
    text->index = 0;
    return text;
}
