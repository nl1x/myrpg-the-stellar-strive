/*
** EPITECH PROJECT, 2024
** my_rpg
** File description:
** handle_event_load_buttons
*/

#include "my_rpg.h"

static
void handle_event_load_buttons_clicked(my_rpg_t *rpg)
{
    for (int i = 0; rpg->load->buttons[i] != NULL; i++) {
        if (is_mouse_button(rpg->event.mouseButton.x, rpg->event.mouseButton.x,
            rpg->load->buttons[i]) == true)
            rpg->load->buttons[i]->state = CLICKED;
        if (rpg->load->sound->on == true &&
            is_mouse_button(rpg->event.mouseButton.x, rpg->event.mouseButton.x,
            rpg->load->buttons[i]) == true)
            sfSound_play(rpg->load->sound->sound);
    }
}

static
void event_load_back_buttons(my_rpg_t *rpg)
{
    if (is_mouse_button(rpg->event.mouseButton.x, rpg->event.mouseButton.y,
        rpg->load->buttons[LOAD_BACK_BUTTON]) == true) {
        rpg->load->buttons[LOAD_BACK_BUTTON]->state = HOVER;
        rpg->state = MENU_STATE;
    }
}

static
void handle_event_load_buttons_realised(my_rpg_t *rpg)
{
    event_load_back_buttons(rpg);
}

static
void handle_event_load_buttons_hovered(my_rpg_t *rpg)
{
    for (int i = 0; rpg->load->buttons[i] != NULL; i++) {
        if (is_mouse_button(rpg->event.mouseMove.x, rpg->event.mouseMove.y,
            rpg->load->buttons[i]) == true
            && rpg->load->buttons[i]->state == NONE)
            rpg->load->buttons[i]->state = HOVER;
        if (is_mouse_button(rpg->event.mouseMove.x, rpg->event.mouseMove.y,
            rpg->load->buttons[i]) == false)
            rpg->load->buttons[i]->state = NONE;
    }
}

void handle_event_load_buttons(my_rpg_t *rpg)
{
    if (rpg->event.type == sfEvtMouseButtonPressed)
        handle_event_load_buttons_clicked(rpg);
    if (rpg->event.type == sfEvtMouseButtonReleased)
        handle_event_load_buttons_realised(rpg);
    if (rpg->event.type == sfEvtMouseMoved)
        handle_event_load_buttons_hovered(rpg);
}
