/*
** EPITECH PROJECT, 2023
** lib
** File description:
** lx_list_getbydata.c
** Author: nathan.jeannot@epitech.eu
*/

#include "lx_lib.h"

lx_node_t *lx_list_find(lx_list_t *list, void *data)
{
    lx_node_t *node = list->head;

    while (node != NULL && node->data != data)
        node = node->next;
    return node;
}
