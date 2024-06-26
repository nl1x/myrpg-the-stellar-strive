/*
** EPITECH PROJECT, 2023
** my_printf
** File description:
** my_printf.c
*/

#include <stdio.h>
#include <stdarg.h>
#include "lx_lib.h"
#include "lx_printf.h"

static int is_valid_percent(char *line)
{
    return line[0] == '%' && is_conversion(line[lx_str_len(line) - 1]);
}

static int is_double_percent(char *line)
{
    return line[0] == '%' && line[1] == '%';
}

int handle_parser(parser_t *parser, va_list *ap, int size)
{
    int i = 0;

    while (FUNC_HANDLER_CONV[i].f != NULL) {
        if (FUNC_HANDLER_CONV[i].conversion == parser->conversion) {
            size = FUNC_HANDLER_CONV[i].f(parser, ap, size);
            break;
        }
        i++;
    }
    return size;
}

static int handle_percent(char *line, va_list *ap, int size)
{
    parser_t *parser = fill_parser(line);
    int handled_size = handle_parser(parser, ap, size);

    destroy_parser(parser);
    return handled_size;
}

static int handle_line(char *line, va_list *ap, int size)
{
    if (is_valid_percent(line))
        size = handle_percent(line, ap, size);
    else if (is_double_percent(line))
        size += lx_put_char('%');
    else
        size += lx_put_str(line);
    return size;
}

int lx_printf(char *format, ...)
{
    va_list *ap;
    my_tab_t *tab;
    int size = 0;

    if (format == NULL)
        return -84;
    ap = malloc(sizeof(va_list));
    tab = get_conv_tab(format);
    va_start(*ap, format);
    for (int i = 0; i < tab->len; i++)
        size = handle_line(tab->tab[i], ap, size);
    va_end(*ap);
    free(ap);
    my_tab_destroy(tab);
    return size;
}
