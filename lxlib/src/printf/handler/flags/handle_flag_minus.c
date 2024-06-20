/*
** EPITECH PROJECT, 2023
** my_printf
** File description:
** handle_minus_flag.c
*/

#include "lx_printf.h"

int handle_minus_flag(parser_t *parser, flag_arguments_t *flag_args)
{
    int size = 0;
    int i = 0;

    while (FUNC_HANDLER_FLAGS[i].conversion != '\0') {
        if (FUNC_HANDLER_FLAGS[i].conversion == parser->conversion) {
            size += FUNC_HANDLER_FLAGS[i].f(parser, flag_args);
            break;
        }
        i++;
    }
    return size;
}
