/*
** EPITECH PROJECT, 2023
** lib
** File description:
** lx_sqrt.c
** Author: nathan.jeannot@epitech.eu
*/

long lx_sqrt(long nb)
{
    long result;
    long i = 0;

    while (i <= nb / 2 + 2 && i * i != nb)
        i++;
    if (i > nb / 2 + 2)
        result = 0;
    else
        result = i;
    return result;
}
