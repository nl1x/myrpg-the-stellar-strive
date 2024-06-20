/*
** EPITECH PROJECT, 2023
** my_printf
** File description:
** handle_str.c
*/

#include <stdarg.h>
#include "lx_lib.h"
#include "lx_printf.h"

int handle_str(parser_t *parser, va_list *ap, int size)
{
    char *arg = va_arg(*ap, char *);
    int arg_length = lx_str_len(arg);
    char *width = handle_width(parser, arg_length);
    char *precision = handle_precision(parser, arg_length, arg);
    flag_arguments_t *flag_args = malloc(sizeof(flag_arguments_t));

    flag_args->precision = precision;
    flag_args->width = width;
    size += handle_minus_flag(parser, flag_args);
    free(flag_args);
    free(width);
    free(precision);
    return size;
}
