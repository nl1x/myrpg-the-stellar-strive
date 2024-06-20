/*
** EPITECH PROJECT, 2024
** my_rpg
** File description:
** fight
*/

#ifndef FIGHT_H_
    #define FIGHT_H_

    #include <SFML/Graphics.h>
    #include <SFML/Audio.h>
    #include "clock.h"
    #include "entity.h"
    #include "button.h"
    #include "music.h"
    #include "sound.h"
    #include "text.h"

typedef struct {
    sfSprite **sprites;
    sfTexture **textures;
    button_t **buttons;
    text_t **texts;
    music_t **musics;
    sound_t **sounds;
    sfRectangleShape **rectangles;
    combat_t *combat;
    enum fighting_states state;
    enum fighting_sprites zone;
    text_t *player_text;
    sfClock *player_clock;
    sfClock *wait_clock;
    bool waiting;
    sfClock *decaded_sounds;
} fighting_t;

#endif /* !FIGHT_H_ */
