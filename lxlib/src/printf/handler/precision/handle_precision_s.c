/*
** EPITECH PROJECT, 2023
** my_printf
** File description:
** handle_precision_s.c
*/

#include "lx_lib.h"
#include "lx_printf.h"

char *handle_precision_s(parser_t *parser, char *arg, int arg_length)
{
    int nb_char = parser->precision < 0 ? arg_length : parser->precision;
    char *str = lx_str_calloc(sizeof(char), (nb_char + 1));

    lx_str_copyn(str, arg, nb_char);
    return str;
}
