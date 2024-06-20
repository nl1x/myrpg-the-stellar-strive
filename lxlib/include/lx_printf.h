/*
** EPITECH PROJECT, 2023
** lib
** File description:
** lx_printf.h
** Author: nathan.jeannot@epitech.eu
*/
#ifndef LIB_LX_PRINTF_H
    #define LIB_LX_PRINTF_H
    #define DEFAULT_PRECISION -1
    #include <stdarg.h>
    #include <stdlib.h>
    #include "lx_lib.h"

typedef struct my_tab {
    char **tab;
    int len;
} my_tab_t;

typedef struct width {
    int width;
} width_t;

typedef struct precision {
    char dot;
    int precision;
} precision_t;

typedef struct parser {
    char *flags;
    int width;
    int precision;
    char *length_modifier;
    char conversion;
} parser_t;

typedef struct handler_conversion {
    char conversion;
    int (*f)(parser_t *parser, va_list *ap, int size);
} handler_conversion_t;

typedef struct handler_width {
    char conversion;
    char *(*f)(parser_t *parser, int arg_length);
} handler_width_t;

typedef struct handler_precision {
    char conversion;
    char *(*f)(parser_t *parser, char *arg, int arg_length);
} handler_precision_t;

typedef struct flag_arguments {
    char c;
    char *arg_str;
    char *width;
    char *precision;
    double arg_double;
    long long arg_int;
} flag_arguments_t;

typedef struct handler_flags {
    char conversion;
    int (*f)(parser_t *parser, flag_arguments_t *flag_args);
} handler_flags_t;

typedef struct handler_length_mod {
    char length_mod_1;
    char length_mod_2;
    int (*f)(long long arg);
} handler_length_mod_t;

my_tab_t *my_tab_init(void);
void my_tab_destroy(my_tab_t *ptr);
void my_tab_add_line(my_tab_t *ptr, const char *line);
int is_conversion(char to_check);
int is_flag(char to_check);
void save_selection(my_tab_t *tab, char *format, int sel_start, int sel_end);
int is_end_of_selection(char *format, int sel_start, int *sel_end);
my_tab_t *get_conv_tab(char *format);
parser_t *fill_parser(char *convtab_line);
void destroy_parser(parser_t *parser);

int complete_conversion(char *str, parser_t *parser);
int complete_parser_flag(char *str, parser_t *parser);
int complete_parser_length_modifier(char *str, parser_t *parser);
int complete_parser_precision(char *str, parser_t *parser);
int complete_parser_width(char *str, parser_t *parser);

char *handle_width(parser_t *parser, int arg_length);
char *handle_width_c(parser_t *parser, int arg_length);
char *handle_width_f(parser_t *parser, int arg_length);
char *handle_width_d(parser_t *parser, int arg_length);
char *handle_width_s(parser_t *parser, int arg_length);

char *handle_precision(parser_t *parser, int arg_length, char *arg);
char *handle_precision_d(parser_t *parser, UNUSED char *arg, int arg_length);
char *handle_precision_s(parser_t *parser, char *arg, int arg_length);

int handle_minus_flag(parser_t *parser, flag_arguments_t *flag_args);
int handle_flag_minus_c(parser_t *parser, flag_arguments_t *flag_args);
int handle_flag_minus_d(parser_t *parser, flag_arguments_t *flag_args);
int handle_flag_minus_f(parser_t *parser, flag_arguments_t *flag_args);
int handle_flag_minus_o(parser_t *parser, flag_arguments_t *flag_args);
int handle_flag_minus_s(parser_t *parser, flag_arguments_t *flag_args);
int handle_flag_minus_x(parser_t *parser, flag_arguments_t *flag_args);

int handle_binary(parser_t *parser, va_list *ap, int size);
int handle_char(parser_t *parser, va_list *ap, int size);
int handle_double(parser_t *parser, va_list *ap, int size);
int handle_e(parser_t *parser, va_list *ap, int size);
int handle_hexa(parser_t *parser, va_list *ap, int size);
int handle_int(parser_t *parser, va_list *ap, int size);
int handle_n(UNUSED parser_t *parser, va_list *ap, int size);
int handle_octal(parser_t *parser, va_list *ap, int size);
int handle_double_percent(
    UNUSED parser_t *parser, UNUSED va_list *ap, UNUSED int size
);
int handle_pointer(parser_t *parser, va_list *ap, int size);
int handle_str(parser_t *parser, va_list *ap, int size);

static const handler_conversion_t FUNC_HANDLER_CONV[] = {
    {'b', &handle_binary},
    {'d', &handle_int},
    {'i', &handle_int},
    {'u', &handle_int},
    {'s', &handle_str},
    {'f', &handle_double},
    {'c', &handle_char},
    {'x', &handle_hexa},
    {'X', &handle_hexa},
    {'o', &handle_octal},
    {'O', &handle_octal},
    {'n', &handle_n},
    {'p', &handle_pointer},
    {'e', &handle_e},
    {'E', &handle_e},
    {'%', &handle_double_percent},
    {'\0', NULL}
};

static const handler_width_t FUNC_HANDLER_WIDTH[] = {
    {'d', &handle_width_d},
    {'i', &handle_width_d},
    {'u', &handle_width_d},
    {'s', &handle_width_s},
    {'f', &handle_width_f},
    {'c', &handle_width_c},
    {'b', &handle_width_d},
    {'x', &handle_width_d},
    {'X', &handle_width_d},
    {'o', &handle_width_d},
    {'p', &handle_width_d},
    {'\0', NULL}
};

static const handler_precision_t FUNC_HANDLER_PRECISION[] = {
    {'d', &handle_precision_d},
    {'i', &handle_precision_d},
    {'u', &handle_precision_d},
    {'s', &handle_precision_s},
    {'b', &handle_precision_d},
    {'x', &handle_precision_d},
    {'X', &handle_precision_d},
    {'o', &handle_precision_d},
    {'p', &handle_precision_d}
};

static const handler_flags_t FUNC_HANDLER_FLAGS[] = {
    {'s', &handle_flag_minus_s},
    {'d', &handle_flag_minus_d},
    {'u', &handle_flag_minus_d},
    {'i', &handle_flag_minus_d},
    {'c', &handle_flag_minus_c},
    {'b', &handle_flag_minus_x},
    {'x', &handle_flag_minus_x},
    {'X', &handle_flag_minus_x},
    {'o', &handle_flag_minus_o},
    {'f', &handle_flag_minus_f},
    {'F', &handle_flag_minus_f},
    {'e', &handle_flag_minus_d},
    {'\0', NULL}
};

#endif //LIB_LX_PRINTF_H
