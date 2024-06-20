/*
** EPITECH PROJECT, 2023
** myhunter
** File description:
** edit.c
** Author: nathan.jeannot@epitech.eu
*/

#include "lx_csfml.h"

void lx_text_set_value(lx_text_t *text, char *value)
{
    sfText_setString(text->object, value);
}
