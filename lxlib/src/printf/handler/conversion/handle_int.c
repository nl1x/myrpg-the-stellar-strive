/*
** EPITECH PROJECT, 2023
** my_printf
** File description:
** handle_int.c
*/

#include <stdarg.h>
#include "lx_printf.h"
#include "lx_lib.h"

int handle_int(parser_t *parser, va_list *ap, int size)
{
    long long int arg = va_arg(*ap, long);
    int arg_length = lx_int_len(arg);
    char *width = handle_width(parser, arg_length);
    char *precision = handle_precision(parser, arg_length, NULL);
    flag_arguments_t *flag_args = malloc(sizeof(flag_arguments_t));

    flag_args->width = width;
    flag_args->precision = precision;
    flag_args->arg_int = arg;
    size += handle_minus_flag(parser, flag_args);
    free(flag_args);
    free(width);
    free(precision);
    return size;
}
