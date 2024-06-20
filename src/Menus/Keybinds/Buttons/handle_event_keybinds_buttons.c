/*
** EPITECH PROJECT, 2024
** my_rpg
** File description:
** handle_event_keybinds_buttons
*/

#include "my_rpg.h"

static
void handle_event_keybinds_right_key_position_text(my_rpg_t *rpg, int *i,
    int len_key)
{
    if (*i >= INDEX_RIGHT_BUTTONS) {
        if (len_key >= 10) {
            sfText_setScale(rpg->options->keybinds->buttons[*i]->text,
                SCALE_KEYBINDS_LONG_KEY);
            sfText_setPosition(rpg->options->keybinds->buttons[*i]->text,
                (sfVector2f){POS_X_RIGHT_KEYBINDS_LONG_KEY,
                POS_Y_KEY_BUTTON + POS_Y_KEYBINDS_LONG_KEY});
        } else {
            sfText_setScale(rpg->options->keybinds->buttons[*i]->text,
                SCALE_KEYBINDS_SHORT_KEY);
            sfText_setPosition(rpg->options->keybinds->buttons[*i]->text,
                (sfVector2f){POS_X_RIGHT_KEYBINDS_SHORT_KEY,
                POS_Y_KEY_BUTTON + POS_Y_KEYBINDS_SHORT_KEY});
        }
    }
}

static
void handle_event_keybinds_left_key_position_text(my_rpg_t *rpg, char *key,
    int *i)
{
    size_t len_key = 0;

    len_key = lx_str_len(key);
    if (*i < INDEX_RIGHT_BUTTONS) {
        if (len_key >= 10) {
            sfText_setScale(rpg->options->keybinds->buttons[*i]->text,
                SCALE_KEYBINDS_LONG_KEY);
            sfText_setPosition(rpg->options->keybinds->buttons[*i]->text,
                (sfVector2f){POS_X_LEFT_KEYBINDS_LONG_KEY,
                POS_Y_KEY_BUTTON + POS_Y_KEYBINDS_LONG_KEY});
        } else {
            sfText_setScale(rpg->options->keybinds->buttons[*i]->text,
                SCALE_KEYBINDS_SHORT_KEY);
            sfText_setPosition(rpg->options->keybinds->buttons[*i]->text,
                (sfVector2f){POS_X_LEFT_KEYBINDS_SHORT_KEY,
                POS_Y_KEY_BUTTON + POS_Y_KEYBINDS_SHORT_KEY});
        }
    }
    handle_event_keybinds_right_key_position_text(rpg, i, len_key);
}

static
void handle_event_keybinds_key_set(my_rpg_t *rpg, bool *is_clicked, int *i)
{
    char *key = NULL;

    if (rpg->event.type == sfEvtKeyReleased) {
        key = get_input(rpg->event.key.code);
        if (key == NULL ||
            check_keybinds_already_used(rpg, rpg->event.key.code) == true)
            return;
        rpg->game->keybinds[*i - 1] = rpg->event.key.code;
        sfText_setString(rpg->options->keybinds->buttons[*i]->text, key);
        handle_event_keybinds_left_key_position_text(rpg, key, i);
        *is_clicked = false;
    }
}

static
void handle_event_keybinds_key_pressed(my_rpg_t *rpg, bool *is_clicked, int *i)
{
    while (*is_clicked)
        if (sfRenderWindow_pollEvent(rpg->window, &rpg->event))
            handle_event_keybinds_key_set(rpg, is_clicked, i);
}

static
void handle_event_keybinds_key_clicked(my_rpg_t *rpg)
{
    bool is_clicked = false;

    for (int i = 1; rpg->options->keybinds->buttons[i] != NULL; i++) {
        if (is_mouse_button(rpg->event.mouseButton.x, rpg->event.mouseButton.y,
            rpg->options->keybinds->buttons[i]) == true) {
            rpg->options->keybinds->buttons[i]->state = CLICKED;
            is_clicked = true;
            sfText_setString(rpg->options->keybinds->buttons[i]->text, "...");
        }
        if (is_clicked == true)
            handle_event_keybinds_key_pressed(rpg, &is_clicked, &i);
    }
}

static
void handle_event_keybinds_buttons_clicked(my_rpg_t *rpg)
{
    for (int i = 0; rpg->options->keybinds->buttons[i] != NULL; i++) {
        if (is_mouse_button(rpg->event.mouseButton.x, rpg->event.mouseButton.y,
            rpg->options->keybinds->buttons[i]) == true)
            rpg->options->keybinds->buttons[i]->state = CLICKED;
        if (rpg->options->keybinds->sound->on == true &&
            is_mouse_button(rpg->event.mouseButton.x, rpg->event.mouseButton.y,
            rpg->options->keybinds->buttons[i]) == true)
            sfSound_play(rpg->options->keybinds->sound->sound);
    }
}

static
void event_keybinds_back_buttons(my_rpg_t *rpg)
{
    if (is_mouse_button(rpg->event.mouseButton.x, rpg->event.mouseButton.y,
        rpg->options->keybinds->buttons[KEYBINDS_BACK_BUTTON]) == true) {
        rpg->options->keybinds->buttons[KEYBINDS_BACK_BUTTON]->state = HOVER;
        rpg->state = OPTIONS_STATE;
        destroy_tutorial(rpg->tutorial);
        create_tutorial(rpg);
    }
}

static
void handle_event_keybinds_buttons_realised(my_rpg_t *rpg)
{
    event_keybinds_back_buttons(rpg);
}

static
void handle_event_keybinds_buttons_hovered(my_rpg_t *rpg)
{
    for (int i = 0; rpg->options->keybinds->buttons[i] != NULL; i++) {
        if (is_mouse_button(rpg->event.mouseMove.x, rpg->event.mouseMove.y,
            rpg->options->keybinds->buttons[i]) == true
            && rpg->options->keybinds->buttons[i]->state == NONE)
            rpg->options->keybinds->buttons[i]->state = HOVER;
        if (is_mouse_button(rpg->event.mouseMove.x, rpg->event.mouseMove.y,
            rpg->options->keybinds->buttons[i]) == false)
            rpg->options->keybinds->buttons[i]->state = NONE;
    }
}

void handle_event_keybinds_buttons(my_rpg_t *rpg)
{
    if (rpg->event.type == sfEvtMouseButtonPressed) {
        handle_event_keybinds_key_clicked(rpg);
        handle_event_keybinds_buttons_clicked(rpg);
    }
    if (rpg->event.type == sfEvtMouseButtonReleased)
        handle_event_keybinds_buttons_realised(rpg);
    if (rpg->event.type == sfEvtMouseMoved)
        handle_event_keybinds_buttons_hovered(rpg);
}
