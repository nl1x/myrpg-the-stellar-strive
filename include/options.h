/*
** EPITECH PROJECT, 2024
** my_rpg
** File description:
** options
*/

#ifndef OPTIONS_H_
    #define OPTIONS_H_

    #include <SFML/Graphics.h>
    #include <SFML/Audio.h>
    #include "clock.h"
    #include "entity.h"
    #include "button.h"
    #include "sound.h"
    #include "text.h"
    #include "keybinds.h"

typedef struct {
    sfSprite **sprites;
    sfTexture **textures;
    clockk_t *clock;
    animated_entity_t **anim_entity;
    button_t **buttons;
    sfRectangleShape **music_rectangles;
    sfRectangleShape **sound_rectangles;
    sound_t *sound;
    text_t **texts;
    keybinds_t *keybinds;
} options_t;

#endif /* !OPTIONS_H_ */
