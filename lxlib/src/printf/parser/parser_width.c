/*
** EPITECH PROJECT, 2023
** my_printf
** File description:
** parser_width.c
*/

#include "lx_printf.h"
#include "lx_lib.h"

int is_width(char to_check)
{
    char width[] = "123456789";

    for (int i = 0; width[i] != '\0'; i++) {
        if (width[i] == to_check)
            return 1;
    }
    return 0;
}

int complete_parser_width(char *str, parser_t *parser)
{
    int i = 0;
    int width_local = 0;

    if (is_width(str[0]))
        width_local = lx_int_fromstr(str);
    if (width_local < 0)
        width_local *= -1;
    parser->width = width_local;
    for (; width_local > 0; i++) {
        width_local /= 10;
    }
    return i;
}
