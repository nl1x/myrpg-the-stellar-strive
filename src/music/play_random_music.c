/*
** EPITECH PROJECT, 2024
** my_rpg
** File description:
** play_random_music
*/

#include "my_rpg.h"

void play_random_music(music_t **musics, int nb_musics)
{
    int random_number = get_random_number(0, nb_musics);

    if (musics[0]->on == false)
        return;
    sfMusic_play(musics[random_number]->music);
}
