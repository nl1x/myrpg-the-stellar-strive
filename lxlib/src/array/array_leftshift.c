/*
** EPITECH PROJECT, 2024
** minishell1
** File description:
** array_shift.c
** Author: nathan.jeannot@epitech.eu
*/

#include "lx_lib.h"

void array_leftshift(array_t *arr, size_t index)
{
    char *tmp_value = NULL;
    char *next_value = arr->values[index];

    arr->values[index] = NULL;
    for (size_t new_idx = index + 1; new_idx < arr->size; new_idx++) {
        tmp_value = arr->values[new_idx];
        arr->values[new_idx] = next_value;
        next_value = tmp_value;
    }
}
