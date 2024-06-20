/*
** EPITECH PROJECT, 2024
** myrpg
** File description:
** draw_animated_entity.c
** Author: nathan.jeannot@epitech.eu
*/

#include "entity.h"

void draw_animated_entity(
    animated_entity_t *anim_entity, sfRenderWindow *win)
{
    draw_entity(anim_entity->entity, win);
}
