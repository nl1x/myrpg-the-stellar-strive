/*
** EPITECH PROJECT, 2024
** my_rpg
** File description:
** create_fighting_sounds
*/

#include "my_rpg.h"

void create_fighting_sounds(fighting_t *fight)
{
    fight->sounds = calloc(NB_FIGHTING_SOUNDS, sizeof(sound_t *));
    fight->sounds[ENTER_FIGHTING_SOUND_1] = create_sound(ENTER_BATTLE_SOUND_1);
    fight->sounds[ENTER_FIGHTING_SOUND_2] = create_sound(ENTER_BATTLE_SOUND_2);
    fight->sounds[ENTER_FIGHTING_SOUND_3] = create_sound(ENTER_BATTLE_SOUND_3);
}
