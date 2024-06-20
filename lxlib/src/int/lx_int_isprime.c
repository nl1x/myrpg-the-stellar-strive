/*
** EPITECH PROJECT, 2023
** lib
** File description:
** lx_int_isprime.c
** Author: nathan.jeannot@epitech.eu
*/

int lx_int_isprime(int nb)
{
    int result;
    int i = 2;

    if (nb <= 1)
        result = 0;
    else
        result = 1;
    while (i < nb / 2 + 1 && result) {
        result = (nb % i) > 0;
        i++;
    }
    return result;
}
