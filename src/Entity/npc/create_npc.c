/*
** EPITECH PROJECT, 2024
** my_rpg
** File description:
** create_npc
*/

#include <string.h>
#include <stdio.h>
#include "my_rpg.h"

static
void set_npc_name(npc_t *npc, yml_t *yml, char *path, char **p)
{
    sprintf(*p, "%s.name", path);
    npc->name = yml_get_str(yml, *p);
}

static
void set_npc_asset(npc_t *npc, yml_t *yml, char *path, char **p)
{
    char *asset = NULL;
    float x = 0;
    float y = 0;
    sfVector2f pos;

    sprintf(*p, "%s.asset", path);
    asset = yml_get_str(yml, *p);
    sprintf(*p, "%s.position.x", path);
    x = yml_get_float(yml, *p);
    sprintf(*p, "%s.position.y", path);
    y = yml_get_float(yml, *p);
    pos = (sfVector2f) { x, y };
    sprintf(*p, "%s.position.indoor", path);
    npc->indoor = yml_get_int(yml, *p) == 1;
    npc->entity = create_entity(asset, pos, PLAYER_DEFAULT_SCALE,
        create_area(pos, 15));
}

static
void set_npc_actions(npc_t *npc, yml_t *yml, char *path, char **p)
{
    sprintf(*p, "%s.actions", path);
    npc->actions = yml_get_list(yml, *p);
}

static
void create_npc_chat_bubble(npc_t *npc)
{
    sfVector2f npc_pos = sfSprite_getPosition(npc->entity->sprite);
    sfVector2f final_pos = (sfVector2f) { npc_pos.x + 8, npc_pos.y - 8 };
    entity_t *entity = create_entity(path_assets[CHAT_BUBBLE_ASSET],
        final_pos, NPC_CHAT_BUBBLE_SCALE, create_area(final_pos, 0));
    animated_entity_t *anim_entity = create_animated_entity(entity,
        create_animation((sfIntRect) {0, 0, 20, 16},
        NPC_CHAT_BUBBLE_BOX_MOVEMENT, NPC_CHAT_BUBBLE_BOX_LIMIT));

    npc->chat_bubble = anim_entity;
}

npc_t *create_npc(yml_t *yml, char *path)
{
    npc_t *npc = calloc(1, sizeof(npc_t));
    char *p = calloc((strlen(path) + 109), sizeof(char));

    if (npc == NULL || p == NULL)
        return NULL;
    set_npc_name(npc, yml, path, &p);
    set_npc_asset(npc, yml, path, &p);
    set_npc_actions(npc, yml, path, &p);
    create_npc_chat_bubble(npc);
    free(p);
    return npc;
}
