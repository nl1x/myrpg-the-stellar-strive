/*
** EPITECH PROJECT, 2024
** myrpg
** File description:
** draw_entity.c
** Author: nathan.jeannot@epitech.eu
*/

#include "entity.h"

void draw_entity(entity_t *entity, sfRenderWindow *window)
{
    sfRenderWindow_drawSprite(window, entity->sprite, NULL);
}
