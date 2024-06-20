/*
** EPITECH PROJECT, 2024
** my_rpg
** File description:
** get_random_number
*/

#include <stdlib.h>
#include <time.h>

int get_random_number(int a, int b)
{
    return rand() % (b - a + 1) + a;
}
