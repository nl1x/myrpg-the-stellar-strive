/*
** EPITECH PROJECT, 2023
** lib
** File description:
** lx_str_toupper.c
** Author: nathan.jeannot@epitech.eu
*/

char *lx_str_toupper(char *str)
{
    int i = 0;

    while (str[i] != '\0') {
        if (str[i] >= 'a' && str[i] <= 'z')
            str[i] -= 'a' - 'A';
        i++;
    }
    return str;
}
