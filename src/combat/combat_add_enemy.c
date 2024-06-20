/*
** EPITECH PROJECT, 2024
** COMBAT_ADD_ENEMY
** File description:
** Combat add enemy
** Author: lysandre.boursette@epitech.eu
*/

#include "my_rpg.h"

enemy_combat_t *combat_add_enemy(combat_t *combat, enemy_t *enemy)
{
    enemy_combat_t *enemy_entry = calloc(1, sizeof(enemy_combat_t));

    if (enemy_entry == NULL)
        return NULL;
    enemy_entry->enemy = enemy;
    enemy_entry->rectangles = calloc(2, sizeof(sfRectangleShape *));
    enemy_entry->rectangles[FIGHTING_PLAYER_RED_HP_BAR] = create_rectangle(
        (sfVector2f){ ENEMY_POS_X - 55, ENEMY_POS_Y - 80},
        (sfVector2f){0, 0}, sfColor_fromInteger(0X898989FF),
        (sfVector2f){ENEMY_HEALTH_BAR_WIDTH, ENEMY_HEALTH_BAR_HEIGHT});
    enemy_entry->rectangles[FIGHTING_PLAYER_GREEN_HP_BAR] = create_rectangle(
        (sfVector2f){ENEMY_POS_X - 55, ENEMY_POS_Y - 80},
        (sfVector2f){0, 0}, sfGreen,
        (sfVector2f){ENEMY_HEALTH_BAR_WIDTH, ENEMY_HEALTH_BAR_HEIGHT});
    TAILQ_INSERT_TAIL(&combat->enemies, enemy_entry, entries);
    combat->enemies_n++;
    return enemy_entry;
}
