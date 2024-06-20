/*
** EPITECH PROJECT, 2024
** DIALOG_H_
** File description:
** DIALOG's header
** Author: lysandre.boursette@epitech.eu
*/

#ifndef DIALOG_H_
    #define DIALOG_H_

typedef struct dialog_s {
    entity_t *frame;
    text_t *npc_name;
    text_t *dialog;
} dialog_t;

#endif /* DIALOG_H_ */
