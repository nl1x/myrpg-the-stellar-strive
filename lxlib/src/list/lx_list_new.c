/*
** EPITECH PROJECT, 2023
** lib
** File description:
** lx_list_new.c
** Author: nathan.jeannot@epitech.eu
*/

#include <malloc.h>
#include "lx_lib.h"

lx_list_t *lx_list_new(void)
{
    lx_list_t *list = malloc(sizeof(lx_list_t));

    list->head = NULL;
    list->tail = NULL;
    list->size = 0;
    return list;
}
