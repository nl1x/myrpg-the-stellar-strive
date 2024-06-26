/*
** EPITECH PROJECT, 2023
** my_printf
** File description:
** handle_width_char.c
*/

#include <stdlib.h>
#include "lx_lib.h"
#include "lx_printf.h"

static char *get_str(char c, int size)
{
    char *str = malloc(sizeof(char) * (size + 1));
    int i = 0;

    while (i < size) {
        str[i] = c;
        i++;
    }
    str[i] = '\0';
    return str;
}

char *handle_width_c(parser_t *parser, int arg_length)
{
    int nb_char = parser->width - arg_length;

    nb_char = nb_char < 0 ? 0 : nb_char;
    return get_str(' ', nb_char);
}
