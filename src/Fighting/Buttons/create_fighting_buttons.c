/*
** EPITECH PROJECT, 2024
** my_rpg
** File description:
** create_fighting_buttons
*/

#include "my_rpg.h"

static
void create_fighting_buttons_menu(fighting_t *fight)
{
    fight->buttons = calloc(NB_FIGHTING_MENU_BUTTONS, sizeof(button_t *));
    fight->buttons[FIGHTING_ATTACK_BUTTONS] = create_button(
        POS_FIGHTING_ATTACK_MENU_BUTTONS, SCALE_FIGHTING_ATTACK_MENU_BUTTONS,
        BUTTONS_MENU, "ATTACK");
    fight->buttons[FIGHTING_MAGIC_BUTTONS] = create_button(
        POS_FIGHTING_MAGIC_MENU_BUTTONS, SCALE_FIGHTING_MAGIC_MENU_BUTTONS,
        BUTTONS_MENU, "MAGIC");
    fight->buttons[FIGHTING_HEAL_BUTTONS] = create_button(
        POS_FIGHTING_HEAL_MENU_BUTTONS, SCALE_FIGHTING_HEAL_MENU_BUTTONS,
        BUTTONS_MENU, "HEAL");
    fight->buttons[FIGHTING_ESCAPE_BUTTONS] = create_button(
        POS_FIGHTING_ESCAPE_MENU_BUTTONS, SCALE_FIGHTING_ESCAPE_MENU_BUTTONS,
        BUTTONS_MENU, "ESCAPE");
    for (int i = 0; fight->buttons[i] != NULL; i++)
        sfText_setColor(fight->buttons[i]->text, sfBlack);
}

static
void set_fighting_buttons_magic_color(fighting_t *fight)
{
    sfText_setColor(fight->buttons[FIGHTING_BACK_BUTTONS]->text,
        sfBlack);
    sfText_setColor(fight->buttons[FIGHTING_POISONED_BUTTONS]->text,
        sfColor_fromRGB(RED_PURPLE, GREEN_PURPLE, BLUE_PURPLE));
    sfText_setColor(fight->buttons[FIGHTING_FIRE_BUTTONS]->text,
        sfRed);
    sfText_setColor(fight->buttons[FIGHTING_ICE_BUTTONS]->text,
        sfCyan);
}

static
void create_fighting_buttons_magic(fighting_t *fight)
{
    fight->buttons[FIGHTING_BACK_BUTTONS] = create_button(
        POS_FIGHTING_BACK_BUTTONS, SCALE_FIGHTING_BACK_BUTTONS,
        BUTTONS_MENU, "BACK");
    fight->buttons[FIGHTING_POISONED_BUTTONS] = create_button(
        POS_FIGHTING_POISONED_BUTTONS, SCALE_FIGHTING_POISONED_BUTTONS,
        BUTTONS_MENU, "POISONED");
    fight->buttons[FIGHTING_FIRE_BUTTONS] = create_button(
        POS_FIGHTING_FIRE_BUTTONS, SCALE_FIGHTING_FIRE_BUTTONS,
        BUTTONS_MENU, "FIRE");
    fight->buttons[FIGHTING_ICE_BUTTONS] = create_button(
        POS_FIGHTING_ICE_BUTTONS, SCALE_FIGHTING_ICE_BUTTONS,
        BUTTONS_MENU, "ICE");
    set_fighting_buttons_magic_color(fight);
}

static
void create_fighting_buttons_attack(fighting_t *fight)
{
    fight->buttons[FIGHTING_CANCEL_BUTTONS] = create_button(
        POS_FIGHTING_CANCEL_BUTTONS, SCALE_FIGHTING_CANCEL_BUTTONS,
        BUTTONS_MENU, "CANCEL");
    sfText_setColor(fight->buttons[FIGHTING_CANCEL_BUTTONS]->text, sfBlack);
}

void create_fighting_buttons(fighting_t *fight)
{
    create_fighting_buttons_menu(fight);
    create_fighting_buttons_magic(fight);
    create_fighting_buttons_attack(fight);
}
