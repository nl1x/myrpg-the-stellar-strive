/*
** EPITECH PROJECT, 2024
** GET_HP_COLOR
** File description:
** Get HP color
** Author: lysandre.boursette@epitech.eu
*/

#include "my_rpg.h"

sfColor get_hp_color(int hp, int hp_max)
{
    float ratio = (float) hp / (float) hp_max;

    if (ratio < 0.25)
        return HP_25_COLOR;
    if (ratio < 0.5)
        return HP_50_COLOR;
    if (ratio < 0.75)
        return HP_75_COLOR;
    return HP_100_COLOR;
}
