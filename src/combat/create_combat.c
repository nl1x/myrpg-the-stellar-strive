/*
** EPITECH PROJECT, 2024
** CREATE_COMBAT
** File description:
** Create combat
** Author: lysandre.boursette@epitech.eu
*/

#include "my_rpg.h"

combat_t *create_combat(fighting_t *fight, player_t *player)
{
    combat_t *combat = calloc(1, sizeof(combat_t));

    if (combat == NULL)
        return NULL;
    combat->state = LOADING;
    combat->player = player;
    combat->enemies_n = 0;
    combat->turn = 0;
    combat->state = CHOOSING;
    fight->state = FIGHTING_MENU_STATE;
    TAILQ_INIT(&combat->enemies);
    update_player_hp_bar(player, fight);
    return combat;
}
