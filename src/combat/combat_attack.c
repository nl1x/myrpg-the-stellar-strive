/*
** EPITECH PROJECT, 2024
** COMBAT_ATTACK
** File description:
** Combat attack
** Author: lysandre.boursette@epitech.eu
*/

#include <stdio.h>
#include "my_rpg.h"

/**
 * @param   combat      Combat instance
 * @param   attacker    Victim index in the combat enemies list
 * @return  Damage dealt
 */
int combat_attack(combat_t *combat, int enemy)
{
    int damage = 0;
    enemy_combat_t *victim = combat_get_enemy(combat, enemy);

    if (victim == NULL)
        return -1;
    damage = get_random_number(COMBAT_MIN_DAMAGE, COMBAT_MAX_DAMAGE);
    combat->state = ATTACKING;
    if (victim->enemy->stats->hp < damage)
        damage = victim->enemy->stats->hp;
    victim->enemy->stats->hp -= damage;
    create_enemy_damage_text(victim->enemy, damage,
        victim->enemy->is_in_fire > 0);
    enemy_update_rectangle(victim);
    combat->state = BEING_ATTACKED;
    return damage;
}
