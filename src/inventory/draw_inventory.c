/*
** EPITECH PROJECT, 2024
** B-MUL-200-REN-2-1-myrpg-nathan.jeannot
** File description:
** draw_inventory.c
*/

#include "my_rpg.h"
#include "item.h"

static
void draw_inventory_bg(my_rpg_t *rpg)
{
    sfRenderWindow_drawSprite(rpg->window,
        rpg->game->player->inventory->sprite_bg, NULL);
}

static
void draw_inventory_items(my_rpg_t *rpg)
{
    for (int i = 0; i < INVENTORY_SIZE; i++)
        if (rpg->game->player->inventory->items[i].id != -1)
            sfRenderWindow_drawSprite(rpg->window,
                rpg->all_items->sprites[
                    rpg->game->player->inventory->items[i].id], NULL);
}

static
void draw_inventory_equipped_items(my_rpg_t *rpg)
{
    for (int i = 0; i < INVENTORY_EQUIPPED_SIZE; i++)
        if (rpg->game->player->inventory->items_equipped[i].id != -1)
            sfRenderWindow_drawSprite(rpg->window,
                rpg->all_items->sprites[
                    rpg->game->player->inventory->items_equipped[i].id], NULL);
}

void draw_inventory(my_rpg_t *rpg)
{
    update_camera(rpg->game->player->camera);
    draw_map(rpg->game->current_map, rpg->window);
    draw_player(rpg->game->player, rpg->window);
    draw_game_ui(rpg);
    update_camera(rpg->game->player->inventory->camera);
    draw_inventory_bg(rpg);
    draw_inventory_items(rpg);
    draw_inventory_equipped_items(rpg);
}
