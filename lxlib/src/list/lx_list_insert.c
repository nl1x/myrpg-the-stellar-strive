/*
** EPITECH PROJECT, 2023
** lib
** File description:
** lx_list_insert.c
** Author: nathan.jeannot@epitech.eu
*/

#include "lx_lib.h"

void lx_list_insert(lx_list_t *list, lx_node_t *node, lx_node_t *to_insert)
{
    lx_node_t *next = NULL;

    if (node == NULL)
        return;
    next = node->next;
    node->next = to_insert;
    to_insert->prev = node;
    to_insert->next = next;
    if (next != NULL)
        next->prev = to_insert;
    list->size++;
}
