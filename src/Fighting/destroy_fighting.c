/*
** EPITECH PROJECT, 2024
** fight
** File description:
** destroy_fighting
*/

#include "my_rpg.h"

static
void destroy_fighting_2(fighting_t *fight)
{
    if (fight->textures)
        for (int i = 0; fight->textures[i] != NULL; i++)
            sfTexture_destroy(fight->textures[i]);
    if (fight->sprites)
        for (int i = 0; fight->sprites[i] != NULL; i++)
            sfSprite_destroy(fight->sprites[i]);
    if (fight->texts)
        for (int i = 0; fight->texts[i] != NULL; i++)
            destroy_text(fight->texts[i]);
}

void destroy_fighting(fighting_t *fight)
{
    if (!fight)
        return;
    if (fight->combat)
        destroy_combat(fight->combat);
    if (fight->rectangles)
        for (int i = 0; fight->rectangles[i] != NULL; i++)
            sfRectangleShape_destroy(fight->rectangles[i]);
    if (fight->sounds)
        for (int i = 0; fight->sounds[i] != NULL; i++)
            destroy_sound(fight->sounds[i]);
    if (fight->buttons)
        for (int i = 0; fight->buttons[i] != NULL; i++)
            destroy_button(fight->buttons[i]);
    if (fight->musics)
        for (int i = 0; fight->musics[i] != NULL; i++)
            destroy_music(fight->musics[i]);
    destroy_fighting_2(fight);
    free(fight);
}
