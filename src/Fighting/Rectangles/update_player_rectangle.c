/*
** EPITECH PROJECT, 2024
** UPDATE_PLAYER_RECTANGLE
** File description:
** Update player rectangle
** Author: lysandre.boursette@epitech.eu
*/

#include "my_rpg.h"

void update_player_hp_bar(player_t *player, fighting_t *fight)
{
    int hp = player->stats->hp;
    int hp_max = player->stats->hp_max;

    if (fight == NULL || fight->rectangles == NULL)
        return;
    sfRectangleShape_setSize(fight->rectangles[1],
        (sfVector2f) { (float) hp / (float) hp_max * SIZE_PLAYER_BAR_HP.x,
        SIZE_PLAYER_BAR_HP.y });
    sfRectangleShape_setFillColor(fight->rectangles[1],
        get_hp_color(hp, hp_max));
}
