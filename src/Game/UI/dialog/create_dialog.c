/*
** EPITECH PROJECT, 2024
** CREATE_DIALOG
** File description:
** Create dialog
** Author: lysandre.boursette@epitech.eu
*/

#include "my_rpg.h"

static
void create_name_text(dialog_t *dialog, char *name)
{
    format_t *format = create_format(DIALOG_BOX_NAME_POS, sfWhite,
        DIALOG_BOX_NAME_SIZE, path_assets[FONT]);

    dialog->npc_name = create_text(name, format);
}

static
void create_dialog_text(dialog_t *dialog, char *text)
{
    format_t *format = create_format(DIALOG_BOX_DIALOG_POS, sfBlack,
        DIALOG_BOX_DIALOG_SIZE, path_assets[FONT]);

    dialog->dialog = create_text(text, format);
}

dialog_t *create_dialog(char *name, char *text)
{
    dialog_t *dialog = calloc(1, sizeof(dialog_t));

    if (dialog == NULL)
        return NULL;
    dialog->frame = create_entity(path_assets[DIALOG_ASSET], DIALOG_BOX_POS,
        DIALOG_BOX_SCALE, create_area(DIALOG_BOX_POS, 0));
    create_name_text(dialog, name);
    create_dialog_text(dialog, text);
    return dialog;
}
