/*
** EPITECH PROJECT, 2024
** my_rpg
** File description:
** create_load_bg
*/

#include "my_rpg.h"
#include "assets.h"

void create_load_bg_entities(load_t *load)
{
    entity_t *earth = create_entity(path_assets[LOAD_PLANET],
        (sfVector2f){POS_X_PLANET_LOAD, POS_Y_PLANET_LOAD},
        (sfVector2f){SCALE_X_PLANET_LOAD, SCALE_Y_PLANET_LOAD}, NULL);
    animation_t *anim = create_animation(PLANET_ANIM_BOX,
        PLANET_ANIM_BOX_MOVEMENT, PLANET_ANIM_BOX_LIMIT);

    load->anim_entity = calloc(NB_ANIMATED_ENTITIES_LOAD,
        sizeof(animated_entity_t *));
    load->anim_entity[PLANET_LOAD] = create_animated_entity(earth, anim);
}

void create_load_bg(load_t *load)
{
    load->sprites = calloc(NB_SPRITES_LOAD, sizeof(sfSprite *));
    load->sprites[BACKGROUND_LOAD] = create_sprite(
        (sfVector2f){POS_X_BG_LOAD, POS_Y_BG_LOAD},
        (sfVector2f){SCALE_X_BG_LOAD, SCALE_Y_BG_LOAD},
        sfTexture_createFromFile(path_assets[LOAD_BG], NULL));
}
