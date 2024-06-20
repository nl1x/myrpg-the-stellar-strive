/*
** EPITECH PROJECT, 2024
** my_rpg
** File description:
** create_options_texts
*/

#include "my_rpg.h"
#include "assets.h"

void create_options_texts(options_t *options)
{
    format_t *music_format = create_format(
        (sfVector2f){POS_X_MUSIC_TEXT, POS_Y_MUSIC_TEXT}, sfWhite,
        SIZE_MUSIC_TEXT, path_assets[FONT]);
    format_t *sound_format = create_format(
        (sfVector2f){POS_X_SOUND_TEXT, POS_Y_SOUND_TEXT}, sfWhite,
        SIZE_SOUND_TEXT, path_assets[FONT]);
    format_t *options_format = create_format(
        (sfVector2f){POS_X_OPTIONS_TEXT, POS_Y_OPTIONS_TEXT}, sfWhite,
        SIZE_OPTIONS_TEXT, path_assets[FONT]);

    options->texts = calloc(NB_TEXTS_OPTIONS, sizeof(text_t *));
    options->texts[OPTIONS_MUSIC_TEXT] = create_text("Music", music_format);
    options->texts[OPTIONS_SOUND_TEXT] = create_text("Sound", sound_format);
    options->texts[OPTIONS_TEXT] = create_text("OPTIONS", options_format);
}
