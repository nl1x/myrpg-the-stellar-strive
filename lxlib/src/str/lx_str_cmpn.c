/*
** EPITECH PROJECT, 2023
** lib
** File description:
** lx_str_cmpn.c
** Author: nathan.jeannot@epitech.eu
*/

static
int find_first_diffn(char const *s1, char const *s2, int n)
{
    int i = 0;

    while (i < n && s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
        i++;
    return i;
}

int lx_str_cmpn(char const *s1, char const *s2, int n)
{
    int i = find_first_diffn(s1, s2, n);

    if (i == n)
        return 0;
    else
        return s1[i] - s2[i];
}
