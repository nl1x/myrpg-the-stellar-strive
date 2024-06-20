/*
** EPITECH PROJECT, 2024
** myrpg
** File description:
** handle_combat_zones.c
** Author: nathan.jeannot@epitech.eu
*/

#include <string.h>
#include "player.h"
#include "map.h"
#include "my_rpg.h"

static
combat_zone_t *get_colliding_combat_zone(
    player_t *player, lx_list_t *combat_zones)
{
    sfFloatRect player_rect = sfSprite_getGlobalBounds(
        player->animated_entity->entity->sprite);
    lx_node_t *node = combat_zones->head;
    combat_zone_t *combat_zone = NULL;

    while (node != NULL) {
        combat_zone = node->data;
        if (sfFloatRect_intersects(&combat_zone->rect, &player_rect, NULL))
            return combat_zone;
        node = node->next;
    }
    return NULL;
}

static
bool random_fight(void)
{
    return get_random_number(1, 600) == 1;
}

static
enum fighting_sprites get_zone(char *name)
{
    if (strcmp(name, "field") == 0)
        return BG_FIGHTING_NINJA_FIELD;
    if (strcmp(name, "green") == 0)
        return BG_FIGHTING_NINJA_GREEN;
    return BG_FIGHTING_NINJA_BASIC;
}

void handle_combat_zones(my_rpg_t *rpg, player_t *player, map_t *map)
{
    combat_zone_t *combat_zone = get_colliding_combat_zone(player,
        map->current_location->combat_zones);
    bool run_fight = random_fight();
    enum fighting_sprites zone = -1;
    enemy_t *enemy = create_enemy(LARVA_ASSET,
        (sfVector2f) { ENEMY_POS_X, ENEMY_POS_Y });
    combat_t *combat = create_combat(rpg->game->fight, player);

    if (combat_zone == NULL || !run_fight)
        return;
    zone = get_zone(combat_zone->name);
    rpg->state = FIGHTING_NINJA_BASIC_STATE;
    play_random_sound(rpg->game->fight->sounds, 2);
    sfMusic_pause(rpg->game->music->music);
    sfClock_restart(rpg->game->fight->decaded_sounds);
    combat_add_enemy(combat, enemy);
    rpg->game->fight->combat = combat;
    rpg->game->fight->zone = zone;
    sfRenderWindow_setView(rpg->window,
        sfRenderWindow_getDefaultView(rpg->window));
}
