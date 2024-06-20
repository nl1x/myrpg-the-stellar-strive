/*
** EPITECH PROJECT, 2023
** my_printf
** File description:
** handle_percent.c
*/

#include "lx_lib.h"
#include "lx_printf.h"

int handle_double_percent(
    UNUSED parser_t *parser, UNUSED va_list *ap, UNUSED int size
)
{
    return lx_put_char('%');
}
