/*
** EPITECH PROJECT, 2024
** my_rpg
** File description:
** destroy_menu
*/

#include "my_rpg.h"

void destroy_menu(menu_t *menu)
{
    if (!menu)
        return;
    if (menu->anim_entity)
        for (int i = 0; menu->anim_entity[i] != NULL; i++)
            destroy_animated_entity(menu->anim_entity[i]);
    if (menu->buttons)
        for (int i = 0; menu->buttons[i] != NULL; i++)
            destroy_button(menu->buttons[i]);
    if (menu->clock)
        destroy_clockk(menu->clock);
    if (menu->sound)
        destroy_sound(menu->sound);
    if (menu->sprites)
        for (int i = 0; menu->sprites[i] != NULL; i++)
            sfSprite_destroy(menu->sprites[i]);
    if (menu->textures)
        for (int i = 0; menu->textures[i] != NULL; i++)
            sfTexture_destroy(menu->textures[i]);
    free(menu);
}
