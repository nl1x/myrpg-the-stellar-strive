/*
** EPITECH PROJECT, 2024
** my_rpg
** File description:
** verificator_assets
*/

#include "my_rpg.h"
#include "assets.h"
#include "fcntl.h"
#include "unistd.h"
#include "string.h"

size_t verificator_assets(void)
{
    int fd = 0;

    for (int i = 0; path_assets[i] != NULL; i++) {
        fd = open(path_assets[i], O_RDONLY);
        if (fd < 0) {
            write(2, "File ", strlen("File "));
            write(2, path_assets[i], strlen(path_assets[i]));
            write(2, " not found.\n", strlen(" not found.\n"));
            return FAILURE;
        }
        close(fd);
    }
    return SUCCESS;
}
