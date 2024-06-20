/*
** EPITECH PROJECT, 2024
** my_rpg
** File description:
** keys
*/

#ifndef KEYS_H_
    #define KEYS_H_

typedef struct {
    int key;
    char *value;
} keyy_t;

extern const keyy_t list_key[];

char *get_input(int key);

#endif /* !KEYS_H_ */
