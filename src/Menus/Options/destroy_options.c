/*
** EPITECH PROJECT, 2024
** my_rpg
** File description:
** destroy_options
*/

#include "my_rpg.h"

void destroy_options_2(options_t *options)
{
    if (options->sprites)
        for (int i = 0; options->sprites[i] != NULL; i++)
            sfSprite_destroy(options->sprites[i]);
    if (options->texts)
        for (int i = 0; options->texts[i] != NULL; i++)
            destroy_text(options->texts[i]);
    if (options->textures)
        for (int i = 0; options->textures[i] != NULL; i++)
            sfTexture_destroy(options->textures[i]);
    if (options->music_rectangles)
        for (int i = 0; options->music_rectangles[i] != NULL; i++)
            sfRectangleShape_destroy(options->music_rectangles[i]);
    if (options->sound_rectangles)
        for (int i = 0; options->sound_rectangles[i] != NULL; i++)
            sfRectangleShape_destroy(options->sound_rectangles[i]);
    if (options->keybinds)
        destroy_keybinds(options->keybinds);
}

void destroy_options(options_t *options)
{
    if (!options)
        return;
    if (options->anim_entity)
        for (int i = 0; options->anim_entity[i] != NULL; i++)
            destroy_animated_entity(options->anim_entity[i]);
    if (options->buttons)
        for (int i = 0; options->buttons[i] != NULL; i++)
            destroy_button(options->buttons[i]);
    if (options->clock)
        destroy_clockk(options->clock);
    if (options->sound)
        destroy_sound(options->sound);
    destroy_options_2(options);
    free(options);
}
