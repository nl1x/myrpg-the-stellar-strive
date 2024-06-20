/*
** EPITECH PROJECT, 2024
** FIGHTING_BUTTONS_MAGIC_ACTIONS
** File description:
** Fighting buttons magic actions
** Author: lysandre.boursette@epitech.eu
*/

#include "my_rpg.h"

static
void pass_turn(my_rpg_t *rpg)
{
    update_turn_text(rpg->game->fight, true);
    rpg->game->fight->state = FIGHTING_MENU_STATE;
    rpg->game->fight->combat->state = BEING_ATTACKED;
    sfClock_restart(rpg->game->fight->wait_clock);
    rpg->game->fight->waiting = true;
}

void poison_button(my_rpg_t *rpg)
{
    struct enemy_combat_s *needle =
        TAILQ_FIRST(&rpg->game->fight->combat->enemies);

    if (rpg->game->player->stats->mana < 15)
        return;
    rpg->game->player->stats->mana -= 15;
    for (; needle; needle = needle->entries.tqe_next)
        needle->enemy->is_poisoned += 4;
    pass_turn(rpg);
}

void fire_button(my_rpg_t *rpg)
{
    struct enemy_combat_s *needle =
        TAILQ_FIRST(&rpg->game->fight->combat->enemies);

    if (rpg->game->player->stats->mana < 20)
        return;
    rpg->game->player->stats->mana -= 20;
    for (; needle; needle = needle->entries.tqe_next)
        needle->enemy->is_in_fire += 3;
    pass_turn(rpg);
}

void ice_button(my_rpg_t *rpg)
{
    struct enemy_combat_s *needle =
        TAILQ_FIRST(&rpg->game->fight->combat->enemies);

    if (rpg->game->player->stats->mana < 12)
        return;
    rpg->game->player->stats->mana -= 12;
    for (; needle; needle = needle->entries.tqe_next)
        needle->enemy->is_iced += 2;
    pass_turn(rpg);
}
