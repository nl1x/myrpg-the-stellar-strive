/*
** EPITECH PROJECT, 2023
** lib
** File description:
** lx_list_add.c
** Author: nathan.jeannot@epitech.eu
*/

#include <malloc.h>
#include "lx_lib.h"

static
lx_node_t *create_node(void *data)
{
    lx_node_t *node = malloc(sizeof(lx_node_t));

    if (node == NULL)
        return NULL;
    node->data = data;
    node->prev = NULL;
    node->next = NULL;
    return node;
}

void lx_list_append(lx_list_t *list, void *data)
{
    lx_node_t *new = create_node(data);

    if (list->size == 0) {
        list->head = new;
        list->tail = new;
    } else {
        new->prev = list->tail;
        list->tail->next = new;
        list->tail = new;
    }
    list->size++;
}
