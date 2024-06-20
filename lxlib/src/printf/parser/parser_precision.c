/*
** EPITECH PROJECT, 2023
** my_printf
** File description:
** parser_precision.c
*/

#include <stddef.h>
#include "lx_lib.h"
#include "lx_printf.h"

int is_precision(char to_check)
{
    char precision[] = "0123456789";

    for (int i = 0; precision[i] != '\0'; i++) {
        if (precision[i] == to_check)
            return 1;
    }
    return 0;
}

int complete_parser_precision(char *str, parser_t *parser)
{
    int i = 0;
    int precision_local;

    if (str[0] == '.') {
        precision_local = lx_int_fromstr(str);
        parser->precision = precision_local;
        for (; precision_local > 0; i++)
            precision_local /= 10;
        return i + 1;
    }
    return i;
}
