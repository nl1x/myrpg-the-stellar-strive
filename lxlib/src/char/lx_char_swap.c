/*
** EPITECH PROJECT, 2023
** lib
** File description:
** lx_char_swap.c
** Author: nathan.jeannot@epitech.eu
*/

void lx_swapchar(char *a, char *b)
{
    char c = *a;

    *a = *b;
    *b = c;
}
