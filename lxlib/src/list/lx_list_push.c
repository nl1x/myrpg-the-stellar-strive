/*
** EPITECH PROJECT, 2023
** lib
** File description:
** lx_list_push.c
** Author: nathan.jeannot@epitech.eu
*/

#include <malloc.h>
#include "lx_lib.h"

static
lx_node_t *create_node(void *data)
{
    lx_node_t *node = malloc(sizeof(lx_node_t));

    node->data = data;
    node->prev = NULL;
    node->next = NULL;
    return node;
}

/*
** Push the data at the head of the list.
*/
void lx_list_push(lx_list_t *list, void *data)
{
    lx_node_t *node = create_node(data);

    if (list->size == 0) {
        list->head = node;
        list->tail = node;
    } else {
        list->head->prev = node;
        node->next = list->head;
        list->head = node;
    }
    list->size++;
}
