/*
** EPITECH PROJECT, 2024
** my_rpg
** File description:
** sound
*/

#ifndef SOUND_H_
    #define SOUND_H_

    #include <SFML/Audio.h>

    #define VOLUME_SOUND_EFFECT 100

typedef struct {
    sfSound *sound;
    sfSoundBuffer *buff;
    bool on;
} sound_t;

sound_t *create_sound(enum assets sound_effect);
void destroy_sound(sound_t *sound);
void play_random_sound(sound_t **sound, int nb_sound);

#endif /* !SOUND_H_ */
