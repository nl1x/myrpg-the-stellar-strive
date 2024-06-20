/*
** EPITECH PROJECT, 2024
** my_rpg
** File description:
** play_random_music
*/

#include "my_rpg.h"

void play_random_sound(sound_t **sound, int nb_sound)
{
    int random_number = get_random_number(0, nb_sound);

    if (sound[0]->on == false)
        return;
    sfSound_play(sound[random_number]->sound);
}
