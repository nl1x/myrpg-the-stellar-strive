/*
** EPITECH PROJECT, 2023
** my_printf
** File description:
** handle_n.c
*/

#include <stdarg.h>
#include "lx_lib.h"
#include "lx_printf.h"

int handle_n(UNUSED parser_t *parser, va_list *ap, int size)
{
    int *arg = va_arg(*ap, int *);

    *arg = size;
    return size;
}
