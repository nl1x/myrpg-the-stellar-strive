/*
** EPITECH PROJECT, 2024
** my_rpg
** File description:
** handle_event_options_buttons
*/

#include "my_rpg.h"
#include <stdio.h>

static
void handle_event_options_buttons_clicked(my_rpg_t *rpg)
{
    for (int i = 0; rpg->options->buttons[i] != NULL; i++) {
        if (is_mouse_button(rpg->event.mouseButton.x, rpg->event.mouseButton.x,
            rpg->options->buttons[i]) == true)
            rpg->options->buttons[i]->state = CLICKED;
        if (rpg->options->sound->on == true &&
            is_mouse_button(rpg->event.mouseButton.x, rpg->event.mouseButton.x,
            rpg->options->buttons[i]) == true)
            sfSound_play(rpg->options->sound->sound);
    }
}

static
void event_options_back_buttons(my_rpg_t *rpg)
{
    if (is_mouse_button(rpg->event.mouseButton.x, rpg->event.mouseButton.y,
        rpg->options->buttons[OPTIONS_BACK_BUTTON]) == true) {
        rpg->options->buttons[OPTIONS_BACK_BUTTON]->state = HOVER;
        rpg->state = MENU_STATE;
    }
}

static
void event_music_on_button(my_rpg_t *rpg)
{
    float volume = sfMusic_getVolume(rpg->menu->music->music);

    if (is_mouse_button(rpg->event.mouseButton.x, rpg->event.mouseButton.y,
        rpg->options->buttons[OPTIONS_MUSIC_ON]) == true) {
        rpg->options->buttons[OPTIONS_MUSIC_ON]->state = HOVER;
        if (sfMusic_getStatus(rpg->menu->music->music) == sfPaused)
            sfMusic_play(rpg->menu->music->music);
        if (volume < 100)
            sfMusic_setVolume(rpg->menu->music->music,
            volume + 20.0);
        handle_fighting_music_on(rpg->game->fight->musics[MUSIC_FIGHTING_1]);
        handle_game_music_on(rpg->game->music);
    }
}

static
void event_music_off_button(my_rpg_t *rpg)
{
    float volume = sfMusic_getVolume(rpg->menu->music->music);

    if (is_mouse_button(rpg->event.mouseButton.x, rpg->event.mouseButton.y,
        rpg->options->buttons[OPTIONS_MUSIC_OFF]) == true) {
        rpg->options->buttons[OPTIONS_MUSIC_OFF]->state = HOVER;
        if (volume < 20) {
            sfMusic_setVolume(rpg->menu->music->music, 0.0);
            sfMusic_pause(rpg->menu->music->music);
        }
        if (volume > 0
            && sfMusic_getStatus(rpg->menu->music->music) == sfPlaying)
            sfMusic_setVolume(rpg->menu->music->music,
            volume - 20.0);
        handle_fighting_music_off(rpg->game->fight->musics[MUSIC_FIGHTING_1]);
        handle_game_music_off(rpg->game->music);
    }
}

static
void event_sound_on_button(my_rpg_t *rpg)
{
    float volume = sfSound_getVolume(rpg->menu->sound->sound);

    if (is_mouse_button(rpg->event.mouseButton.x, rpg->event.mouseButton.y,
        rpg->options->buttons[OPTIONS_SOUND_ON]) == true) {
        rpg->options->buttons[OPTIONS_SOUND_ON]->state = HOVER;
        if (volume < 100) {
            sfSound_setVolume(rpg->menu->sound->sound, volume + 20.0);
            sfSound_setVolume(rpg->options->sound->sound, volume + 20.0);
            sfSound_setVolume(rpg->load->sound->sound, volume + 20.0);
            rpg->menu->sound->on = true;
            rpg->options->sound->on = true;
            rpg->load->sound->on = true;
        }
        handle_fighting_sound_on(rpg->game->fight->sounds[0]);
    }
}

static
void event_sound_off_button(my_rpg_t *rpg)
{
    float volume = sfSound_getVolume(rpg->menu->sound->sound);

    if (is_mouse_button(rpg->event.mouseButton.x, rpg->event.mouseButton.y,
        rpg->options->buttons[OPTIONS_SOUND_OFF]) == true) {
        rpg->options->buttons[OPTIONS_SOUND_OFF]->state = HOVER;
        if (volume < 20) {
            sfSound_setVolume(rpg->menu->sound->sound, 0.0);
            sfSound_pause(rpg->menu->sound->sound);
            rpg->menu->sound->on = false;
            rpg->options->sound->on = false;
            rpg->load->sound->on = false;
        }
        if (volume > 0) {
            sfSound_setVolume(rpg->menu->sound->sound, volume - 20.0);
            sfSound_setVolume(rpg->options->sound->sound, volume - 20.0);
            sfSound_setVolume(rpg->load->sound->sound, volume - 20.0);
        }
        handle_fighting_sound_off(rpg->game->fight->sounds[0]);
    }
}

static
void event_keybinds_button(my_rpg_t *rpg)
{
    if (is_mouse_button(rpg->event.mouseButton.x, rpg->event.mouseButton.y,
        rpg->options->buttons[OPTIONS_KEYBINDS]) == true) {
        rpg->options->buttons[OPTIONS_KEYBINDS]->state = HOVER;
        rpg->state = KEYBINDS_STATE;
    }
}

static
void handle_event_options_buttons_realised(my_rpg_t *rpg)
{
    event_options_back_buttons(rpg);
    event_music_on_button(rpg);
    event_music_off_button(rpg);
    event_sound_on_button(rpg);
    event_sound_off_button(rpg);
    event_keybinds_button(rpg);
}

static
void handle_event_options_buttons_hovered(my_rpg_t *rpg)
{
    for (int i = 0; rpg->options->buttons[i] != NULL; i++) {
        if (is_mouse_button(rpg->event.mouseMove.x, rpg->event.mouseMove.y,
            rpg->options->buttons[i]) == true
            && rpg->options->buttons[i]->state == NONE)
            rpg->options->buttons[i]->state = HOVER;
        if (is_mouse_button(rpg->event.mouseMove.x, rpg->event.mouseMove.y,
            rpg->options->buttons[i]) == false)
            rpg->options->buttons[i]->state = NONE;
    }
}

void handle_event_options_buttons(my_rpg_t *rpg)
{
    if (rpg->event.type == sfEvtMouseButtonPressed)
        handle_event_options_buttons_clicked(rpg);
    if (rpg->event.type == sfEvtMouseButtonReleased)
        handle_event_options_buttons_realised(rpg);
    if (rpg->event.type == sfEvtMouseMoved)
        handle_event_options_buttons_hovered(rpg);
}
