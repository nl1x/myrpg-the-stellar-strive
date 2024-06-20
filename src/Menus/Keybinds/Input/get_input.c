/*
** EPITECH PROJECT, 2024
** my_paint
** File description:
** get_input
*/

#include "my_rpg.h"
#include "keys.h"

char *get_input(int key)
{
    unsigned int i = 0;

    for (; list_key[i].key != -1; i++)
        if (list_key[i].key == key)
            return list_key[i].value;
    return NULL;
}
