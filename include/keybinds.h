/*
** EPITECH PROJECT, 2024
** my_rpg
** File description:
** keybinds
*/

#ifndef KEYBINDS_H_
    #define KEYBINDS_H_

    #include <SFML/Graphics.h>
    #include "sound.h"
    #include "clock.h"
    #include "entity.h"
    #include "button.h"
    #include "text.h"
    #include "background_stars.h"

typedef struct {
    sfSprite **sprites;
    sfTexture **textures;
    clockk_t *clock;
    animated_entity_t **anim_entity;
    button_t **buttons;
    sound_t *sound;
    text_t **texts;
    bg_stars_t *stars;
} keybinds_t;

#endif /* !KEYBINDS_H_ */
