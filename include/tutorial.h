/*
** EPITECH PROJECT, 2024
** TUTORIAL_H_
** File description:
** TUTORIAL's header
** Author: lysandre.boursette@epitech.eu
*/

#ifndef TUTORIAL_H_
    #define TUTORIAL_H_

typedef struct {
    sfSprite **sprites;
    sfTexture **textures;
    button_t **buttons;
    text_t **texts;
    sfSprite *background;
} tutorial_t;

#endif /* TUTORIAL_H_ */
