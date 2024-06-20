/*
** EPITECH PROJECT, 2024
** my_rpg
** File description:
** destroy_keybinds
*/

#include "my_rpg.h"

void destroy_keybinds_2(keybinds_t *keybinds)
{
    if (keybinds->stars)
        destroy_background_stars(keybinds->stars);
    if (keybinds->buttons)
        for (int i = 0; keybinds->buttons[i] != NULL; i++)
            destroy_button(keybinds->buttons[i]);
    if (keybinds->clock)
        destroy_clockk(keybinds->clock);
    if (keybinds->sound)
        destroy_sound(keybinds->sound);
}

void destroy_keybinds(keybinds_t *keybinds)
{
    if (!keybinds)
        return;
    if (keybinds->sprites)
        for (int i = 0; keybinds->sprites[i] != NULL; i++)
            sfSprite_destroy(keybinds->sprites[i]);
    if (keybinds->texts)
        for (int i = 0; keybinds->texts[i] != NULL; i++)
            destroy_text(keybinds->texts[i]);
    if (keybinds->textures)
        for (int i = 0; keybinds->textures[i] != NULL; i++)
            sfTexture_destroy(keybinds->textures[i]);
    if (keybinds->anim_entity)
        for (int i = 0; keybinds->anim_entity[i] != NULL; i++)
            destroy_animated_entity(keybinds->anim_entity[i]);
    destroy_keybinds_2(keybinds);
    free(keybinds);
}
