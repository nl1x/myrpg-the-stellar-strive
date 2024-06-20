/*
** EPITECH PROJECT, 2024
** yml_parser
** File description:
** yml_set_int
** Author: lysandre.boursette@epitech.eu
*/

#include <stdio.h>
#include <malloc.h>
#include "yml.h"
#include "shuvlib/string.h"
#include "shuvlib/error.h"
#include "shuvlib/memory.h"
#include "shuvlib.h"

/**
 * Prints out an error.
 *
 * @param   err     Error
 * @param   path    Node path
 * @return  Default value (SH_EXIT_FAILURE)
 */
static
int print_err(char *err, char *path)
{
    printf("Error: \"%s\": %s\n", path, err);
    return SH_EXIT_FAILURE;
}

/**
 * Updates targeted field with a given value.
 *
 * @param   dest    Targeted field
 * @param   value   Value
 * @return  Default value (SH_EXIT_SUCCESS)
 */
static
int set_value(char **dest, int value)
{
    int length = snprintf(NULL, 0, "%d", value);

    free(*dest);
    *dest = sh_calloc((length + 1) * sizeof(char), 0);
    if (*dest == NULL)
        return sh_put_ierr(MALLOC_FAIL);
    sprintf(*dest, "%d", value);
    return SH_EXIT_SUCCESS;
}

/**
 * Float setter from node path.
 *
 * @param   yml     YML instance
 * @param   path    Node path
 * @param   value   Value to set
 * @return  SH_EXIT_SUCCESS on success, otherwise SH_EXIT_FAILURE
 */
int yml_set_int(yml_t *yml, char *path, int value)
{
    yml_node_t *node = yml_find_node_from_path(yml, path);
    char **v = NULL;

    if (node == NULL)
        return print_err(YML_NODE_NOT_FOUND, path);
    v = node->is_list ? &node->name : &node->value;
    if (v == NULL)
        return print_err(YML_EMPTY_VALUE, path);
    if (!sh_is_str_numeric(*v, true, false))
        return print_err(YML_INVALID_TYPE, path);
    return set_value(v, value);
}
