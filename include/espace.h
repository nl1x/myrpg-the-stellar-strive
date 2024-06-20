/*
** EPITECH PROJECT, 2024
** my_rpg
** File description:
** espace
*/

#ifndef ESPACE_H_
    #define ESPACE_H_

    #include <SFML/Graphics.h>
    #include <SFML/Audio.h>
    #include "clock.h"
    #include "button.h"
    #include "music.h"
    #include "sound.h"
    #include "text.h"

typedef struct {
    sfSprite **sprites;
    sfTexture **textures;
    button_t **buttons;
    sound_t *sound;
} escape_t;

#endif /* !ESPACE_H_ */
