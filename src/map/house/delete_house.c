/*
** EPITECH PROJECT, 2024
** myrpg
** File description:
** delete_house.c
** Author: nathan.jeannot@epitech.eu
*/

#include "map.h"

void delete_house(house_t *house)
{
    free(house->name);
    free(house);
}
