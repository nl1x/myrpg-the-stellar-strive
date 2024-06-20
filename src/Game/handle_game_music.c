/*
** EPITECH PROJECT, 2024
** my_rpg
** File description:
** handle_game_sounds
*/

#include "my_rpg.h"

void handle_game_music_off(music_t *music)
{
    float volume = sfMusic_getVolume(music->music);

    if (volume < 20)
        music->on = false;
    if (volume > 0)
        sfMusic_setVolume(music->music,
        volume - 20.0);
}

void handle_game_music_on(music_t *music)
{
    float volume = sfMusic_getVolume(music->music);

    if (volume < 100) {
        sfMusic_setVolume(music->music, volume + 20.0);
        music->on = true;
    }
}
