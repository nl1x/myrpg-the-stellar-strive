/*
** EPITECH PROJECT, 2024
** my_rpg
** File description:
** create_options_bg
*/

#include "my_rpg.h"
#include "assets.h"

void create_options_bg_entities(options_t *options)
{
    entity_t *planet = create_entity(path_assets[OPTIONS_PLANET],
        (sfVector2f){POS_X_PLANET_OPTIONS, POS_Y_PLANET_OPTIONS},
        (sfVector2f){SCALE_X_PLANET_OPTIONS, SCALE_Y_PLANET_OPTIONS}, NULL);
    animation_t *anim = create_animation(PLANET_ANIM_BOX,
        PLANET_ANIM_BOX_MOVEMENT, PLANET_ANIM_BOX_LIMIT);

    options->anim_entity = calloc(NB_ANIMATED_ENTITIES_OPTIONS,
        sizeof(animated_entity_t *));
    options->anim_entity[PLANET_OPTIONS] = create_animated_entity(planet,
        anim);
}

void create_options_bg(options_t *options)
{
    options->sprites = calloc(NB_SPRITES_OPTIONS, sizeof(sfSprite *));
    options->sprites[BACKGROUND_OPTIONS] = create_sprite(
        (sfVector2f){POS_X_BG_OPTIONS, POS_Y_BG_OPTIONS},
        (sfVector2f){SCALE_X_BG_MENU, SCALE_Y_BG_MENU},
        sfTexture_createFromFile(path_assets[OPTIONS_BG], NULL));
}
