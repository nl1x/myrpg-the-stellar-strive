/*
** EPITECH PROJECT, 2024
** my_paint
** File description:
** list_buttons
*/

#include "my_rpg.h"
#include "assets.h"

const buttons_path_t list_buttons[8] = {
    {path_assets[NONE_MENU_BUTTON], path_assets[HOVER_MENU_BUTTON],
        path_assets[CLICKED_MENU_BUTTON]},
    {path_assets[NONE_BACK_BUTTON], path_assets[HOVER_BACK_BUTTON],
        path_assets[CLICKED_BACK_BUTTON]},
    {path_assets[NONE_MUSIC_ON_BUTTON], path_assets[HOVER_MUSIC_ON_BUTTON],
        path_assets[CLICKED_MUSIC_ON_BUTTON]},
    {path_assets[NONE_MUSIC_OFF_BUTTON], path_assets[HOVER_MUSIC_OFF_BUTTON],
        path_assets[CLICKED_MUSIC_OFF_BUTTON]},
    {path_assets[NONE_SOUND_ON_BUTTON], path_assets[HOVER_SOUND_ON_BUTTON],
        path_assets[CLICKED_SOUND_ON_BUTTON]},
    {path_assets[NONE_SOUND_OFF_BUTTON], path_assets[HOVER_SOUND_OFF_BUTTON],
        path_assets[CLICKED_SOUND_OFF_BUTTON]},
    {path_assets[NONE_PLAY_BUTTON], path_assets[HOVER_PLAY_BUTTON],
        path_assets[CLICKED_PLAY_BUTTON]},
    {NULL, NULL, NULL}
};
