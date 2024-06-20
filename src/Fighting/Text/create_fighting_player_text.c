/*
** EPITECH PROJECT, 2024
** CREATE_FIGHTING_PLAYER_TEXT
** File description:
** Create fighting player text
** Author: lysandre.boursette@epitech.eu
*/

#include <stdio.h>
#include "my_rpg.h"

void create_fighting_player_text(fighting_t *fight, bool damage, int amount)
{
    sfColor text_color = damage ? sfRed : sfGreen;
    sfVector2f player_pos = sfSprite_getPosition(
        fight->sprites[PLAYER_FIGHTING]);
    format_t *format = create_format((sfVector2f)
        {player_pos.x + 30, player_pos.y - 100},
        text_color, 36, path_assets[FONT]);
    char damage_str[12] = { 0 };

    sprintf(damage_str, "%c%d", damage ? '-' : '+', amount);
    if (fight->player_text)
        destroy_fighting_player_text(fight);
    fight->player_text = create_text(damage_str, format);
    sfClock_restart(fight->player_clock);
}
