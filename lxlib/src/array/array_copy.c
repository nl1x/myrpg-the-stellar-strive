/*
** EPITECH PROJECT, 2024
** minishell1
** File description:
** array_copy.c
** Author: nathan.jeannot@epitech.eu
*/

#include "lx_lib.h"

array_t *array_copy(array_t *arr)
{
    array_t *copy = array_new(arr->size);

    copy->size = arr->size;
    for (size_t i = 0; i < arr->size; i++)
        copy->values[i] = arr->values[i];
    return copy;
}
