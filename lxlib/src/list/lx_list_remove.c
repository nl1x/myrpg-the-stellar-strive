/*
** EPITECH PROJECT, 2023
** lib
** File description:
** lx_list_remove.c
** Author: nathan.jeannot@epitech.eu
*/

#include "lx_lib.h"

static
void reset_previous(lx_node_t *node)
{
    if (node != NULL)
        node->prev = NULL;
}

/*
** Remove and return the node which contain `data`.
** If no node contain the data, NULL is returned.
*/
lx_node_t *lx_list_remove(lx_list_t *list, void *data)
{
    lx_node_t *to_remove = lx_list_find(list, data);

    if (to_remove == NULL)
        return NULL;
    else if (to_remove == list->head) {
        list->head = list->head->next;
        reset_previous(list->head);
    } else {
        to_remove->prev->next = to_remove->next;
        to_remove->next->prev = to_remove->prev;
    }
    list->size--;
    return to_remove;
}
