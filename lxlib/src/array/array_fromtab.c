/*
** EPITECH PROJECT, 2024
** minishell1
** File description:
** array_fromtab.c
** Author: nathan.jeannot@epitech.eu
*/

#include "lx_lib.h"

static
size_t get_tab_size(char **tab)
{
    size_t size = 0;

    while (*tab) {
        size++;
        tab++;
    }
    return size;
}

array_t *array_fromtab(char **tab)
{
    size_t size = get_tab_size(tab);
    array_t *array = array_new(size);

    array->size = size;
    for (size_t i = 0; i < size; i++)
        array->values[i] = lx_str_new(tab[i]);
    array->values[size] = NULL;
    return array;
}
