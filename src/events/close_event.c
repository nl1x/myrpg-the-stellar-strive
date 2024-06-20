/*
** EPITECH PROJECT, 2024
** my_rpg
** File description:
** close_event
*/

#include "my_rpg.h"

void close_event(my_rpg_t *rpg)
{
    if (rpg->event.type == sfEvtClosed)
        sfRenderWindow_close(rpg->window);
}
