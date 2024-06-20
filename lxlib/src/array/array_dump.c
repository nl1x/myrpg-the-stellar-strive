/*
** EPITECH PROJECT, 2024
** minishell1
** File description:
** array_dump.c
** Author: nathan.jeannot@epitech.eu
*/

#include "lx_lib.h"

void array_dump(array_t *arr, bool with_index)
{
    for (size_t i = 0; i < arr->size; i++) {
        if (with_index) {
            lx_put_int(i);
            lx_put_str(": ");
        }
        if (arr->values[i] != NULL)
            lx_put_str(arr->values[i]);
        else
            lx_put_str("(nil)");
        lx_put_str("\n");
    }
}
