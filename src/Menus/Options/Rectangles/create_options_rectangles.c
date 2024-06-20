/*
** EPITECH PROJECT, 2024
** my_rpg
** File description:
** create_options_rectangles
*/

#include "assets.h"
#include "my_rpg.h"

static
void create_options_sound_rectangles(options_t *options)
{
    float size_y = -30;
    float x = BASE_POS_X_SOUND_RECT;

    options->sound_rectangles = calloc(NB_SOUND_RECTANGLES,
        sizeof(sfRectangleShape *));
    for (int i = 0; i < 5; i++) {
        options->sound_rectangles[i] =
            create_rectangle((sfVector2f){x, POS_Y_SOUND_RECT},
            (sfVector2f){ORIGIN_X_SOUND_RECT, ORIGIN_Y_SOUND_RECT}, sfWhite,
            (sfVector2f){SIZE_X_SOUND_RECT, size_y});
        size_y += -15;
        x += 50;
    }
}

static
void create_options_music_rectangles(options_t *options)
{
    float size = -30;
    float x = BASE_POS_X_MUSIC_RECT;

    options->music_rectangles = calloc(NB_MUSIC_RECTANGLES,
        sizeof(sfRectangleShape *));
    for (int i = 0; i < 5; i++) {
        options->music_rectangles[i] =
            create_rectangle((sfVector2f){x, POS_Y_MUSIC_RECT},
            (sfVector2f){ORIGIN_X_MUSIC_RECT, ORIGIN_Y_MUSIC_RECT}, sfWhite,
            (sfVector2f){SIZE_X_MUSIC_RECT, size});
        size += -15;
        x += 50;
    }
}

void create_options_rectangles(options_t *options)
{
    create_options_music_rectangles(options);
    create_options_sound_rectangles(options);
}
