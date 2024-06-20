/*
** EPITECH PROJECT, 2024
** DESTROY_TUTORIAL
** File description:
** destroy tutorial
** Author: lysandre.boursette@epitech.eu
*/

#include "my_rpg.h"

void destroy_tutorial(tutorial_t *tutorial)
{
    if (!tutorial)
        return;
    if (tutorial->buttons)
        for (int i = 0; tutorial->buttons[i] != NULL; i++)
            destroy_button(tutorial->buttons[i]);
    if (tutorial->sprites)
        for (int i = 0; tutorial->sprites[i] != NULL; i++)
            sfSprite_destroy(tutorial->sprites[i]);
    if (tutorial->textures)
        for (int i = 0; tutorial->textures[i] != NULL; i++)
            sfTexture_destroy(tutorial->textures[i]);
    if (tutorial->texts)
        for (int i = 0; tutorial->texts[i] != NULL; i++)
            destroy_text(tutorial->texts[i]);
    if (tutorial->background)
        sfSprite_destroy(tutorial->background);
    free(tutorial);
}
