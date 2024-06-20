/*
** EPITECH PROJECT, 2024
** my_rpg
** File description:
** create_stat
*/

#include "my_rpg.h"

stats_t *create_stats(void)
{
    stats_t *stats = calloc(1, sizeof(stats_t));

    stats->hp = BASE_HP;
    stats->mana = BASE_MANA;
    stats->hp_max = BASE_HP_MAX;
    stats->mana_max = BASE_MANA_MAX;
    stats->xp = BASE_XP;
    stats->xp_max = BASE_XP_MAX;
    stats->level = BASE_LEVEL;
    return stats;
}
