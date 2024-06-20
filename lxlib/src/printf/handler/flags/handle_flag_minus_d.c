/*
** EPITECH PROJECT, 2023
** my_printf
** File description:
** handle_flag_minus_d.c
*/

#include "lx_lib.h"
#include "lx_printf.h"

static void replace(char *str, char c)
{
    int i = 0;

    while (str[i] != '\0') {
        str[i] = c;
        i++;
    }
}

int handle_flag_minus_d(parser_t *parser, flag_arguments_t *flag_args)
{
    int size = 0;

    if (lx_str_contains(parser->flags, '-')) {
        replace(flag_args->width, ' ');
        size += lx_put_str(flag_args->precision);
        lx_put_int(flag_args->arg_int);
        size += lx_put_str(flag_args->width);
    } else {
        size += lx_put_str(flag_args->width);
        size += lx_put_str(flag_args->precision);
        lx_put_int(flag_args->arg_int);
    }
    return size;
}
