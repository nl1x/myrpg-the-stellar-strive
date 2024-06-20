/*
** EPITECH PROJECT, 2024
** IS_COMBAT_OVER
** File description:
** Is combat over
** Author: lysandre.boursette@epitech.eu
*/

#include "my_rpg.h"

bool is_combat_over(combat_t *combat)
{
    struct enemy_combat_s *needle = TAILQ_FIRST(&combat->enemies);
    int i = 0;

    TAILQ_FOREACH(needle, &combat->enemies, entries)
        if (needle->enemy->stats->hp == 0)
            i++;
    if (i == combat->enemies_n)
        return true;
    if (combat->player->stats->hp == 0)
        return true;
    return false;
}
