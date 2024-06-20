/*
** EPITECH PROJECT, 2023
** lib
** File description:
** lx_list_reverse.c
** Author: nathan.jeannot@epitech.eu
*/

#include "lx_lib.h"

void lx_list_reverse(lx_list_t *list)
{
    lx_node_t *head = list->head;
    lx_node_t *tail = list->tail;
    lx_node_t *node = head;
    lx_node_t *prev = NULL;

    while (node != NULL) {
        prev = node->prev;
        node->prev = node->next;
        node->next = prev;
        node = node->prev;
    }
    list->head = tail;
    list->tail = head;
}
