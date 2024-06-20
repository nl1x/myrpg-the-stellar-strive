/*
** EPITECH PROJECT, 2024
** COMBAT_SELF_DAMAGE
** File description:
** Combat self damage
** Author: lysandre.boursette@epitech.eu
*/

#include "my_rpg.h"

static
void update_enemy_magic_status(enemy_t *enemy)
{
    if (enemy->is_poisoned > 0)
        enemy->is_poisoned--;
    if (enemy->is_in_fire > 0)
        enemy->is_in_fire--;
    if (enemy->is_iced > 0)
        enemy->is_iced--;
}

static
int combat_enemy_attack(fighting_t *fight, enemy_combat_t *enemy)
{
    int damage = get_random_number(COMBAT_MIN_DAMAGE, COMBAT_MAX_DAMAGE);

    if (enemy->enemy->is_poisoned > 0)
        damage *= 0.5;
    if (enemy->enemy->is_iced == 0) {
        if (fight->combat->player->stats->hp < damage)
            damage = fight->combat->player->stats->hp;
        fight->combat->player->stats->hp -= damage;
        update_player_hp_bar(fight->combat->player, fight);
    } else
        damage = 0;
    update_enemy_magic_status(enemy->enemy);
    return damage;
}

void combat_self_damage(fighting_t *fight)
{
    int attacker = get_random_number(0, fight->combat->enemies_n - 1);
    struct enemy_combat_s *needle = TAILQ_FIRST(&fight->combat->enemies);
    int damage = 0;

    fight->combat->state = BEING_ATTACKED;
    for (int i = 0; needle; needle = needle->entries.tqe_next) {
        if (i != attacker)
            continue;
        damage = combat_enemy_attack(fight, needle);
        if (fight->combat->player->stats->hp == 0)
            break;
    }
    if (damage > 0)
        create_fighting_player_text(fight, true, damage);
    fight->combat->state = CHOOSING;
    update_turn_text(fight, false);
}
