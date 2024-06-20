/*
** EPITECH PROJECT, 2024
** CREATE_ENEMY_DAMAGE_TEXT
** File description:
** Create enemy damage text
** Author: lysandre.boursette@epitech.eu
*/

#include <stdio.h>
#include "my_rpg.h"

void create_enemy_damage_text(enemy_t *enemy, int damage, bool fire)
{
    sfColor text_color = fire ? sfColor_fromInteger(0XE69138FF) : sfRed;
    sfVector2f enemy_pos = enemy->animated_entity->entity->pos;
    format_t *format = create_format((sfVector2f)
        { enemy_pos.x, enemy_pos.y - 130}, text_color, 36, path_assets[FONT]);
    char damage_str[12] = { 0 };

    sprintf(damage_str, "-%d", damage);
    if (enemy->text)
        destroy_enemy_damage_text(enemy);
    enemy->text = create_text(damage_str, format);
    sfClock_restart(enemy->clock);
}
