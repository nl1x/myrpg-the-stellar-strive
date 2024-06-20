/*
** EPITECH PROJECT, 2024
** minishell1
** File description:
** array_resize.c
** Author: nathan.jeannot@epitech.eu
*/

#include <malloc.h>
#include "lx_lib.h"

void array_resize(array_t *arr, size_t additional_size)
{
    char **values_copy = arr->values;
    size_t new_size = additional_size + arr->size;

    arr->values = malloc(sizeof(char *) * (new_size + 1));
    for (size_t i = 0; i < new_size; i++) {
        if (i >= arr->size)
            arr->values[i] = NULL;
        else
            arr->values[i] = values_copy[i];
    }
    arr->size = new_size;
    free(values_copy);
}
