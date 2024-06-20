/*
** EPITECH PROJECT, 2024
** my_rpg
** File description:
** create_menu_bg
*/

#include "my_rpg.h"
#include "assets.h"

void create_menu_bg_entities(menu_t *menu)
{
    entity_t *earth = create_entity(path_assets[MENU_PLANET],
        (sfVector2f){POS_X_PLANET_MENU, POS_Y_PLANET_MENU},
        (sfVector2f){SCALE_X_PLANET_MENU, SCALE_Y_PLANET_MENU}, NULL);
    animation_t *anim = create_animation(PLANET_ANIM_BOX,
        PLANET_ANIM_BOX_MOVEMENT, PLANET_ANIM_BOX_LIMIT);

    menu->anim_entity = calloc(NB_ANIMATED_ENTITIES_MENU,
        sizeof(animated_entity_t *));
    menu->anim_entity[PLANET_MENU] = create_animated_entity(earth, anim);
}

void create_menu_bg(menu_t *menu)
{
    menu->sprites = calloc(NB_SPRITES_MENU, sizeof(sfSprite *));
    menu->sprites[BACKGROUND_MENU] = create_sprite(
        (sfVector2f){POS_X_BG_MENU, POS_Y_BG_MENU},
        (sfVector2f){SCALE_X_BG_MENU, SCALE_Y_BG_MENU},
        sfTexture_createFromFile(path_assets[MENU_BG], NULL));
}
