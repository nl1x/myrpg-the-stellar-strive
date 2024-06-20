/*
** EPITECH PROJECT, 2024
** myrpg
** File description:
** get_camera_rect.c
** Author: nathan.jeannot@epitech.eu
*/

#include "camera.h"

sfFloatRect get_camera_bounds(camera_t *camera)
{
    return sfView_getViewport(camera->view);
}
