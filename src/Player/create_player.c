/*
** EPITECH PROJECT, 2024
** myrpg
** File description:
** create_player.c
** Author: nathan.jeannot@epitech.eu
*/

#include <malloc.h>
#include "item.h"
#include "player.h"
#include "assets.h"
#include "sprite.h"
#include "button.h"
#include "text.h"

static
animation_t *create_player_animation(sfIntRect box)
{
    return create_animation(box, PLAYER_ANIM_BOX_MOVEMENT,
        PLAYER_ANIM_BOX_LIMIT);
}

static
void create_animations(player_t *player, entity_t *entity)
{
    player->up_animation = create_player_animation(PLAYER_ANIM_UP_BOX);
    player->right_animation = create_player_animation(PLAYER_ANIM_RIGHT_BOX);
    player->left_animation = create_player_animation(PLAYER_ANIM_LEFT_BOX);
    player->down_animation = create_player_animation(PLAYER_ANIM_DOWN_BOX);
    player->down_right_animation = create_player_animation(
        PLAYER_ANIM_DOWN_RIGHT_BOX);
    player->down_left_animation = create_player_animation(
        PLAYER_ANIM_DOWN_LEFT_BOX);
    player->up_left_animation = create_player_animation(
        PLAYER_ANIM_UP_LEFT_BOX);
    player->up_right_animation = create_player_animation(
        PLAYER_ANIM_UP_RIGHT_BOX);
    player->animated_entity = create_animated_entity(entity,
        player->left_animation);
}

static
void create_player_camera(player_t *player, sfRenderWindow *win,
    sfVector2f pos)
{
    sfVector2u window_size = sfRenderWindow_getSize(win);
    sfVector2f size = { (float) window_size.x, (float) window_size.y };

    player->camera = create_camera(pos, size, win);
    zoom_camera(player->camera, CAMERA_ZOOM);
}

void create_player_inventory_display(inventory_t *inventory,
    sfRenderWindow *win)
{
    inventory->sprite_texure = sfTexture_createFromFile(
        path_assets[INVENTORY_BG], NULL);
    inventory->sprite_bg = create_sprite(
        (sfVector2f)POS_BG_INVENTORY, SCALE_BG_INVENTORY,
        inventory->sprite_texure);
    inventory->camera = create_camera(
        (sfVector2f){
            POS_BG_INVENTORY.x + SIZE_BG_INVENTORY.x / 2,
            POS_BG_INVENTORY.y + SIZE_BG_INVENTORY.y / 2
        }, SIZE_BG_INVENTORY, win);
    sfView_setViewport(
        inventory->camera->view, INVENTORY_VIEWPORT);
}

inventory_t *create_player_inventory(sfRenderWindow *win)
{
    inventory_t *inventory = calloc(1, sizeof(inventory_t));

    create_player_inventory_display(inventory, win);
    for (int i = 0; i < INVENTORY_SIZE; i++) {
        inventory->items[i].id = -1;
        inventory->items[i].amount = 0;
        inventory->items[i].details = NULL;
    }
    for (int i = 0; i < INVENTORY_EQUIPPED_SIZE; i++) {
        inventory->items_equipped[i].id = -1;
        inventory->items_equipped[i].amount = 0;
        inventory->items_equipped[i].details = NULL;
    }
    inventory->selected = NULL;
    return inventory;
}

player_t *create_player(sfRenderWindow *win, enum assets asset, sfVector2f pos)
{
    player_t *player = calloc(1, sizeof(player_t));
    entity_t *entity = create_entity(path_assets[asset], pos,
        PLAYER_DEFAULT_SCALE, create_area(pos, 4));

    if (player == NULL)
        return NULL;
    create_player_camera(player, win, pos);
    create_animations(player, entity);
    player->inventory = create_player_inventory(win);
    player->stats = create_stats();
    return player;
}
