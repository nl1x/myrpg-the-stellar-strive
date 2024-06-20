/*
** EPITECH PROJECT, 2024
** DESTROY_DIALOG
** File description:
** Destroy dialog
** Author: lysandre.boursette@epitech.eu
*/

#include "my_rpg.h"

void destroy_dialog(dialog_t *dialog)
{
    if (dialog->npc_name)
        destroy_text(dialog->npc_name);
    if (dialog->dialog)
        destroy_text(dialog->dialog);
    if (dialog->frame)
        destroy_entity(dialog->frame);
    free(dialog);
}
