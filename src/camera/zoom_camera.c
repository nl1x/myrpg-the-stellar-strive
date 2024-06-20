/*
** EPITECH PROJECT, 2024
** myrpg
** File description:
** zoom_camera.c
** Author: nathan.jeannot@epitech.eu
*/

#include "camera.h"

void zoom_camera(camera_t *camera, float factor)
{
    sfView_zoom(camera->view, factor);
    update_camera(camera);
}
