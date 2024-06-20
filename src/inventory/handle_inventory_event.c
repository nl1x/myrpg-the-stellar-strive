/*
** EPITECH PROJECT, 2024
** B-MUL-200-REN-2-1-myrpg-nathan.jeannot
** File description:
** handle_inventory_event.c
*/

#include <stdio.h>
#include "my_rpg.h"
#include "item.h"

static
void handle_inventory_quit(my_rpg_t *rpg)
{
    if (rpg->event.type == sfEvtKeyReleased
        && rpg->event.key.code == rpg->game->keybinds[KEYBINDS_INVENTORY])
        rpg->state = NEW_GAME_STATE;
}

static
void handle_inventory_click(my_rpg_t *rpg)
{
    if (rpg->event.type == sfEvtMouseButtonReleased)
        printf("User clicked at: {%d, %d}\n",
            rpg->event.mouseButton.x,
            rpg->event.mouseButton.y
        );
}

void handle_inventory_event(my_rpg_t *rpg)
{
    handle_inventory_quit(rpg);
    handle_inventory_click(rpg);
}
