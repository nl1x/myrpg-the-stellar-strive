/*
** EPITECH PROJECT, 2024
** myrpg
** File description:
** draw_game.c
** Author: nathan.jeannot@epitech.eu
*/

#include "my_rpg.h"

static
void draw_npcs(my_rpg_t *rpg)
{
    npc_t *needle = NULL;
    bool indoor = rpg->game->current_map->current_location ==
        rpg->game->current_map->inside;

    for (int k = 0; rpg->game->npc[k] != NULL; k++) {
        needle = rpg->game->npc[k];
        if (indoor != rpg->game->npc[k]->indoor)
            continue;
        draw_entity(needle->entity, rpg->window);
        if (is_in_npc_range(rpg, needle)) {
            draw_animated_entity(needle->chat_bubble, rpg->window);
            animate_entity(needle->chat_bubble,
                NPC_CHAT_BUBBLE_BOX_ANIM_SPEED);
        }
    }
}

void draw_game(my_rpg_t *rpg)
{
    update_camera(rpg->game->player->camera);
    handle_player_movement(rpg, rpg->game->player, rpg->game->current_map);
    draw_map(rpg->game->current_map, rpg->window);
    draw_player(rpg->game->player, rpg->window);
    draw_npcs(rpg);
    draw_game_ui(rpg);
}
