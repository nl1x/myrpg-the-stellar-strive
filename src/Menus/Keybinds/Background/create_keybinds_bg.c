/*
** EPITECH PROJECT, 2024
** my_rpg
** File description:
** create_keybinds_bg
*/

#include "my_rpg.h"
#include "assets.h"

void create_keybinds_bg_entities(keybinds_t *keybinds)
{
    entity_t *black_hole = create_entity(path_assets[KEYBINDS_BLACK_HOLE],
        (sfVector2f){POS_X_BLACK_HOLE_KEYBINDS, POS_Y_BLACK_HOLE_KEYBINDS},
        (sfVector2f){SCALE_X_BLACK_HOLE_KEYBINDS,
        SCALE_X_BLACK_HOLE_KEYBINDS}, NULL);
    animation_t *anim = create_animation(BLACK_HOLE_ANIM_BOX,
        BLACK_HOLE_ANIM_MOVEMENT, BLACK_HOLE_ANIM_LIMIT);

    keybinds->anim_entity = calloc(NB_ANIMATED_ENTITIES_KEYBINDS,
        sizeof(animated_entity_t *));
    keybinds->anim_entity[BLACK_HOLE_KEYBINDS] = create_animated_entity(
        black_hole, anim);
}

void create_keybinds_bg(keybinds_t *keybinds)
{
    keybinds->sprites = calloc(NB_SPRITES_KEYBINDS, sizeof(sfSprite *));
    keybinds->sprites[BACKGROUND_KEYBINDS] = create_sprite(
        (sfVector2f){POS_X_BG_KEYBINDS, POS_Y_BG_KEYBINDS},
        (sfVector2f){SCALE_X_BG_KEYBINDS, SCALE_Y_BG_KEYBINDS},
        sfTexture_createFromFile(path_assets[KEYBINDS_BG], NULL));
}
