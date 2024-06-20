/*
** EPITECH PROJECT, 2023
** lib
** File description:
** lx_list_push_condition.c
** Author: nathan.jeannot@epitech.eu
*/

#include <malloc.h>
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

void lx_list_pushcondition(
    lx_condition_t **conditions,
    bool (*f)(void *data, void *key, bool reversed),
    bool reversed
)
{
    lx_condition_t *last = get_last_condition(*conditions);
    lx_condition_t *new = malloc(sizeof(lx_condition_t));

    if (new == NULL)
        return;
    new->next = NULL;
    new->f = f;
    new->reversed = reversed;
    if (*conditions == NULL) {
        *conditions = new;
        new->prev = NULL;
    } else {
        last->next = new;
        new->prev = last;
    }
}
