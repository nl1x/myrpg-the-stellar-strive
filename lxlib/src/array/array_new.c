/*
** EPITECH PROJECT, 2024
** minishell1
** File description:
** new_array.c
** Author: nathan.jeannot@epitech.eu
*/

#include <malloc.h>
#include "lx_lib.h"

array_t *array_new(size_t size)
{
    array_t *arr = malloc(sizeof(array_t));

    arr->size = size;
    arr->values = malloc(sizeof(char *) * (size + 1));
    for (size_t i = 0; i < size; i++)
        arr->values[i] = NULL;
    arr->values[size] = NULL;
    return arr;
}
