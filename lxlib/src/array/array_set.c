/*
** EPITECH PROJECT, 2024
** minishell1
** File description:
** array_set.c
** Author: nathan.jeannot@epitech.eu
*/

#include <malloc.h>
#include "lx_lib.h"

void array_set(array_t *arr, char *value, size_t i)
{
    if (i >= arr->size)
        return;
    else if (arr->values[i] != NULL)
        free(arr->values[i]);
    arr->values[i] = lx_str_new(value);
}
