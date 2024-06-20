/*
** EPITECH PROJECT, 2023
** lib
** File description:
** lx_put_char.c
** Author: nathan.jeannot@epitech.eu
*/

#include <unistd.h>

int lx_put_char(char c)
{
    return (int) write(1, &c, sizeof(char));
}
