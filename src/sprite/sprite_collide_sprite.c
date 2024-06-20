/*
** EPITECH PROJECT, 2024
** myrpg
** File description:
** sprite_collide_sprite.c
** Author: nathan.jeannot@epitech.eu
*/

#include <stdbool.h>
#include <stddef.h>
#include <SFML/Graphics/Sprite.h>

/*
 * Return {@code true} if the sprite1 collide with the sprite2,
 * {@code false} otherwise.
 */
bool sprite_collide_sprite(sfSprite *sprite1, sfSprite *sprite2)
{
    sfFloatRect hitbox1 = sfSprite_getGlobalBounds(sprite1);
    sfFloatRect hitbox2 = sfSprite_getGlobalBounds(sprite2);

    return sfFloatRect_intersects(&hitbox1, &hitbox2, NULL);
}
