/*
** EPITECH PROJECT, 2023
** handle_e
** File description:
** check your malloc!
*/

#include <stdarg.h>
#include <stdio.h>
#include "lx_lib.h"
#include "lx_printf.h"

static int print_e_plus(parser_t *parser, int size, int counter, double tmp)
{
    size += lx_put_double(tmp, parser->precision);
    size += lx_put_char(parser->conversion);
    size += lx_put_str("+");
    if (counter == 0)
        size += lx_put_str("00");
    if (counter < 10 && counter != 0) {
        size += lx_put_int(0);
        size += lx_put_int(counter);
    } else {
        size += lx_put_int(counter);
    }
    return size;
}

static int print_e_neg(parser_t *parser, int size, int counter, double tmp)
{
    size += lx_put_double(tmp, parser->precision);
    size += lx_put_char(parser->conversion);
    size += lx_put_str("-");
    if (counter == 0)
        size += lx_put_str("00");
    if (counter < 10 && counter != 0) {
        size += lx_put_int(0);
        size += lx_put_int(counter);
    } else {
    size += lx_put_int(counter);
    }
    return size;
}

static int print_e_middle(parser_t *parser, double tmp, int size)
{
    size += lx_put_double(tmp, parser->precision);
    size += lx_put_char(parser->conversion);
    size += lx_put_str("+");
    size += lx_put_str("00");
    return size;
}

static int case_zero(parser_t *parser)
{
    int size = 0;

    size += lx_put_str("0.000000");
    size += lx_put_char(parser->conversion);
    size += lx_put_str("+00");
    return size;
}

static int refactor_arg_e(double *tmp)
{
    int counter = 0;

    while (*tmp < 10.f && !(*tmp > 1.f)) {
        *tmp *= 10;
        counter++;
    }
    return counter;
}

int handle_e(parser_t *parser, va_list *ap, int size)
{
    double arg = va_arg(*ap, double);
    double tmp = arg;
    int counter = 0;

    if (arg == 0)
        return size + case_zero(parser);
    if (arg > 10) {
        while (tmp > 1.f && tmp >= 10.f) {
            tmp /= 10;
            counter++;
        }
        return size + print_e_plus(parser, size, counter, tmp);
    } else if (arg < 1) {
        counter = refactor_arg_e(&tmp);
        return size + print_e_neg(parser, size, counter, tmp);
    } else
        return size + print_e_middle(parser, tmp, size);
}
