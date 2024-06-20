/*
** EPITECH PROJECT, 2024
** TEST
** File description:
** test
** Author: lysandre.boursette@epitech.eu
*/

#include <stdio.h>
#include <stddef.h>
#include "yml.h"
#include "shuvlib/string.h"

static
void test_ints(yml_t *yml)
{
    int itmp = 0;

    printf("\nINT TESTS\n\n");
    itmp = yml_get_int(yml, "birthday.month.index");
    printf("\"birthday.month.index\" (as int) = %d\n", itmp);
    printf("Replacing \"birthday.month.index\" value...\n");
    yml_set_int(yml, "birthday.month.index", 8);
    itmp = yml_get_int(yml, "birthday.month.index");
    printf("(new) \"birthday.month.index\" (as int) = %d\n", itmp);
    itmp = yml_get_int(yml, "age");
    printf("\"age\" (as int) = %d\n", itmp);
    itmp = yml_get_int(yml, "name");
    printf("\"name\" (as int) = %d\n", itmp);
    itmp = yml_get_int(yml, "birthday.month");
    printf("\"birthday.month\" (as int) = %d\n", itmp);
    itmp = yml_get_int(yml, "height");
    printf("\"height\" (as int) = %d\n", itmp);
    yml_set_int(yml, "meowmoemweomwoemwoemew", 220405);
}

static
void test_strs(yml_t *yml)
{
    char *ctmp = NULL;

    printf("\nSTRING TESTS\n\n");
    ctmp = yml_get_str(yml, "name");
    printf("\"name\" (as str) = \"%s\"\n", ctmp);
    ctmp = yml_get_str(yml, "address.city");
    printf("\"address.city\" (as str) = \"%s\"\n", ctmp);
    ctmp = yml_get_str(yml, "unknown.value");
    printf("\"unknown.value\" (as str) = \"%s\"\n", ctmp);
    printf("Replacing \"person.name\" value...\n");
    yml_set_str(yml, "person.name", "Léa Heras");
    ctmp = yml_get_str(yml, "person.name");
    printf("\"person.name\" (as str) = \"%s\"\n", ctmp);
}

static
void test_list(yml_t *yml)
{
    char **ltmp = NULL;

    printf("\nLIST TESTS\n\n");
    ltmp = yml_get_list(yml, "hobbies");
    printf("Printing \"hobbies\":\n");
    for (int k = 0; ltmp[k] != NULL; k++)
        printf("\t%d. \"%s\"\n", k, ltmp[k]);
    printf("\n");
}

static
void test_floats(yml_t *yml)
{
    float ftmp = .0f;

    printf("\nFLOAT TESTS\n\n");
    ftmp = yml_get_float(yml, "birthday.month.index");
    printf("\"birthday.month.index\" (as float) = %f\n", ftmp);
    ftmp = yml_get_float(yml, "age");
    printf("\"age\" (as float) = %f\n", ftmp);
    ftmp = yml_get_float(yml, "name");
    printf("\"name\" (as float) = %f\n", ftmp);
    ftmp = yml_get_float(yml, "birthday.month");
    printf("\"birthday.month\" (as float) = %f\n", ftmp);
    ftmp = yml_get_float(yml, "height");
    printf("\"height\" (as float) = %f\n", ftmp);
    printf("Replacing \"height\" value...\n");
    yml_set_float(yml, "height", 185.57);
    ftmp = yml_get_float(yml, "height");
    printf("\"height\" (as float) = \"%f\"\n", ftmp);
}

int main(int argc, char **argv)
{
    yml_t *yml = yml_create_from_file(argv[1]);
    int itmp = 0;
    char *ctmp = NULL;

    if (yml == NULL)
        return 84;
    yml_dump(yml);
    test_ints(yml);
    test_strs(yml);
    test_floats(yml);
    test_list(yml);
    yml_dump(yml);
    yml_save(yml, "tests/test2.yml");
    yml_destroy(yml);
    return 0;
}
