/*
** EPITECH PROJECT, 2024
** my_rpg
** File description:
** destroy_sound
*/

#include "my_rpg.h"

void destroy_sound(sound_t *sound)
{
    if (!sound)
        return;
    if (sound->buff)
        sfSoundBuffer_destroy(sound->buff);
    if (sound->sound)
        sfSound_destroy(sound->sound);
    free(sound);
}
