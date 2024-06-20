/*
** EPITECH PROJECT, 2023
** lib
** File description:
** lx_str_tolower.c
** Author: nathan.jeannot@epitech.eu
*/

char *lx_str_tolower(char *str)
{
    int i = 0;

    while (str[i] != '\0') {
        if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] += 'a' - 'A';
        i++;
    }
    return str;
}
