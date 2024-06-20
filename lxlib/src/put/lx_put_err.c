/*
** EPITECH PROJECT, 2023
** lib
** File description:
** lx_put_err.c
** Author: nathan.jeannot@epitech.eu
*/

#include <unistd.h>
#include "lx_lib.h"

int lx_put_err(const char *err)
{
    return (int) write(STDERR_FILENO, err, sizeof(char) * lx_str_len(err));
}
