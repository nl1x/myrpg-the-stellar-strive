/*
** EPITECH PROJECT, 2024
** NPC_INTERACT
** File description:
** NPC interact
** Author: lysandre.boursette@epitech.eu
*/

#include <string.h>
#include "my_rpg.h"
#include "shuvlib/string.h"
#include "shuvlib/array.h"

static
void execute_command(char *command, my_rpg_t *rpg, npc_t *npc)
{
    char **c = sh_str_split(command, " ", false);

    if (c == NULL)
        return;
    if (strcmp(c[0], "speak") == 0) {
        npc_speak_action(rpg, npc, c, command);
        sh_destroy_string_array(c);
        return;
    }
    if (strcmp(c[0], "hp") == 0) {
        npc_hp_action(rpg, npc, c);
        sh_destroy_string_array(c);
        return;
    }
}

void npc_interact(my_rpg_t *rpg, npc_t *npc)
{
    char *command = NULL;

    for (int k = 0; npc->actions[k] != NULL; k++) {
        command = npc->actions[k];
        execute_command(command, rpg, npc);
    }
}
