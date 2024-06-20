/*
** EPITECH PROJECT, 2023
** lib
** File description:
** lx_read.c
** Author: nathan.jeannot@epitech.eu
*/

#include <unistd.h>
#include "lx_lib.h"

char *lx_readlink(char *file)
{
    char tmpbuf[2048] = { 0 };
    ssize_t read_size = readlink(file, tmpbuf, 2047);
    char *buf = lx_str_new(tmpbuf);

    while (read_size == 2047) {
        read_size = readlink(file, tmpbuf, 2047);
        lx_str_realloc(buf, read_size);
        lx_str_cat(buf, tmpbuf);
    }
    return buf;
}
