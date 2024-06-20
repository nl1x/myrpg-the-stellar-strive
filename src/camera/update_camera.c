/*
** EPITECH PROJECT, 2024
** myrpg
** File description:
** update_camera.c
** Author: nathan.jeannot@epitech.eu
*/

#include "camera.h"

void update_camera(camera_t *camera)
{
    if (camera->win)
        sfRenderWindow_setView(camera->win, camera->view);
}
