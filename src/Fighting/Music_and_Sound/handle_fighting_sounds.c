/*
** EPITECH PROJECT, 2024
** my_rpg
** File description:
** handle_fighting_sounds
*/

#include "my_rpg.h"

void handle_fighting_sound_off(sound_t *sound)
{
    float volume = sfSound_getVolume(sound->sound);

    if (volume < 20)
        sound->on = false;
    if (volume > 0)
        sfSound_setVolume(sound->sound, volume - 20.0);
}

void handle_fighting_sound_on(sound_t *sound)
{
    float volume = sfSound_getVolume(sound->sound);

    if (volume < 100) {
        sfSound_setVolume(sound->sound, volume + 20.0);
        sound->on = true;
    }
}
