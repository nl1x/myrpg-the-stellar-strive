/*
** EPITECH PROJECT, 2024
** minishell1
** File description:
** array_shift.c
** Author: nathan.jeannot@epitech.eu
*/

#include <malloc.h>
#include "lx_lib.h"

void array_remove(array_t *arr, size_t index)
{
    char **values = malloc(sizeof(char *) * (arr->size));
    size_t arr_i = 0;
    size_t val_i = 0;

    if (index >= arr->size)
        return;
    while (val_i < (arr->size - 1)) {
        if (arr_i == index) {
            free(arr->values[arr_i]);
            arr_i++;
            continue;
        } else
            values[val_i] = arr->values[arr_i];
        arr_i++;
        val_i++;
    }
    arr->size--;
    arr->values = values;
    arr->values[arr->size] = NULL;
}
