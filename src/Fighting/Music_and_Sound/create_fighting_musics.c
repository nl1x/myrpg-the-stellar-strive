/*
** EPITECH PROJECT, 2024
** my_rpg
** File description:
** create_fighting_musics
*/

#include "my_rpg.h"

void create_fighting_musics(fighting_t *fight)
{
    fight->musics = calloc(NB_FIGHTING_MUSICS, sizeof(music_t *));
    fight->musics[MUSIC_FIGHTING_1] = create_music(MUSIC_COMBAT_1);
    fight->musics[MUSIC_FIGHTING_2] = create_music(MUSIC_COMBAT_2);
    fight->musics[MUSIC_FIGHTING_3] = create_music(MUSIC_COMBAT_3);
    for (int i = 0; fight->musics[i] != NULL; i++)
        sfMusic_stop(fight->musics[i]->music);
}
