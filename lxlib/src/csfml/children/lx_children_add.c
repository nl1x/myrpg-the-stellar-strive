/*
** EPITECH PROJECT, 2023
** myhunter
** File description:
** add.c
** Author: nathan.jeannot@epitech.eu
*/

#include "lx_lib.h"
#include "lx_csfml.h"

void lx_children_add(lx_children_t *children, void *child)
{
    children->amount++;
    lx_list_push(children->objects, child);
}
