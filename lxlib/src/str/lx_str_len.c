/*
** EPITECH PROJECT, 2023
** lib
** File description:
** lx_str_len.c
** Author: nathan.jeannot@epitech.eu
*/

int lx_str_len(char const *str)
{
    int len = 0;

    while (str[len] != '\0')
        len++;
    return len;
}
