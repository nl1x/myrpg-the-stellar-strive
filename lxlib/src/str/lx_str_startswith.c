/*
** EPITECH PROJECT, 2023
** lib
** File description:
** lx_str_startswith.c
** Author: nathan.jeannot@epitech.eu
*/

int lx_str_startswith(const char *str, const char *start)
{
    int starts = 1;
    int i = 0;

    while (starts && start[i] != '\0') {
        starts = str[i] == start[i];
        i++;
    }
    return starts;
}
