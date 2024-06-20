/*
** EPITECH PROJECT, 2024
** my_rpg
** File description:
** handle_event_menu_buttons
*/

#include "my_rpg.h"

static
void handle_event_menu_buttons_clicked(my_rpg_t *rpg)
{
    for (int i = 0; rpg->menu->buttons[i] != NULL; i++) {
        if (is_mouse_button(rpg->event.mouseButton.x, rpg->event.mouseButton.x,
            rpg->menu->buttons[i]) == true)
            rpg->menu->buttons[i]->state = CLICKED;
        if (rpg->menu->sound->on == true &&
            is_mouse_button(rpg->event.mouseButton.x, rpg->event.mouseButton.x,
            rpg->menu->buttons[i]) == true)
            sfSound_play(rpg->menu->sound->sound);
    }
}

static
void event_menu_exit_buttons(my_rpg_t *rpg)
{
    if (is_mouse_button(rpg->event.mouseButton.x, rpg->event.mouseButton.y,
        rpg->menu->buttons[EXIT_BUTTON]) == true) {
        rpg->menu->buttons[EXIT_BUTTON]->state = HOVER;
        sfRenderWindow_close(rpg->window);
    }
}

static
void event_menu_new_game_buttons(my_rpg_t *rpg)
{
    if (is_mouse_button(rpg->event.mouseButton.x, rpg->event.mouseButton.y,
        rpg->menu->buttons[NEW_GAME_BUTTON]) == true) {
        rpg->menu->buttons[NEW_GAME_BUTTON]->state = HOVER;
        rpg->state = TUTORIAL_STATE;
        sfMusic_stop(rpg->menu->music->music);
    }
}

static
void event_menu_load_buttons(my_rpg_t *rpg)
{
    if (is_mouse_button(rpg->event.mouseButton.x, rpg->event.mouseButton.y,
        rpg->menu->buttons[LOAD_BUTTON]) == true) {
        rpg->menu->buttons[LOAD_BUTTON]->state = HOVER;
        rpg->state = LOAD_STATE;
    }
}

static
void event_menu_options_buttons(my_rpg_t *rpg)
{
    if (is_mouse_button(rpg->event.mouseButton.x, rpg->event.mouseButton.y,
        rpg->menu->buttons[OPTIONS_BUTTON]) == true) {
        rpg->menu->buttons[OPTIONS_BUTTON]->state = HOVER;
        rpg->state = OPTIONS_STATE;
    }
}

static
void handle_event_menu_buttons_realised(my_rpg_t *rpg)
{
    for (int i = 0; rpg->menu->buttons[i] != NULL; i++) {
        event_menu_new_game_buttons(rpg);
        event_menu_load_buttons(rpg);
        event_menu_options_buttons(rpg);
        event_menu_exit_buttons(rpg);
    }
}

static
void handle_event_menu_buttons_hovered(my_rpg_t *rpg)
{
    for (int i = 0; rpg->menu->buttons[i] != NULL; i++) {
        if (is_mouse_button(rpg->event.mouseMove.x, rpg->event.mouseMove.y,
            rpg->menu->buttons[i]) == true
            && rpg->menu->buttons[i]->state == NONE)
            rpg->menu->buttons[i]->state = HOVER;
        if (is_mouse_button(rpg->event.mouseMove.x, rpg->event.mouseMove.y,
            rpg->menu->buttons[i]) == false)
            rpg->menu->buttons[i]->state = NONE;
    }
}

void handle_event_menu_buttons(my_rpg_t *rpg)
{
    if (rpg->event.type == sfEvtMouseButtonPressed)
        handle_event_menu_buttons_clicked(rpg);
    if (rpg->event.type == sfEvtMouseButtonReleased)
        handle_event_menu_buttons_realised(rpg);
    if (rpg->event.type == sfEvtMouseMoved)
        handle_event_menu_buttons_hovered(rpg);
}
