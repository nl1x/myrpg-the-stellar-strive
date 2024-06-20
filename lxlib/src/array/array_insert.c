/*
** EPITECH PROJECT, 2024
** minishell1
** File description:
** array_insert.c
** Author: nathan.jeannot@epitech.eu
*/

#include <malloc.h>
#include "lx_lib.h"

void array_insert(array_t *array, char *str, size_t index)
{
    array_resize(array, 1);
    array_leftshift(array, index);
    array->values[index] = str;
}
