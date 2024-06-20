/*
** EPITECH PROJECT, 2024
** my_rpg
** File description:
** draw_options_rectangles
*/

#include "my_rpg.h"
#include <stdio.h>

static
void draw_options_sound_rectangles(my_rpg_t *rpg)
{
    float volume = sfSound_getVolume(rpg->menu->sound->sound) + 0.1;
    int nb_rect = ((int)volume / 10) / 2;

    if (volume < 1)
        nb_rect = 0;
    if (nb_rect > 5)
        nb_rect = 5;
    for (int i = 0; i < nb_rect; i++)
        sfRenderWindow_drawRectangleShape(rpg->window,
            rpg->options->sound_rectangles[i], NULL);
}

static
void draw_options_music_rectangles(my_rpg_t *rpg)
{
    float volume = sfMusic_getVolume(rpg->menu->music->music) + 0.1;
    int nb_rect = ((int)volume / 10) / 2;

    if (sfMusic_getStatus(rpg->menu->music->music) == sfPaused)
        nb_rect = 0;
    if (nb_rect > 5)
        nb_rect = 5;
    for (int i = 0; i < nb_rect; i++)
        sfRenderWindow_drawRectangleShape(rpg->window,
            rpg->options->music_rectangles[i], NULL);
}

void draw_options_rectangles(my_rpg_t *rpg)
{
    draw_options_music_rectangles(rpg);
    draw_options_sound_rectangles(rpg);
}
