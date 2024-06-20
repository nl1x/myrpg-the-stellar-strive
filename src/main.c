/*
** EPITECH PROJECT, 2023
** my_rpg
** File description:
** main.c
** Author: nathan.jeannot@epitech.eu
*/

#include "my_rpg.h"
#include <time.h>

int main(void)
{
    if (verificator_assets() == FAILURE)
        return FAILURE;
    srand(time(0));
    return display_window();
}
