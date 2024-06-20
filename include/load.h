/*
** EPITECH PROJECT, 2024
** my_rpg
** File description:
** load
*/

#ifndef LOAD_H_
    #define LOAD_H_

    #include <SFML/Graphics.h>
    #include "sound.h"
    #include "clock.h"
    #include "entity.h"
    #include "button.h"
    #include "text.h"

typedef struct {
    sfSprite **sprites;
    sfTexture **textures;
    clockk_t *clock;
    animated_entity_t **anim_entity;
    button_t **buttons;
    sound_t *sound;
    text_t **texts;
} load_t;

#endif /* !LOAD_H_ */
