/*
** EPITECH PROJECT, 2024
** my_rpg
** File description:
** create_load_text
*/

#include "my_rpg.h"
#include "assets.h"

void create_load_texts(load_t *load)
{
    format_t *load_format = create_format(
        (sfVector2f){POS_X_LOAD_TEXT, POS_Y_LOAD_TEXT}, sfWhite,
        SIZE_LOAD_TEXT, path_assets[FONT]);
    format_t *coming_soon_format = create_format(
        (sfVector2f){POS_X_SOON_TEXT, POS_Y_SOON_TEXT}, sfWhite,
        SIZE_SOON_TEXT, path_assets[FONT]);

    load->texts = calloc(NB_TEXTS_LOAD + 1, sizeof(sfText *));
    load->texts[LOAD_TEXT] = create_text("LOAD", load_format);
    load->texts[COMING_SOON_TEXT] = create_text("COMING SOON...",
        coming_soon_format);
}
