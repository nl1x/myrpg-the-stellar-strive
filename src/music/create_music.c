/*
** EPITECH PROJECT, 2024
** my_rpg
** File description:
** create_music
*/

#include "my_rpg.h"
#include "assets.h"

music_t *create_music(enum assets enum_music)
{
    music_t *music = malloc(sizeof(music_t));

    music->music = sfMusic_createFromFile(path_assets[enum_music]);
    sfMusic_play(music->music);
    sfMusic_setLoop(music->music, sfTrue);
    music->on = true;
    sfMusic_setVolume(music->music, VOLUME_MUSIC);
    return music;
}
