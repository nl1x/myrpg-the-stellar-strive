/*
** EPITECH PROJECT, 2024
** my_rpg
** File description:
** It's here where you will call all your events_function
*/

#include "my_rpg.h"

const
handler_t EVENT_HANDLER_DISPATCHER[TOTAL_RPG_STATES] = {
    { OPTIONS_STATE, &handle_event_options },
    { MENU_STATE, &handle_event_menu },
    { NEW_GAME_STATE, &handle_new_game_event },
    { LOAD_STATE, &handle_event_load },
    { KEYBINDS_STATE, &handle_event_keybinds },
    { TUTORIAL_STATE, &handle_event_tutorial_buttons },
    { FIGHTING_NINJA_BASIC_STATE, &handle_fighting_events },
    { INVENTORY_STATE, &handle_inventory_event },
    { ESCAPE_STATE, &handle_events_escape }
};

static
void dispatch_events(my_rpg_t *rpg)
{
    for (int i = 0; i < TOTAL_RPG_STATES; i++)
        if (EVENT_HANDLER_DISPATCHER[i].state == rpg->state)
            return EVENT_HANDLER_DISPATCHER[i].handler(rpg);
}

my_rpg_t *handle_events(my_rpg_t *rpg)
{
    while (sfRenderWindow_pollEvent(rpg->window, &rpg->event)) {
        close_event(rpg);
        dispatch_events(rpg);
    }
    return rpg;
}
