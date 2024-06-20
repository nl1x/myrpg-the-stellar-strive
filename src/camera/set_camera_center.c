/*
** EPITECH PROJECT, 2024
** myrpg
** File description:
** set_camera_center.c
** Author: nathan.jeannot@epitech.eu
*/

#include "camera.h"

void set_camera_center(camera_t *camera, sfVector2f center)
{
    sfView_setCenter(camera->view, center);
}
