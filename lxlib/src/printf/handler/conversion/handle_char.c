/*
** EPITECH PROJECT, 2023
** my_printf
** File description:
** handle_char.c
*/

#include <stdarg.h>
#include "lx_printf.h"

int handle_char(parser_t *parser, va_list *ap, int size)
{
    char arg = (char) va_arg(*ap, int);
    int arg_length = 1;
    char *width = handle_width(parser, arg_length);
    flag_arguments_t *flag_args = malloc(sizeof(flag_arguments_t));

    flag_args->c = arg;
    flag_args->width = width;
    size += handle_minus_flag(parser, flag_args);
    free(flag_args);
    free(width);
    return size;
}
