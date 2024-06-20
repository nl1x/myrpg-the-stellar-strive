/*
** EPITECH PROJECT, 2023
** lib
** File description:
** lx_list_quicksort.c
** Author: nathan.jeannot@epitech.eu
*/

#include "lx_lib.h"


static
lx_condition_t *get_last_condition(lx_condition_t *head)
{
    lx_condition_t *last = head;

    if (last == NULL)
        return NULL;
    while (last->next != NULL)
        last = last->next;
    return last;
}

static
lx_node_t *partition(lx_node_t *start, lx_node_t *end, lx_condition_t *sort)
{
    lx_node_t *i = NULL;
    lx_node_t *j = start;
    lx_node_t *next = start;

    while (j != end) {
        if (sort->f(j->data, end->data, sort->reversed)) {
            i = next;
            lx_list_swap(i, j);
            next = next->next;
        }
        j = j->next;
    }
    lx_list_swap(next, j);
    return next;
}

static
void quick_sort(lx_node_t *start, lx_node_t *end, lx_condition_t *sort)
{
    lx_node_t *mid = NULL;

    if (start == end || sort == NULL)
        return;
    mid = partition(start, end, sort);
    if (mid != NULL && mid->prev != NULL && mid->prev != start)
        quick_sort(start, mid->prev, sort);
    if (mid != NULL && mid != end)
        quick_sort(mid, end, sort);
}

void lx_list_quicksort(lx_list_t *list, lx_condition_t *sorts)
{
    lx_condition_t *last_sorts = get_last_condition(sorts);

    for (; last_sorts != NULL; last_sorts = last_sorts->prev)
        quick_sort(list->head, list->tail, last_sorts);
}
