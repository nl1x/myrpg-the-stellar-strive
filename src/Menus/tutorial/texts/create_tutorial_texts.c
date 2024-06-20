/*
** EPITECH PROJECT, 2024
** CREATE_TUTORIAL_TEXTS
** File description:
** Create tutorial texts
** Author: lysandre.boursette@epitech.eu
*/

#include "my_rpg.h"
#include "assets.h"

static
text_t *create_tutorial_text(char *text, float x, float y)
{
    format_t *format = create_format(
        (sfVector2f){x, y}, sfWhite,
        SIZE_TEXT_TUTORIAL, path_assets[FONT]);

    return create_text(text, format);
}

void create_tutorial_texts(my_rpg_t *rpg, tutorial_t *tutorial)
{
    tutorial->texts = calloc(NB_TEXTS_TUTORIAL + 1, sizeof(text_t *));
    tutorial->texts[TUTORIAL_KEY_MOVEMENT_UP] = create_tutorial_text(
        get_input(rpg->game->keybinds[KEYBINDS_MOVE_UP]),
        POS_X_TEXT_KEY_MOV_UP, POS_Y_TEXT_KEY_MOV_UP);
    tutorial->texts[TUTORIAL_KEY_MOVEMENT_DOWN] = create_tutorial_text(
        get_input(rpg->game->keybinds[KEYBINDS_MOVE_DOWN]),
        POS_X_TEXT_KEY_MOV_DOWN, POS_Y_TEXT_KEY_MOV_DOWN);
    tutorial->texts[TUTORIAL_KEY_MOVEMENT_LEFT] = create_tutorial_text(
        get_input(rpg->game->keybinds[KEYBINDS_MOVE_LEFT]),
        POS_X_TEXT_KEY_MOV_LEFT, POS_Y_TEXT_KEY_MOV_LEFT);
    tutorial->texts[TUTORIAL_KEY_MOVEMENT_RIGHT] = create_tutorial_text(
        get_input(rpg->game->keybinds[KEYBINDS_MOVE_RIGHT]),
        POS_X_TEXT_KEY_MOV_RIGHT, POS_Y_TEXT_KEY_MOV_RIGHT);
    tutorial->texts[TUTORIAL_KEY_OPEN_INVENTORY] = create_tutorial_text(
        get_input(rpg->game->keybinds[KEYBINDS_INVENTORY]),
        POS_X_TEXT_KEY_OPEN_INV, POS_Y_TEXT_KEY_OPEN_INV);
    tutorial->texts[TUTORIAL_KEY_INTERACT] = create_tutorial_text(
        get_input(rpg->game->keybinds[KEYBINDS_INTERACT]),
        POS_X_TEXT_KEY_INTERACT, POS_Y_TEXT_KEY_INTERACT);
}
