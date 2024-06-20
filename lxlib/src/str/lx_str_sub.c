/*
** EPITECH PROJECT, 2023
** lib
** File description:
** lx_str_sub.c
** Author: nathan.jeannot@epitech.eu
*/

#include <stdlib.h>
#include "lx_lib.h"

char *lx_str_sub(char const *str, int start, int end)
{
    int length = lx_str_len(str);
    char *res;

    if (str == NULL || start > end || start < 0 || start > length || end < 0
        || end > length)
        return "";
    res = malloc((end - start + 2) * sizeof(char));
    for (int i = start; i <= end && str[i] != '\0'; i++)
        res[i - start] = str[i];
    res[end - start + 1] = '\0';
    return res;
}
