/*
** EPITECH PROJECT, 2023
** myhunter
** File description:
** remove.c
** Author: nathan.jeannot@epitech.eu
*/

#include "lx_csfml.h"

void lx_children_remove(lx_children_t *children, void *child)
{
    if (lx_list_remove(children->objects, child) != 0)
        children->amount--;
}
