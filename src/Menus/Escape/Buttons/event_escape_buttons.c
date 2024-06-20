/*
** EPITECH PROJECT, 2024
** my_rpg
** File description:
** event_escape_buttons
*/

#include "my_rpg.h"

static
void handle_event_escape_buttons_clicked(my_rpg_t *rpg)
{
    for (int i = 0; rpg->escape->buttons[i] != NULL; i++) {
        if (is_mouse_button(rpg->event.mouseButton.x, rpg->event.mouseButton.x,
            rpg->escape->buttons[i]) == true)
            rpg->escape->buttons[i]->state = CLICKED;
    }
}

static
void event_escape_resume_buttons(my_rpg_t *rpg)
{
    if (is_mouse_button(rpg->event.mouseButton.x, rpg->event.mouseButton.y,
        rpg->escape->buttons[ESCAPE_RESUME]) == true) {
        rpg->escape->buttons[ESCAPE_RESUME]->state = HOVER;
        rpg->state = NEW_GAME_STATE;
    }
}

static
void event_escape_back_to_menu_buttons(my_rpg_t *rpg)
{
    if (is_mouse_button(rpg->event.mouseButton.x, rpg->event.mouseButton.y,
        rpg->escape->buttons[BACK_TO_MENU_RESUME]) == true) {
        rpg->escape->buttons[BACK_TO_MENU_RESUME]->state = HOVER;
        rpg->state = MENU_STATE;
        sfMusic_stop(rpg->game->music->music);
        sfMusic_play(rpg->menu->music->music);
    }
}

static
void handle_event_escape_buttons_realised(my_rpg_t *rpg)
{
    for (int i = 0; rpg->escape->buttons[i] != NULL; i++) {
        event_escape_resume_buttons(rpg);
        event_escape_back_to_menu_buttons(rpg);
    }
}

static
void handle_event_escape_buttons_hovered(my_rpg_t *rpg)
{
    for (int i = 0; rpg->escape->buttons[i] != NULL; i++) {
        if (is_mouse_button(rpg->event.mouseMove.x, rpg->event.mouseMove.y,
            rpg->escape->buttons[i]) == true
            && rpg->escape->buttons[i]->state == NONE)
            rpg->escape->buttons[i]->state = HOVER;
        if (is_mouse_button(rpg->event.mouseMove.x, rpg->event.mouseMove.y,
            rpg->escape->buttons[i]) == false)
            rpg->escape->buttons[i]->state = NONE;
    }
}

void handle_event_escape_buttons(my_rpg_t *rpg)
{
    if (rpg->event.type == sfEvtMouseButtonPressed)
        handle_event_escape_buttons_clicked(rpg);
    if (rpg->event.type == sfEvtMouseButtonReleased)
        handle_event_escape_buttons_realised(rpg);
    if (rpg->event.type == sfEvtMouseMoved)
        handle_event_escape_buttons_hovered(rpg);
}
