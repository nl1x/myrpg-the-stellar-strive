/*
** EPITECH PROJECT, 2023
** handle_hexa
** File description:
** :wq
*/

#include <stdarg.h>
#include <stddef.h>
#include "lx_lib.h"
#include "lx_printf.h"

int handle_hexa(parser_t *parser, va_list *ap, int size)
{
    int arg_int = va_arg(*ap, int);
    char *arg = lx_int_getbase(arg_int, 16);
    int arg_length = lx_str_len(arg);
    char *width = handle_width(parser, arg_length);
    char *precision = handle_precision(parser, arg_length, arg);
    flag_arguments_t *flag_args = malloc(sizeof(flag_arguments_t));

    flag_args->width = width;
    flag_args->precision = precision;
    flag_args->arg_str = arg;
    if (parser->conversion == 'X')
        arg = lx_str_toupper(arg);
    size += handle_flag_minus_x(parser, flag_args);
    free(flag_args);
    free(arg);
    free(width);
    free(precision);
    return size;
}
