/*
** EPITECH PROJECT, 2024
** myrpg
** File description:
** set_animation.c
** Author: nathan.jeannot@epitech.eu
*/

#include "animation.h"
#include "entity.h"

void set_animation(animated_entity_t *entity, animation_t *animation)
{
    entity->anim = animation;
}
