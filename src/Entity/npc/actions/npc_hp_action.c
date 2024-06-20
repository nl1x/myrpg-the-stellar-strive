/*
** EPITECH PROJECT, 2024
** NPC_HP_ACTION
** File description:
** NPC HP action
** Author: lysandre.boursette@epitech.eu
*/

#include <string.h>
#include "my_rpg.h"

void npc_hp_action(void *r, npc_t *npc, char **c)
{
    my_rpg_t *rpg = (my_rpg_t *) r;

    (void) npc;
    (void) c;
    if (strcmp(c[1], "max") == 0) {
        rpg->game->player->stats->hp = rpg->game->player->stats->hp_max;
        return;
    }
    rpg->game->player->stats->hp = (int) strtol(c[1], NULL, 10);
}
