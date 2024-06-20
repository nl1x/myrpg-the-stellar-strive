/*
** EPITECH PROJECT, 2023
** lib
** File description:
** lx_put_str.c
** Author: nathan.jeannot@epitech.eu
*/

#include <unistd.h>
#include "lx_lib.h"

int lx_put_str(char *str)
{
    return write(STDOUT_FILENO, str, sizeof(char) * lx_str_len(str));
}
