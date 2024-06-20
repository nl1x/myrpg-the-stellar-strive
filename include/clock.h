/*
** EPITECH PROJECT, 2024
** my_rpg
** File description:
** clock
*/

#ifndef CLOCK_H_
    #define CLOCK_H_

    #include <SFML/Graphics.h>

    #define AS_SECOND 1000000.0

typedef struct {
    sfClock *clock;
    float seconds;
    sfTime time;
} clockk_t;

void destroy_clockk(clockk_t *clock);

#endif /* !CLOCK_H_ */
