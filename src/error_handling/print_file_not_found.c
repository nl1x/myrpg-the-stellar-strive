/*
** EPITECH PROJECT, 2024
** myrpg
** File description:
** print_file_not_found.c
** Author: nathan.jeannot@epitech.eu
*/

#include "lx_lib.h"

void print_file_not_found(const char *file)
{
    lx_put_err("File not found: ");
    lx_put_err(file);
    lx_put_err("\n");
}
