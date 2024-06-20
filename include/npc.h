/*
** EPITECH PROJECT, 2024
** my_rpg
** File description:
** npc
*/

#ifndef NPC_H_
    #define NPC_H_

    #include <SFML/Graphics.h>
    #include "entity.h"
    #include "text_box.h"

typedef struct {
    char *name;
    entity_t *entity;
    char **actions;
    text_box_t *text;
    bool in_text_box;
    bool indoor;
    animated_entity_t *chat_bubble;
} npc_t;

/*           NPCs actions           */
void npc_speak_action(void *rpg, npc_t *npc, char **c, char *raw_c);
void npc_hp_action(void *rpg, npc_t *npc, char **c);

#endif /* !NPC_H_ */
