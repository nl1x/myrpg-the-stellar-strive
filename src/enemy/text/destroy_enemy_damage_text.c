/*
** EPITECH PROJECT, 2024
** DESTROY_ENEMY_DAMAGE_TEXT
** File description:
** Destroy enemy damage text
** Author: lysandre.boursette@epitech.eu
*/

#include "my_rpg.h"

void destroy_enemy_damage_text(enemy_t *enemy)
{
    if (!enemy)
        return;
    if (!enemy->text)
        return;
    destroy_text(enemy->text);
}
