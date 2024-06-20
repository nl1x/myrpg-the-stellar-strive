/*
** EPITECH PROJECT, 2024
** my_rpg
** File description:
** create_area
*/

#include "my_rpg.h"

area_t *create_area(sfVector2f pos, float size)
{
    area_t *area = calloc(1, sizeof(area_t));

    area->size = size;
    area->area = create_circle(pos, size);
    return area;
}
