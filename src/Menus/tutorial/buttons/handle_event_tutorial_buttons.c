/*
** EPITECH PROJECT, 2024
** HANDLE_EVENT_TUTORIAL_BUTTONS
** File description:
** handle event tutorial buttons
** Author: lysandre.boursette@epitech.eu
*/

#include "my_rpg.h"

static
void handle_event_tutorial_buttons_clicked(my_rpg_t *rpg)
{
    for (int i = 0; rpg->tutorial->buttons[i] != NULL; i++) {
        if (is_mouse_button(rpg->event.mouseButton.x, rpg->event.mouseButton.x,
            rpg->tutorial->buttons[i]) == true)
            rpg->tutorial->buttons[i]->state = CLICKED;
    }
}

static
void event_tutorial_play_buttons(my_rpg_t *rpg)
{
    if (is_mouse_button(rpg->event.mouseButton.x, rpg->event.mouseButton.y,
        rpg->tutorial->buttons[TUTORIAL_PLAY_BUTTON]) == true) {
        rpg->tutorial->buttons[TUTORIAL_PLAY_BUTTON]->state = HOVER;
        rpg->state = NEW_GAME_STATE;
        if (rpg->game->music->on == true)
            sfMusic_play(rpg->game->music->music);
    }
}

static
void handle_event_tutorial_buttons_realised(my_rpg_t *rpg)
{
    for (int i = 0; rpg->tutorial->buttons[i] != NULL; i++) {
        event_tutorial_play_buttons(rpg);
    }
}

static
void handle_event_tutorial_buttons_hovered(my_rpg_t *rpg)
{
    for (int i = 0; rpg->tutorial->buttons[i] != NULL; i++) {
        if (is_mouse_button(rpg->event.mouseMove.x, rpg->event.mouseMove.y,
            rpg->tutorial->buttons[i]) == true
            && rpg->tutorial->buttons[i]->state == NONE)
            rpg->tutorial->buttons[i]->state = HOVER;
        if (is_mouse_button(rpg->event.mouseMove.x, rpg->event.mouseMove.y,
            rpg->tutorial->buttons[i]) == false)
            rpg->tutorial->buttons[i]->state = NONE;
    }
}

void handle_event_tutorial_buttons(my_rpg_t *rpg)
{
    if (rpg->event.type == sfEvtMouseButtonPressed)
        handle_event_tutorial_buttons_clicked(rpg);
    if (rpg->event.type == sfEvtMouseButtonReleased)
        handle_event_tutorial_buttons_realised(rpg);
    if (rpg->event.type == sfEvtMouseMoved)
        handle_event_tutorial_buttons_hovered(rpg);
}
