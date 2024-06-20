/*
** EPITECH PROJECT, 2024
** my_rpg
** File description:
** stats
*/

#ifndef STATS_H_
    #define STATS_H_

typedef struct {
    float hp;
    float mana;
    float xp;
    float xp_max;
    float mana_max;
    float hp_max;
    float level;
} stats_t;

stats_t *create_stats(void);

#endif /* !STATS_H_ */
