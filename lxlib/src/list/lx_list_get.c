/*
** EPITECH PROJECT, 2023
** lib
** File description:
** lx_list_getbyid.c
** Author: nathan.jeannot@epitech.eu
*/

#include "lx_lib.h"

lx_node_t *lx_list_get(lx_list_t *list, unsigned int index)
{
    lx_node_t *result = list->head;
    unsigned int i = 0;

    while (result != NULL && i < index) {
        result = result->next;
        i++;
    }
    return result;
}
