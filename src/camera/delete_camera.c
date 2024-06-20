/*
** EPITECH PROJECT, 2024
** myrpg
** File description:
** delete_camera.c
** Author: nathan.jeannot@epitech.eu
*/

#include <malloc.h>
#include "camera.h"

void delete_camera(camera_t *camera)
{
    if (camera == NULL)
        return;
    sfView_destroy(camera->view);
    free(camera);
}
