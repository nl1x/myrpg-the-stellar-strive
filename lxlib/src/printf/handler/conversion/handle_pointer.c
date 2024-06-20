/*
** EPITECH PROJECT, 2023
** my_printf
** File description:
** handle_pointer.c
*/

#include <stdarg.h>
#include "lx_lib.h"
#include "lx_printf.h"

int handle_pointer(parser_t *parser, va_list *ap, int size)
{
    unsigned long long arg_int = va_arg(*ap, unsigned long long);
    char *arg = lx_int_getbase(arg_int, 16);
    int arg_length = lx_str_len(arg);
    char *width = handle_width(parser, arg_length + 2);
    char *precision = handle_precision(parser, arg_length, arg);

    if ((void *) arg_int == NULL)
        return size + lx_put_str("(nil)");
    size += lx_put_str(width) + lx_put_str("0x");
    size += lx_put_str(precision) + lx_put_str(arg);
    free(arg);
    free(width);
    free(precision);
    return size;
}
