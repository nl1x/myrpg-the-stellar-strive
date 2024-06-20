/*
** EPITECH PROJECT, 2023
** lib
** File description:
** lx_intlen.c
** Author: nathan.jeannot@epitech.eu
*/

unsigned int lx_int_len(int nb)
{
    unsigned int i = 0;

    while (nb > 0) {
        nb /= 10;
        i++;
    }
    return i;
}
