/*
** EPITECH PROJECT, 2024
** CREATE_ENEMY
** File description:
** Create enemy
** Author: lysandre.boursette@epitech.eu
*/

#include "my_rpg.h"

enemy_t *create_enemy(enum assets asset, sfVector2f pos)
{
    enemy_t *enemy = calloc(1, sizeof(enemy_t));
    entity_t *entity = create_entity(path_assets[asset], pos,
        ENEMY_DEFAULT_SCALE, create_area(pos, 1));
    animation_t *entity_anim = create_animation(ENEMY_ANIM_LEFT_BOX,
        ENEMY_ANIM_BOX_MOVEMENT, ENEMY_ANIM_BOX_LIMIT);

    if (enemy == NULL || entity == NULL || entity_anim == NULL)
        return NULL;
    enemy->animated_entity = create_animated_entity(entity, entity_anim);
    enemy->stats = create_stats();
    enemy->stats->hp = ENEMY_DEFAULT_HP;
    enemy->stats->hp_max = ENEMY_DEFAULT_HP;
    enemy->is_in_fire = 0;
    enemy->is_poisoned = 0;
    enemy->is_iced = 0;
    enemy->clock = sfClock_create();
    return enemy;
}
