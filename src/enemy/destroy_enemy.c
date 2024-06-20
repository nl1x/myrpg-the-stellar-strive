/*
** EPITECH PROJECT, 2024
** DESTROY_ENEMY
** File description:
** Destroy enemy
** Author: lysandre.boursette@epitech.eu
*/

#include "my_rpg.h"

void destroy_enemy(enemy_t *enemy)
{
    destroy_animated_entity(enemy->animated_entity);
    destroy_animation(enemy->idle_animation);
    destroy_enemy_damage_text(enemy);
    free(enemy);
}
