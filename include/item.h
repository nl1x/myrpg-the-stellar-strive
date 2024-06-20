/*
** EPITECH PROJECT, 2024
** B-MUL-200-REN-2-1-myrpg-nathan.jeannot
** File description:
** item.h
*/

#ifndef ITEM_H_
    #define ITEM_H_

    #include <SFML/Graphics.h>

    #include "camera.h"

    #define SCALE_BG_INVENTORY ((sfVector2f){1, 1})
    #define POS_BG_INVENTORY ((sfVector2f){-250, 0})
    #define SIZE_BG_INVENTORY ((sfVector2f){250, 200})
    #define INVENTORY_VIEWPORT ((sfFloatRect){0.23, 0.15, .13 * 4, .185 * 4})

    #define INVENTORY_TEXT_COLOR sfBlack
    #define INVENTORY_TEXT_SIZE 14

    #define INVENTORY_SIZE 25
    #define INVENTORY_EQUIPPED_SIZE 3

    #define ITEM_SIZE ((sfVector2u){ 16, 16 })

enum item_type {
    ITEM_TYPE_NONE,
    ITEM_TYPE_FOOD,
    ITEM_TYPE_WEAPON,
    ITEM_TYPE_POTION
};

enum inventory_texts {
    TEXT_INVENTORY,
    TEXT_EQUIPPED,
    INVENTORY_TEXTS_SIZE
};

static const
sfVector2f ITEM_POSITIONS[INVENTORY_SIZE] = {
    { 36, 41 }, { 64, 41 }, { 92, 41 }, { 120, 41 }, { 148, 41 },
    { 36, 70 }, { 64, 70 }, { 92, 70 }, { 120, 70 }, { 148, 70 },
    { 36, 99 }, { 64, 99 }, { 92, 99 }, { 120, 99 }, { 148, 99 },
    { 36, 128}, { 64, 128}, { 92, 128}, { 120, 128}, { 148, 128},
    { 36, 157}, { 64, 157}, { 92, 157}, { 120, 157}, { 148, 157}
};

typedef struct {
    sfSprite **sprites;
    sfTexture **textures;
    char **names;
    char **descriptions;
    enum item_type *types;
    void **base_details;
} all_items_t;

typedef struct {
    int id;
    int amount;
    void *details;
} item_t;

typedef struct {
    camera_t *camera;
    sfSprite *sprite_bg;
    sfTexture *sprite_texure;
    item_t items[INVENTORY_SIZE];
    item_t items_equipped[INVENTORY_EQUIPPED_SIZE];
    item_t *selected;
} inventory_t;

#endif /* !ITEM_H_ */
