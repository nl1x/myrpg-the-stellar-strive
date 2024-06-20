/*
** EPITECH PROJECT, 2024
** my_rpg
** File description:
** menu
*/

#ifndef MENU_H_
    #define MENU_H_

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
    clockk_t *clock;
    animated_entity_t **anim_entity;
    button_t **buttons;
    music_t *music;
    sound_t *sound;
} menu_t;

#endif /* !MENU_H_ */
