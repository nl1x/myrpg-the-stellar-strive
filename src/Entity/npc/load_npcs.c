/*
** EPITECH PROJECT, 2024
** LOAD_NPCS
** File description:
** load npcs
** Author: lysandre.boursette@epitech.eu
*/

#include <stdio.h>
#include "my_rpg.h"

static
sfFloatRect *get_npc_rect(npc_t *npc)
{
    sfFloatRect *rect = calloc(1, sizeof(npc_t));
    sfFloatRect npc_rect = sfSprite_getGlobalBounds(npc->entity->sprite);

    rect->top = npc_rect.top;
    rect->left = npc_rect.left;
    rect->width = npc_rect.width;
    rect->height = npc_rect.height;
    return rect;
}

static
void put_npcs(yml_t *npcs_yml, int npcs_n, my_rpg_t *rpg)
{
    int k = 0;
    char p[16];

    for (; k < npcs_n; k++) {
        sprintf(p, "npcs.%d", k);
        rpg->game->npc[k] = create_npc(npcs_yml, p);
        lx_list_append(rpg->game->current_map->outside->collision_rects,
            get_npc_rect(rpg->game->npc[k]));
    }
    rpg->game->npc[k] = NULL;
}

int load_npcs(my_rpg_t *rpg)
{
    yml_t *npcs_yml = yml_create_from_file("configs/npcs.yml");
    int npcs_n = 0;

    if (npcs_yml == NULL)
        return FAILURE;
    npcs_n = yml_get_children_n(npcs_yml, "npcs");
    if (npcs_n <= 0)
        return yml_destroy(npcs_yml), FAILURE;
    rpg->game->npc = calloc(npcs_n + 1, sizeof(npc_t *));
    if (rpg->game->npc == NULL)
        return yml_destroy(npcs_yml), FAILURE;
    put_npcs(npcs_yml, npcs_n, rpg);
    return SUCCESS;
}
