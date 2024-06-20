/*
** EPITECH PROJECT, 2024
** my_rpg
** File description:
** draw_game_ui
*/

#include "my_rpg.h"

void draw_game_ui(my_rpg_t *rpg)
{
    sfVector2f pos = {0, 0};
    sfVector2f size = {0, 0};
    float tmp = 6;

    set_game_ui_bars(rpg->game);
    for (int i = 0; rpg->game->sprites[i] != NULL; i++) {
        pos = sfView_getCenter(rpg->game->player->camera->view);
        size = sfView_getSize(rpg->game->player->camera->view);
        sfRectangleShape_setPosition(rpg->game->rectangles[i],
        (sfVector2f){(pos.x - size.x / 2) + 21,
        (pos.y - size.y / 2) + tmp + 6.5});
        sfRenderWindow_drawRectangleShape(rpg->window,
            rpg->game->rectangles[i], NULL);
        sfSprite_setPosition(rpg->game->sprites[i],
        (sfVector2f){(pos.x - size.x / 2) + 6, (pos.y - size.y / 2) + tmp});
        sfRenderWindow_drawSprite(rpg->window, rpg->game->sprites[i], NULL);
        tmp += 20;
    }
    if (rpg->game->dialog)
        draw_dialog(rpg, pos, size);
}
