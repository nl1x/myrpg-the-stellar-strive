/*
** EPITECH PROJECT, 2024
** my_rpg
** File description:
** draw_fighting
*/

#include "my_rpg.h"

static
void draw_enemies(my_rpg_t *rpg, fighting_t *fight)
{
    struct enemy_combat_s *needle = NULL;

    TAILQ_FOREACH(needle, &fight->combat->enemies, entries)
        draw_enemy(rpg, needle);
}

static
bool execute_next_action(my_rpg_t *rpg, fighting_t *fight)
{
    if (fight->combat->state == CHOOSING)
        return false;
    if (fight->combat->state == BEING_ATTACKED)
        combat_self_damage(fight);
    if (fight->combat->state == FINISHED)
        escape_button(rpg);
    return true;
}

static
void update_fighting(my_rpg_t *rpg, fighting_t *fight)
{
    float time_elapsed_seconds;

    if (!fight->waiting)
        return;
    time_elapsed_seconds = sfTime_asSeconds(
        sfClock_getElapsedTime(fight->wait_clock));
    if (time_elapsed_seconds >= 1) {
        fight->waiting = false;
        if (execute_next_action(rpg, fight)) {
            fight->waiting = true;
            sfClock_restart(fight->wait_clock);
        }
    }
}

static
void handle_combat_musics_and_sounds(my_rpg_t *rpg)
{
    float time_elapsed_seconds = sfTime_asSeconds(
        sfClock_getElapsedTime(rpg->game->fight->decaded_sounds));

    if (rpg->state != FIGHTING_NINJA_BASIC_STATE)
        return;
    if (time_elapsed_seconds >= 6 && time_elapsed_seconds <= 6.01)
        play_random_music(rpg->game->fight->musics, 2);
}

void draw_fighting(my_rpg_t *rpg)
{
    draw_fighting_bg(rpg);
    draw_fighting_buttons(rpg);
    draw_fighting_rectangles(rpg);
    draw_fighting_texts(rpg);
    draw_enemies(rpg, rpg->game->fight);
    update_fighting(rpg, rpg->game->fight);
    handle_combat_musics_and_sounds(rpg);
}
