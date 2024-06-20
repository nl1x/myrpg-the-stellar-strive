/*
** EPITECH PROJECT, 2023
** lib
** File description:
** lx_str_copy.c
** Author: nathan.jeannot@epitech.eu
*/

char *lx_str_copy(char *dest, char const *src)
{
    int i = 0;

    while (src[i] != '\0') {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return dest;
}
