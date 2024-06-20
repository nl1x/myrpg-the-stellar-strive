/*
** EPITECH PROJECT, 2023
** lib
** File description:
** lx_list_destroy.c
** Author: nathan.jeannot@epitech.eu
*/

#include <malloc.h>
#include "lx_lib.h"

static
void destroy_data(lx_node_t *list, void (*data_destroyer)(void *data))
{
    if (data_destroyer != NULL && list->data != NULL)
        data_destroyer(list->data);
}

/*
** Free every node of the list. If `data_destroyer` is NULL,
** the data will not be free.
*/
void lx_list_destroy(lx_list_t *list, void (*data_destroyer)(void *data))
{
    lx_node_t *node = list->head;
    lx_node_t *next = NULL;

    while (node != NULL) {
        next = node->next;
        destroy_data(node, data_destroyer);
        free(node);
        node = next;
    }
    free(list);
}
