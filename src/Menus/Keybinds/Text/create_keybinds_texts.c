/*
** EPITECH PROJECT, 2024
** my_rpg
** File description:
** create_keybinds_text
*/

#include "my_rpg.h"
#include "assets.h"

static
text_t *create_keybinds_text(char *text, float x, float y, float size)
{
    format_t *format = create_format(
        (sfVector2f){x, y}, sfWhite, size, path_assets[FONT]);

    return create_text(text, format);
}

void create_keybinds_texts(keybinds_t *keybinds)
{
    keybinds->texts = calloc(NB_TEXTS_KEYBINDS, sizeof(text_t *));
    keybinds->texts[KEYBINDS_TITLE] = create_keybinds_text("KEYBINDS SETTINGS",
        POS_X_TITLE_KEYBINDS, POS_Y_TITLE_KEYBINDS, SIZE_TITLE_KEYBINDS);
    keybinds->texts[KEYBINDS_MOVE_UP_TEXT] = create_keybinds_text("Move Up",
        POS_X_MOVE_UP, POS_Y_MOVE_UP, SIZE_MOVE_UP);
    keybinds->texts[KEYBINDS_MOVE_LEFT_TEXT] = create_keybinds_text(
        "Move Left", POS_X_MOVE_LEFT, POS_Y_MOVE_LEFT, SIZE_MOVE_LEFT);
    keybinds->texts[KEYBINDS_MOVE_RIGHT_TEXT] = create_keybinds_text(
        "Move Right", POS_X_MOVE_RIGHT, POS_Y_MOVE_RIGHT, SIZE_MOVE_RIGHT);
    keybinds->texts[KEYBINDS_MOVE_DOWN_TEXT] = create_keybinds_text(
        "Move Down", POS_X_MOVE_DOWN_TEXT, POS_Y_MOVE_DOWN_TEXT,
        SIZE_MOVE_DOWN_TEXT);
    keybinds->texts[KEYBINDS_INTERACT_TEXT] = create_keybinds_text("Interact",
        POS_X_INTERACT_TEXT, POS_Y_INTERACT_TEXT, SIZE_INTERACT_TEXT);
    keybinds->texts[KEYBINDS_INVENTORY_TEXT] = create_keybinds_text(
        "inventory", POS_X_INVENTORY_TEXT, POS_Y_INVENTORY_TEXT,
        SIZE_INTERACT_TEXT);
}
