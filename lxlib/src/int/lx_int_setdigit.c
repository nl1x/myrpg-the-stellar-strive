/*
** EPITECH PROJECT, 2023
** lib
** File description:
** lx_int_set.c
** Author: nathan.jeannot@epitech.eu
*/

#include "lx_lib.h"

/*
** Replace the digit at the index `i` to `digit`.
**
** Example:
**  lx_int_setdigit(987, 1, 4); // Replace 7 by 4
**  lx_int_setdigit(987, 2, 4); // Replace 8 by 4
**  lx_int_setdigit(987, 3, 4); // Replace 9 by 4
**
** WARNING !!
**  If `digit` is higher than 9 or less than 0,
**  then nothing happen.
*/
void lx_int_setdigit(long int *nb, int i, int digit)
{
    if (digit < 0 || digit > 9)
        return;
    *nb += ((digit - lx_int_getdigit(*nb, i)) * lx_pow(10, i - 1));
}
