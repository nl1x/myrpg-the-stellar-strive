/*
** EPITECH PROJECT, 2024
** my_rpg
** File description:
** handle_new_game
*/

#include <stdio.h>
#include "my_rpg.h"

static
void handle_new_game_inventory_event(my_rpg_t *rpg)
{
    if (rpg->event.type == sfEvtKeyReleased
        && rpg->event.key.code == rpg->game->keybinds[KEYBINDS_INVENTORY])
        rpg->state = INVENTORY_STATE;
}

void handle_new_game_event(my_rpg_t *rpg)
{
    npc_t *needle = NULL;

    handle_new_game_inventory_event(rpg);
    if (rpg->event.type == sfEvtKeyPressed
        && rpg->event.key.code == sfKeyEscape)
        rpg->state = ESCAPE_STATE;
    if (rpg->event.type != sfEvtKeyPressed)
        return;
    if (rpg->event.key.code != rpg->game->keybinds[KEYBINDS_INTERACT])
        return;
    if (rpg->game->dialog) {
        destroy_dialog(rpg->game->dialog);
        rpg->game->dialog = NULL;
        return;
    }
    for (int k = 0; rpg->game->npc[k] != NULL; k++) {
        needle = rpg->game->npc[k];
        if (is_in_npc_range(rpg, needle))
            npc_interact(rpg, needle);
    }
}
