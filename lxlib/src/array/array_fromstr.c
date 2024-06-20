/*
** EPITECH PROJECT, 2024
** minishell1
** File description:
** array_fromstr.c
** Author: nathan.jeannot@epitech.eu
*/

#include <string.h>
#include <malloc.h>
#include "lx_lib.h"

static
int count_args(char *str, const char *delim)
{
    char *token = strtok_r(str, delim, &str);
    int nb_args = 0;

    for (; token != NULL;) {
        nb_args++;
        token = strtok_r(str, delim, &str);
    }
    return nb_args;
}

static
char **str_split(char *str, const char *delim, int *size)
{
    char *str_cpy = lx_str_new(str);
    int nb_args = count_args(str_cpy, delim);
    char *token = strtok_r(str, delim, &str);
    char **tab = malloc(sizeof(char *) * (nb_args + 1));

    for (int i = 0; token != NULL; i++) {
        tab[i] = lx_str_new(token);
        token = strtok_r(str, delim, &str);
    }
    *size = nb_args;
    tab[nb_args] = NULL;
    free(str_cpy);
    return tab;
}

array_t *array_fromstr(char *str, const char *delim)
{
    int size = 0;
    char **values = str_split(str, delim, &size);
    array_t *arr = array_new(size);

    arr->values = values;
    return arr;
}
