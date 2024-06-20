/*
** EPITECH PROJECT, 2024
** DESTROY_COMBAT
** File description:
** Destroy combat
** Author: lysandre.boursette@epitech.eu
*/

#include "my_rpg.h"

void destroy_combat(combat_t *combat)
{
    struct enemy_combat_s *needle = NULL;

    if (combat == NULL)
        return;
    while (!TAILQ_EMPTY(&combat->enemies)) {
        needle = TAILQ_FIRST(&combat->enemies);
        TAILQ_REMOVE(&combat->enemies, needle, entries);
        destroy_enemy(needle->enemy);
        free(needle);
    }
    free(combat);
}
