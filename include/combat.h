/*
** EPITECH PROJECT, 2024
** COMBAT_H_
** File description:
** COMBAT's header
** Author: lysandre.boursette@epitech.eu
*/

#ifndef COMBAT_H_
    #define COMBAT_H_

    #define COMBAT_MIN_DAMAGE 3
    #define COMBAT_MAX_DAMAGE 8

    #include "my_rpg.h"
    #include <sys/queue.h>

typedef enum {
    LOADING,
    CHOOSING,
    ATTACKING,
    BEING_ATTACKED,
    ESCAPING,
    FINISHED
} combat_state_t;

typedef struct enemy_combat_s {
    enemy_t *enemy;
    sfRectangleShape **rectangles;
    TAILQ_ENTRY(enemy_combat_s) entries;
} enemy_combat_t;

typedef struct {
    combat_state_t state;
    player_t *player;
    TAILQ_HEAD(enemy_list_s, enemy_combat_s) enemies;
    int enemies_n;
    int turn;
} combat_t;

#endif /* COMBAT_H_ */
