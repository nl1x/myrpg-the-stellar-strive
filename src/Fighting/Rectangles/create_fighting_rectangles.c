/*
** EPITECH PROJECT, 2024
** my_rpg
** File description:
** create_fighting_hp_bar
*/

#include "my_rpg.h"

void create_fighting_rectangles(fighting_t *fight)
{
    fight->rectangles = calloc(NB_FIGHTING_RECTANGLES,
        sizeof(sfRectangleShape *));
    fight->rectangles[FIGHTING_PLAYER_RED_HP_BAR] = create_rectangle(
        POS_PLAYER_BAR_HP, ORIGIN_PLAYER_BAR_HP,
        sfColor_fromInteger(0X898989FF), SIZE_PLAYER_BAR_HP);
    fight->rectangles[FIGHTING_PLAYER_GREEN_HP_BAR] = create_rectangle(
        POS_PLAYER_BAR_HP, ORIGIN_PLAYER_BAR_HP, sfGreen,
        SIZE_PLAYER_BAR_HP);
}
