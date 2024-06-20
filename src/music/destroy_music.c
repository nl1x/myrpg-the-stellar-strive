/*
** EPITECH PROJECT, 2024
** my_rpg
** File description:
** destroy_music
*/

#include "my_rpg.h"

void destroy_music(music_t *music)
{
    if (!music)
        return;
    sfMusic_destroy(music->music);
    free(music);
}
