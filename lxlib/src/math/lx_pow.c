/*
** EPITECH PROJECT, 2023
** lib
** File description:
** lx_pow.c
** Author: nathan.jeannot@epitech.eu
*/

long long int lx_pow(long n, long p)
{
    long long int result = n;

    if (p == 0)
        result = 1;
    else if (p < 0)
        result = 0;
    else
        result *= lx_pow(n, p - 1);
    return result;
}
