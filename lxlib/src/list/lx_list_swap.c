/*
** EPITECH PROJECT, 2023
** lib
** File description:
** lx_list_swapdata.c
** Author: nathan.jeannot@epitech.eu
*/

#include "lx_lib.h"

void lx_list_swap(lx_node_t *node1, lx_node_t *node2)
{
    void *data1 = node1->data;

    node1->data = node2->data;
    node2->data = data1;
}
