/*
** EPITECH PROJECT, 2024
** my_rpg
** File description:
** game
*/

#ifndef GAME_H_
    #define GAME_H_

    #include "SFML/Graphics.h"
    #include "player.h"
    #include "map.h"
    #include "fight.h"
    #include "music.h"
    #include "npc.h"
    #include "espace.h"
    #include "dialog.h"


typedef struct game_s {
    sfSprite **sprites;
    sfTexture **textures;
    sfRectangleShape **rectangles;
    sfClock *delta_clock;
    float delta_time;
    player_t *player;
    map_t *current_map;
    int *keybinds;
    fighting_t *fight;
    npc_t **npc;
    dialog_t *dialog;
    music_t *music;
} game_t;

#endif /* !GAME_H_ */
