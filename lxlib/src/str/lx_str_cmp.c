/*
** EPITECH PROJECT, 2023
** lib
** File description:
** lx_str_cmp.c
** Author: nathan.jeannot@epitech.eu
*/

static int find_first_diff(char const *s1, char const *s2)
{
    int i = 0;

    while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
        i++;
    return i;
}

int lx_str_cmp(char const *s1, char const *s2)
{
    int i = find_first_diff(s1, s2);

    return s1[i] - s2[i];
}
