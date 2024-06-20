/*
** EPITECH PROJECT, 2023
** lib
** File description:
** lx_int_getdigit.c
** Author: nathan.jeannot@epitech.eu
*/

#include "lx_lib.h"

/*
** Return the digit at the index i.
**
** Example:
**  lx_int_getdigit(987, 1); // Returns 7
**  lx_int_getdigit(987, 2); // Returns 8
**  lx_int_getdigit(987, 3); // Returns 9
*/
long lx_int_getdigit(long nb, long i)
{
    return nb % lx_pow(10, i) / lx_pow(10, i - 1);
}
