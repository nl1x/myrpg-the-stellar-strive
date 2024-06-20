/*
** EPITECH PROJECT, 2024
** my_rpg
** File description:
** draw_fighting_bg
*/

#include <stdio.h>
#include "my_rpg.h"

static
bool update_player_text(fighting_t *fight)
{
    float time_elapsed_seconds;
    sfVector2f text_pos;
    sfColor text_color;

    if (fight->player_text == NULL)
        return false;
    time_elapsed_seconds = sfTime_asSeconds(
        sfClock_getElapsedTime(fight->player_clock));
    if (time_elapsed_seconds >= 1) {
        destroy_fighting_player_text(fight);
        fight->player_text = NULL;
        return false;
    }
    text_pos = sfText_getPosition(fight->player_text->text);
    text_color = sfText_getColor(fight->player_text->text);
    sfText_setColor(fight->player_text->text, sfColor_fromRGBA(text_color.r,
        text_color.g, text_color.b, ((1 - time_elapsed_seconds) * 255)));
    sfText_setPosition(fight->player_text->text, (sfVector2f) { text_pos.x,
        text_pos.y - ((1 - time_elapsed_seconds) * 0.5) });
    return true;
}

void draw_fighting_bg(my_rpg_t *rpg)
{
    sfRenderWindow_drawSprite(rpg->window,
        rpg->game->fight->sprites[rpg->game->fight->zone], NULL);
    for (int i = BOX_FIGHTING; rpg->game->fight->sprites[i] != NULL; i++)
        sfRenderWindow_drawSprite(rpg->window, rpg->game->fight->sprites[i],
        NULL);
    if (rpg->game->fight->player_text)
        sfRenderWindow_drawText(rpg->window,
            rpg->game->fight->player_text->text, NULL);
    update_player_text(rpg->game->fight);
}
