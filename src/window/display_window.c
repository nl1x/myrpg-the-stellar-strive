/*
** EPITECH PROJECT, 2024
** my_rpg
** File description:
** display_window
*/

#include <stdio.h>
#include "my_rpg.h"

const
handler_t DRAW_STATE_DISPATCHER[TOTAL_RPG_STATES] = {
    { MENU_STATE, &draw_menu },
    { OPTIONS_STATE, &draw_options },
    { LOAD_STATE, &draw_load },
    { KEYBINDS_STATE, &draw_keybinds },
    { TUTORIAL_STATE, &draw_tutorial },
    { NEW_GAME_STATE, &draw_game },
    { FIGHTING_NINJA_BASIC_STATE, &draw_fighting },
    { INVENTORY_STATE, &draw_inventory },
    { ESCAPE_STATE, &draw_escape }
};

static
float get_delta_time(sfClock *delta_clock)
{
    sfTime time = sfClock_getElapsedTime(delta_clock);

    return sfTime_asSeconds(time);
}

static
void draw_dispatch(my_rpg_t *rpg)
{
    for (int i = 0; i < TOTAL_RPG_STATES; i++)
        if (DRAW_STATE_DISPATCHER[i].state == rpg->state)
            return DRAW_STATE_DISPATCHER[i].handler(rpg);
}

unsigned int display_window(void)
{
    my_rpg_t *rpg = create_rpg();

    sfRenderWindow_setFramerateLimit(rpg->window, FPS_LIMIT);
    while (sfRenderWindow_isOpen(rpg->window)) {
        rpg = handle_events(rpg);
        sfRenderWindow_clear(rpg->window, sfBlack);
        draw_dispatch(rpg);
        sfRenderWindow_display(rpg->window);
        rpg->game->delta_time = get_delta_time(rpg->game->delta_clock);
        sfClock_restart(rpg->game->delta_clock);
    }
    destroy_rpg(rpg);
    return SUCCESS;
}
