/*
** EPITECH PROJECT, 2024
** myrpg
** File description:
** camera.h
** Author: nathan.jeannot@epitech.eu
*/

#ifndef MYRPG_CAMERA_H
    #define MYRPG_CAMERA_H

    #include <SFML/Graphics.h>

typedef struct camera_s {
    sfView *view;
    sfRenderWindow *win;
} camera_t;

camera_t *create_camera(sfVector2f center, sfVector2f size,
    sfRenderWindow *win);
void delete_camera(camera_t *camera);
void move_camera(camera_t *camera, float offset_x, float offset_y);
void zoom_camera(camera_t *camera, float factor);
void update_camera(camera_t *camera);
void set_camera_center(camera_t *camera, sfVector2f center);
sfFloatRect get_camera_bounds(camera_t *camera);

#endif //MYRPG_CAMERA_H
