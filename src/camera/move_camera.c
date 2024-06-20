/*
** EPITECH PROJECT, 2024
** myrpg
** File description:
** move_camera.c
** Author: nathan.jeannot@epitech.eu
*/

#include "camera.h"

void move_camera(camera_t *camera, float offset_x, float offset_y)
{
    sfView_move(camera->view, (sfVector2f) { offset_x, offset_y });
    update_camera(camera);
}
