/*
** EPITECH PROJECT, 2024
** FIGHTING_BUTTONS_ACTIONS
** File description:
** Fighting buttons actions
** Author: lysandre.boursette@epitech.eu
*/

#include "my_rpg.h"

static
void pass_turn(my_rpg_t *rpg)
{
    rpg->game->fight->state = FIGHTING_MENU_STATE;
    rpg->game->fight->combat->state = BEING_ATTACKED;
    sfClock_restart(rpg->game->fight->wait_clock);
    rpg->game->fight->waiting = true;
}

void escape_button(my_rpg_t *rpg)
{
    rpg->state = NEW_GAME_STATE;
    destroy_combat(rpg->game->fight->combat);
    rpg->game->fight->combat = NULL;
    for (int i = 0; rpg->game->fight->musics[i] != NULL; i++)
        sfMusic_stop(rpg->game->fight->musics[i]->music);
    if (rpg->game->music->on == true)
        sfMusic_play(rpg->game->music->music);
}

void heal_button(my_rpg_t *rpg)
{
    int amount = get_random_number(MIN_HP_HEAL, MAX_HP_HEAL);

    if (rpg->game->player->stats->hp == rpg->game->player->stats->hp_max)
        return;
    rpg->game->player->stats->hp += amount;
    if (rpg->game->player->stats->hp > rpg->game->player->stats->hp_max)
        rpg->game->player->stats->hp = rpg->game->player->stats->hp_max;
    update_player_hp_bar(rpg->game->player, rpg->game->fight);
    create_fighting_player_text(rpg->game->fight, false, amount);
    pass_turn(rpg);
}

void attack_button(my_rpg_t *rpg)
{
    rpg->game->fight->state = FIGHTING_ATTACK_STATE;
    sfSprite_setPosition(rpg->game->fight->sprites[ARROW_SELECT_FIGHTING],
        POS_ARROW_SELECT_FIGHTING);
}
