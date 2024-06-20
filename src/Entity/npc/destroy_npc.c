/*
** EPITECH PROJECT, 2024
** my_rpg
** File description:
** destroy_npc
*/

#include "my_rpg.h"

void destroy_npc(npc_t *npc)
{
    if (!npc)
        return;
    if (npc->entity)
        destroy_entity(npc->entity);
    if (npc->text)
        destroy_text_box(npc->text);
    free(npc);
}
