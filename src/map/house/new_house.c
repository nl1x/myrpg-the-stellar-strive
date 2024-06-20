/*
** EPITECH PROJECT, 2024
** myrpg
** File description:
** new_house.c
** Author: nathan.jeannot@epitech.eu
*/

#include <malloc.h>
#include "map.h"

house_t *new_house(char *name, sfFloatRect rect)
{
    house_t *house = calloc(1, sizeof(house_t));

    house->rect = rect;
    house->name = name;
    return house;
}
