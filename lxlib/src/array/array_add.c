/*
** EPITECH PROJECT, 2024
** minishell1
** File description:
** array_add.c
** Author: nathan.jeannot@epitech.eu
*/

#include "lx_lib.h"

void array_add(array_t *array, char *str)
{
    array_resize(array, 1);
    array->values[array->size - 1] = lx_str_new(str);
}
