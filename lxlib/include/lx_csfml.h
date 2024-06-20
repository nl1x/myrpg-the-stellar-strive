/*
** EPITECH PROJECT, 2023
** lib
** File description:
** lx_csfml.h
** Author: nathan.jeannot@epitech.eu
*/

#ifndef LIB_LX_CSFML_H
    #define LIB_LX_CSFML_H

    #include "lx_lib.h"
    #include <SFML/Window.h>
    #include <SFML/Graphics.h>

typedef struct lx_window lx_window_t;
typedef struct lx_frame lx_frame_t;

typedef struct lx_sprite {
    char *texture_path;
    int nb_frames;
    double animation_timer;
    sfClock *clock;
    sfSprite *object;
    sfIntRect *rect;
    sfTexture *texture;
    sfIntRect *texture_rect;
} lx_sprite_t;

typedef struct lx_text {
    char *content;
    sfFont *font;
    sfText *object;
    sfIntRect *textRect;
    sfColor bg;
    sfColor fg;
    sfVector2f pos;
} lx_text_t;

typedef struct lx_children {
    unsigned int amount;
    lx_list_t *objects;
} lx_children_t;

typedef struct lx_frame {
    char const *name;
    lx_children_t *texts;
    lx_children_t *sprites;
    lx_sprite_t *background;
    int (*analyse_events)();
    void (*update_frame)();
} lx_frame_t;

typedef struct lx_window {
    char *title;
    sfRenderWindow *object;
    lx_frame_t *current_frame;
    lx_children_t *frames;
} lx_window_t;

// Children
void lx_children_add(lx_children_t *children, void *child);
lx_children_t *lx_children_new(void);
void lx_children_remove(lx_children_t *children, void *child);

// Clock
long long lx_clock_get_ms(sfClock *clock);
double lx_clock_get_seconds(sfClock *clock);
sfClock *lx_clock_new(void);
void lx_clock_restart(sfClock *clock);

// Frame
void lx_frame_destroy(lx_frame_t *frame);
void lx_frame_display(lx_frame_t *frame, lx_window_t *win);
lx_frame_t *lx_frame_get(lx_window_t *win, char const *name);
lx_frame_t *lx_frame_new(
    int (*analyse_events)(lx_window_t *win),
    void (*update_frame)(lx_window_t *win, lx_frame_t *self),
    char const *name
);
void lx_frame_set_background(lx_frame_t *frame, char const *path);

// Math
sfVector2f lx_lerp(sfVector2f start, sfVector2f end, double time);

// Mode
sfVideoMode lx_mode_new(unsigned int width, unsigned int height);

// Rect
void lx_rect_move(sfIntRect *rect, int offset, int max_value);
sfIntRect *lx_rect_new(
    int top, int left, unsigned int width, unsigned int height
);
void lx_rect_place(sfIntRect *rect, int x, int y);

// Sprite
sfIntRect *lx_sprite_collide(lx_sprite_t *sprite1, lx_sprite_t *sprite2);
int lx_sprite_collide_point(lx_sprite_t *sprite, sfVector2f point);
void lx_sprite_destroy(lx_sprite_t *sprite);
void lx_sprite_display(lx_sprite_t *sprite, lx_window_t *win);
lx_sprite_t *lx_sprite_list_collide_point(
    lx_node_t *sprites, sfVector2f point
);
void lx_sprite_move(lx_sprite_t *sprite, sfVector2f velocity);
void lx_sprite_movedt(lx_sprite_t *sprite, sfVector2f velocity, float dt);
lx_sprite_t *lx_sprite_new(
    char const *texture, sfIntRect *texture_rect,
    int nb_frames, double animation_speed
);
void lx_sprite_scale(lx_sprite_t *sprite, float scale);
void lx_sprite_setpos(lx_sprite_t *sprite, sfVector2f pos);
void lx_sprite_texture_resize(lx_sprite_t *sprite, int width, int height);
void lx_sprite_texture_set(lx_sprite_t *sprite, int index);
void lx_sprite_texture_update(lx_sprite_t *sprite);

// Text
void lx_text_destroy(lx_text_t *text);
void lx_text_display(lx_text_t *text, lx_window_t *win);
void lx_text_move(lx_text_t *text, sfVector2f velocity);
lx_text_t *lx_text_new(
    char const *content, char const *font_path, int size, sfVector2f pos
);
void lx_text_set_color(lx_text_t *text, sfColor color);
void lx_text_set_value(lx_text_t *text, char *value);

// Vector
sfVector2f lx_vector2f(float x, float y);
float lx_vector_length(sfVector2f vector);

// Window
void lx_win_close(lx_window_t *win, int destroy);
void lx_win_destroy(lx_window_t *win);
void lx_win_display(lx_window_t *win);
int lx_win_is_open(lx_window_t *win);
lx_window_t *lx_win_new(char const *title, sfVideoMode mode);
int lx_win_poll_event(lx_window_t *win, sfEvent *event);
void lx_win_switch_frame(lx_window_t *win, lx_frame_t *frame);

#endif //LIB_LX_CSFML_H
