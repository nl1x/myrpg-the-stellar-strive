/*
** EPITECH PROJECT, 2024
** my_rpg
** File description:
** new_game
*/

#ifndef NEW_GAME_H_
    #define NEW_GAME_H_

    #include <SFML/Graphics.h>
    #include "npc.h"

typedef struct {
    sfSprite **sprites;
    sfTexture **textures;
    npc_t **npc;
} new_game_t;

#endif /* !NEW_GAME_H_ */
