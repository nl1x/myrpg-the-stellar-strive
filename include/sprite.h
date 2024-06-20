/*
** EPITECH PROJECT, 2024
** my_rpg
** File description:
** sprite
*/

#ifndef SPRITE_H_
    #define SPRITE_H_

    #include <SFML/Graphics.h>
    #include "lx_lib.h"

/*     SPRITE      */
sfSprite *create_sprite(sfVector2f pos, sfVector2f scale, sfTexture *texture);
bool is_mouse_sprite(int x_mouse, int y_mouse, sfSprite *sprite);
bool sprite_collide_sprite(sfSprite *sprite1, sfSprite *sprite2);
sfSprite *sprite_collide_any(sfSprite *sprite, lx_list_t *sprites);

#endif /* !SPRITE_H_ */
