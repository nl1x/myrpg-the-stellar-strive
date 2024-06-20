/*
** EPITECH PROJECT, 2024
** my_rpg
** File description:
** create_fight
*/

#include "my_rpg.h"

static
void create_temp_fight(fighting_t *fight, player_t *player)
{
    enemy_t *enemy = create_enemy(LARVA_ASSET,
        (sfVector2f) { ENEMY_POS_X, ENEMY_POS_Y });

    fight->combat = create_combat(fight, player);
    combat_add_enemy(fight->combat, enemy);
}

// temp fight needs to be deleted
fighting_t *create_fighting(player_t *player)
{
    fighting_t *fight = calloc(1, sizeof(fighting_t));

    if (fight == NULL)
        return NULL;
    create_temp_fight(fight, player);
    create_fighting_bg(fight);
    create_fighting_buttons(fight);
    create_fighting_rectangles(fight);
    create_fighting_texts(fight);
    fight->player_text = NULL;
    fight->player_clock = sfClock_create();
    fight->wait_clock = sfClock_create();
    fight->waiting = false;
    create_fighting_musics(fight);
    create_fighting_sounds(fight);
    fight->decaded_sounds = sfClock_create();
    return fight;
}
