/*
** EPITECH PROJECT, 2024
** ENEMY_UPDATE_RECTANGLE
** File description:
** Update rectangle hp bar enemy
** Author: lysandre.boursette@epitech.eu
*/

#include "my_rpg.h"

void enemy_update_rectangle(enemy_combat_t *enemy)
{
    int hp = enemy->enemy->stats->hp;
    int hp_max = enemy->enemy->stats->hp_max;

    sfRectangleShape_setSize(enemy->rectangles[1],
        (sfVector2f) { (float) hp / (float) hp_max * ENEMY_HEALTH_BAR_WIDTH,
        ENEMY_HEALTH_BAR_HEIGHT });
    sfRectangleShape_setFillColor(enemy->rectangles[1],
        get_hp_color(hp, hp_max));
}
