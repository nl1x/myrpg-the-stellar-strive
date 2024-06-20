/*
** EPITECH PROJECT, 2024
** myrpg
** File description:
** create_camera.c
** Author: nathan.jeannot@epitech.eu
*/

#include <malloc.h>
#include "camera.h"

camera_t *create_camera(sfVector2f center, sfVector2f size,
    sfRenderWindow *win)
{
    camera_t *camera = calloc(1, sizeof(camera_t));

    camera->win = win;
    camera->view = sfView_create();
    sfView_setSize(camera->view, size);
    sfView_setCenter(camera->view, center);
    update_camera(camera);
    return camera;
}
