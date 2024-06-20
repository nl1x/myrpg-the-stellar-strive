/*
** EPITECH PROJECT, 2024
** minishell1
** File description:
** destroy_array.c
** Author: nathan.jeannot@epitech.eu
*/

#include <malloc.h>
#include "lx_lib.h"

void array_delete(array_t *array)
{
    for (size_t i = 0; array->values[i] != NULL; i++)
        free(array->values[i]);
    free(array->values);
    free(array);
}
