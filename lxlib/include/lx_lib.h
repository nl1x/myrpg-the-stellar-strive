/*
** EPITECH PROJECT, 2023
** lib
** File description:
** lxlib.h
** Author: nathan.jeannot@epitech.eu
*/

#ifndef LIB_LX_LIB_H
    #define LIB_LX_LIB_H
    #define UNUSED __attribute__ ((unused))

    #include <stdbool.h>
    #include <stddef.h>

/*          LX_ARRAY           */
char **lx_array_fromstr(char const *str);

/*          ARRAYS          */
typedef struct array_s {
    char **values;
    size_t size;
} array_t;

void array_add(array_t *array, char *str);
array_t *array_copy(array_t *arr);
void array_dump(array_t *arr, bool with_index);
void array_delete(array_t *array);
array_t *array_fromstr(char *str, const char *delim);
array_t *array_fromtab(char **tab);
void array_insert(array_t *array, char *str, size_t index);
void array_leftshift(array_t *arr, size_t index);
array_t *array_new(size_t size);
void array_remove(array_t *arr, size_t index);
void array_resize(array_t *arr, size_t additional_size);
void array_set(array_t *arr, char *value, size_t i);

// char
bool lx_char_isdigit(char c);
bool lx_char_isletter(char c);
bool lx_char_islower(char c);
bool lx_char_isprintable(char c);
bool lx_char_isupper(char c);
void lx_char_swap(char *a, char *b);
char lx_char_tolower(char upper);
char lx_char_toupper(char lower);

// int
int lx_int_fromstr(const char *str);
char *lx_int_getbase(unsigned long long nb, int base);
long lx_int_getdigit(long nb, long i);
int lx_int_isprime(int nb);
unsigned int lx_int_len(int nb);
void lx_int_setdigit(long int *nb, int i, int digit);
int get_random_number(int a, int b);


// list
typedef struct lx_node {
    void *data;
    struct lx_node *next;
    struct lx_node *prev;
} lx_node_t;

typedef struct lx_list {
    unsigned int size;
    lx_node_t *head;
    lx_node_t *tail;
} lx_list_t;

typedef struct lx_condition {
    bool (*f)(void *data, void *key, bool reversed);
    bool reversed;
    struct lx_condition *next;
    struct lx_condition *prev;
} lx_condition_t;

void lx_list_append(lx_list_t *list, void *data);
void lx_list_destroy(lx_list_t *list, void (*data_destroyer)(void *data));
lx_node_t *lx_list_find(lx_list_t *list, void *data);
lx_node_t *lx_list_get(lx_list_t *list, unsigned int index);
void lx_list_insert(lx_list_t *list, lx_node_t *node, lx_node_t *to_insert);
void lx_list_merge(lx_list_t *list1, lx_list_t *list2);
lx_list_t *lx_list_new(void);
void lx_list_push(lx_list_t *list, void *data);
void lx_list_pushcondition(
    lx_condition_t **conditions,
    bool (*f)(void *data, void *key, bool reversed),
    bool reversed
);
void lx_list_quicksort(lx_list_t *list, lx_condition_t *sorts);
lx_node_t *lx_list_remove(lx_list_t *list, void *data);
void lx_list_reverse(lx_list_t *list);
void lx_list_swap(lx_node_t *node1, lx_node_t *node2);

// math
long long int lx_pow(long n, long p);
long lx_sqrt(long nb);

// memory
char *lx_readlink(char *file);

// printf
int lx_printf(char *format, ...);

// put
int lx_put_char(char c);
int lx_put_double(double nb, int precision);
int lx_put_err(const char *err);
int lx_put_int(int nb);
int lx_put_str(char *str);

// str
char *lx_int_to_str(long long nb);
char *lx_str_calloc(size_t type_size, size_t length);
char *lx_str_capitalize(char *str);
char *lx_str_cat(char *dest, const char *src);
char *lx_str_catn(char *dest, char const *src, int nb);
int lx_str_cmp(char const *s1, char const *s2);
int lx_str_cmpn(char const *s1, char const *s2, int n);
bool lx_str_contains(char const *str, char c);
char *lx_str_copy(char *dest, char const *src);
char *lx_str_copyn(char *dest, char const *src, int n);
unsigned int lx_str_count(char *str, char *substr);
char *lx_str_find(char *str, char const *to_find);
int lx_str_isalpha(char const *str);
int lx_str_islower(char const *str);
int lx_str_isnum(char const *str);
int lx_str_isprintable(char const *str);
int lx_str_isupper(char const *str);
int lx_str_len(char const *str);
char *lx_str_new(char const *str);
char *lx_str_realloc(char *buf, size_t additional_size);
char *lx_str_reverse(char *str);
int lx_str_startswith(const char *str, const char *start);
char *lx_str_sub(char const *str, int start, int end);
char *lx_str_tolower(char *str);
char *lx_str_toupper(char *str);

#endif //LIB_LX_LIB_H
