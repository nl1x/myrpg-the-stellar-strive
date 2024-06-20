/*
** EPITECH PROJECT, 2024
** NPC_SPEAK_ACTION
** File description:
** NPC Speak action
** Author: lysandre.boursette@epitech.eu
*/

#include <string.h>
#include "my_rpg.h"

void npc_speak_action(void *r, npc_t *npc, char **c, char *raw_c)
{
    my_rpg_t *rpg = (my_rpg_t *) r;

    (void) c;
    rpg->game->dialog = create_dialog(npc->name, raw_c + strlen("speak "));
}
