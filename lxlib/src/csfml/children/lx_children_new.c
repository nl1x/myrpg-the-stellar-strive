/*
** EPITECH PROJECT, 2023
** myhunter
** File description:
** new.c
** Author: nathan.jeannot@epitech.eu
*/

#include <malloc.h>
#include "lx_csfml.h"

lx_children_t *lx_children_new(void)
{
    lx_children_t *children = malloc(sizeof(lx_children_t));

    children->amount = 0;
    children->objects = lx_list_new();
    return children;
}
