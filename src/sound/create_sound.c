/*
** EPITECH PROJECT, 2023
** my_radar
** File description:
** create_sound
*/

#include "my_rpg.h"
#include "assets.h"

sound_t *create_sound(enum assets sound_effect)
{
    sound_t *sound = malloc(sizeof(sound_t));

    sound->buff = sfSoundBuffer_createFromFile(path_assets[sound_effect]);
    sound->sound = sfSound_create();
    sfSound_setBuffer(sound->sound, sound->buff);
    sound->on = true;
    sfSound_setVolume(sound->sound, VOLUME_SOUND_EFFECT);
    return sound;
}
