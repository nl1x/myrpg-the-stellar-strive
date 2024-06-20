/*
** EPITECH PROJECT, 2024
** myrpg
** File description:
** read_file.c
** Author: nathan.jeannot@epitech.eu
*/

#include <sys/stat.h>
#include <stddef.h>
#include <malloc.h>
#include "my_rpg.h"

static
int fill_file_content(const char *path, char *content, size_t file_size)
{
    FILE *file = fopen(path, "r");

    if (file == NULL) {
        perror("fopen");
        return FAILURE;
    }
    if (fread(content, sizeof(char), file_size, file) == 0) {
        fclose(file);
        perror("fread");
        return FAILURE;
    }
    fclose(file);
    return SUCCESS;
}

char *read_file(const char *path)
{
    struct stat fs = { 0 };
    char *content = NULL;

    if (stat(path, &fs) == -1) {
        perror("stat");
        return NULL;
    }
    content = calloc(fs.st_size + 1, sizeof(char));
    if (fill_file_content(path, content, fs.st_size) == FAILURE)
        free(content);
    return content;
}
