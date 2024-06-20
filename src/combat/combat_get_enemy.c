/*
** EPITECH PROJECT, 2024
** COMBAT_GET_ENEMY
** File description:
** Combat get enemy
** Author: lysandre.boursette@epitech.eu
*/

#include "my_rpg.h"

enemy_combat_t *combat_get_enemy(combat_t *combat, int index)
{
    struct enemy_combat_s *needle = TAILQ_FIRST(&combat->enemies);
    int i = 0;

    TAILQ_FOREACH(needle, &combat->enemies, entries) {
        if (index == i)
            return needle;
        i++;
    }
    return NULL;
}
