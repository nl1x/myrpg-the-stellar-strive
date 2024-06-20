/*
** EPITECH PROJECT, 2024
** CREATE_TUTORIAL
** File description:
** create tutorial
** Author: lysandre.boursette@epitech.eu
*/

#include "my_rpg.h"

/*
 * TODO: Print error if tutorial is NULL
 */
tutorial_t *create_tutorial(my_rpg_t *rpg)
{
    tutorial_t *tutorial = calloc(1, sizeof(tutorial_t));

    if (tutorial == NULL)
        return NULL;
    create_tutorial_buttons(tutorial);
    create_tutorial_images(tutorial);
    create_tutorial_texts(rpg, tutorial);
    create_tutorial_background(tutorial);
    return tutorial;
}
