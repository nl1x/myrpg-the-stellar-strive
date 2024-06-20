/*
** EPITECH PROJECT, 2024
** my_rpg
** File description:
** destroy_load
*/

#include "my_rpg.h"

void destroy_load_2(load_t *load)
{
    if (load->sprites)
        for (int i = 0; load->sprites[i] != NULL; i++)
            sfSprite_destroy(load->sprites[i]);
    if (load->texts)
        for (int i = 0; load->texts[i] != NULL; i++)
            destroy_text(load->texts[i]);
    if (load->textures)
        for (int i = 0; load->textures[i] != NULL; i++)
            sfTexture_destroy(load->textures[i]);
}

void destroy_load(load_t *load)
{
    if (!load)
        return;
    if (load->anim_entity)
        for (int i = 0; load->anim_entity[i] != NULL; i++)
            destroy_animated_entity(load->anim_entity[i]);
    if (load->buttons)
        for (int i = 0; load->buttons[i] != NULL; i++)
            destroy_button(load->buttons[i]);
    if (load->clock)
        destroy_clockk(load->clock);
    if (load->sound)
        destroy_sound(load->sound);
    destroy_load_2(load);
    free(load);
}
