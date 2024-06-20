/*
** EPITECH PROJECT, 2024
** DRAW_DIALOG
** File description:
** Draw dialog
** Author: lysandre.boursette@epitech.eu
*/

#include <stdio.h>
#include "my_rpg.h"

void draw_dialog(my_rpg_t *rpg, sfVector2f pos, sfVector2f size)
{
    (void) size;
    if (rpg->game->dialog->frame) {
        set_entity_position(rpg->game->dialog->frame, (sfVector2f)
            {(pos.x - size.x / 2) + 83, (pos.y - size.y / 2) + 150});
        draw_entity(rpg->game->dialog->frame, rpg->window);
    }
    if (rpg->game->dialog->npc_name) {
        sfText_setPosition(rpg->game->dialog->npc_name->text, (sfVector2f)
            {(pos.x - size.x / 2) + 100, (pos.y - size.y / 2) + 153});
        sfRenderWindow_drawText(rpg->window,
            rpg->game->dialog->npc_name->text, NULL);
    }
    if (rpg->game->dialog->dialog) {
        sfText_setPosition(rpg->game->dialog->dialog->text, (sfVector2f)
            {(pos.x - size.x / 2) + 210, (pos.y - size.y / 2) + 172});
        sfRenderWindow_drawText(rpg->window,
            rpg->game->dialog->dialog->text, NULL);
    }
}
