/*
** EPITECH PROJECT, 2024
** my_rpg
** File description:
** music
*/

#ifndef MUSIC_H_
    #define MUSIC_H_

    #include <SFML/Audio.h>

    #define VOLUME_MUSIC 100

typedef struct {
    sfMusic *music;
    bool on;
} music_t;

music_t *create_music(enum assets enum_music);
void destroy_music(music_t *music);
void play_random_music(music_t **musics, int nb_musics);

#endif /* !MUSIC_H_ */
