/*
** EPITECH PROJECT, 2023
** lib
** File description:
** lx_str_copyn.c
** Author: nathan.jeannot@epitech.eu
*/

char *lx_str_copyn(char *dest, char const *src, int n)
{
    int i = 0;

    while (i < n && src[i] != '\0') {
        dest[i] = src[i];
        i++;
    }
    if (i < n)
        dest[i] = '\0';
    return dest;
}
