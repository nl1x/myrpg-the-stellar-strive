/*
** EPITECH PROJECT, 2023
** lib
** File description:
** lx_list_merge.c
** Author: nathan.jeannot@epitech.eu
*/

#include "lx_lib.h"

void lx_list_merge(lx_list_t *list1, lx_list_t *list2)
{
    lx_node_t *tail1 = list1->tail;
    lx_node_t *head2 = list2->head;

    if (tail1 != NULL)
        tail1->next = head2;
    if (head2 != NULL)
        head2->prev = tail1;
    list1->tail = list2->tail;
    list1->size += list2->size;
}
