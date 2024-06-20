/*
** EPITECH PROJECT, 2024
** my_rpg
** File description:
** handle_event_fighting_buttons
*/

#include <stdio.h>
#include "my_rpg.h"

static
void magic_button(my_rpg_t *rpg)
{
    rpg->game->fight->state = FIGHTING_MENU_MAGIC_STATE;
}

static
void handle_event_fighting_menu_buttons_clicked(my_rpg_t *rpg)
{
    if (is_mouse_button(rpg->event.mouseButton.x, rpg->event.mouseButton.y,
        rpg->game->fight->buttons[FIGHTING_ATTACK_BUTTONS]) == true)
        attack_button(rpg);
    if (is_mouse_button(rpg->event.mouseButton.x, rpg->event.mouseButton.y,
        rpg->game->fight->buttons[FIGHTING_MAGIC_BUTTONS]) == true)
        magic_button(rpg);
    if (is_mouse_button(rpg->event.mouseButton.x, rpg->event.mouseButton.y,
        rpg->game->fight->buttons[FIGHTING_HEAL_BUTTONS]) == true)
        heal_button(rpg);
    if (is_mouse_button(rpg->event.mouseButton.x, rpg->event.mouseButton.y,
        rpg->game->fight->buttons[FIGHTING_ESCAPE_BUTTONS]) == true)
        escape_button(rpg);
}

static
void handle_event_fighting_menu_buttons_hovered(my_rpg_t *rpg)
{
    if (is_mouse_button(rpg->event.mouseMove.x, rpg->event.mouseMove.y,
        rpg->game->fight->buttons[FIGHTING_ATTACK_BUTTONS]) == true)
        sfSprite_setPosition(rpg->game->fight->sprites[ARROW_SELECT_FIGHTING],
            (sfVector2f){POS_X_ATTACK_BUTTON, POS_Y_ATTACK_BUTTON});
    if (is_mouse_button(rpg->event.mouseMove.x, rpg->event.mouseMove.y,
        rpg->game->fight->buttons[FIGHTING_MAGIC_BUTTONS]) == true)
        sfSprite_setPosition(rpg->game->fight->sprites[ARROW_SELECT_FIGHTING],
            (sfVector2f){POS_X_MAGIC_BUTTON, POS_Y_MAGIC_BUTTON});
    if (is_mouse_button(rpg->event.mouseMove.x, rpg->event.mouseMove.y,
            rpg->game->fight->buttons[FIGHTING_HEAL_BUTTONS]) == true)
        sfSprite_setPosition(rpg->game->fight->sprites[ARROW_SELECT_FIGHTING],
            (sfVector2f){POS_X_HEAL_BUTTON, POS_Y_HEAL_BUTTON});
    if (is_mouse_button(rpg->event.mouseMove.x, rpg->event.mouseMove.y,
            rpg->game->fight->buttons[FIGHTING_ESCAPE_BUTTONS]) == true)
        sfSprite_setPosition(rpg->game->fight->sprites[ARROW_SELECT_FIGHTING],
            (sfVector2f){POS_X_ESCAPE_BUTTON, POS_Y_ESCAPE_BUTTON});
}

static
void handle_event_fighting_magic_buttons_clicked(my_rpg_t *rpg)
{
    if (is_mouse_button(rpg->event.mouseButton.x, rpg->event.mouseButton.y,
        rpg->game->fight->buttons[FIGHTING_BACK_BUTTONS]) == true)
        rpg->game->fight->state = FIGHTING_MENU_STATE;
    if (is_mouse_button(rpg->event.mouseButton.x, rpg->event.mouseButton.y,
        rpg->game->fight->buttons[FIGHTING_POISONED_BUTTONS]) == true)
        poison_button(rpg);
    if (is_mouse_button(rpg->event.mouseButton.x, rpg->event.mouseButton.y,
        rpg->game->fight->buttons[FIGHTING_FIRE_BUTTONS]) == true)
        fire_button(rpg);
    if (is_mouse_button(rpg->event.mouseButton.x, rpg->event.mouseButton.y,
        rpg->game->fight->buttons[FIGHTING_ICE_BUTTONS]) == true)
        ice_button(rpg);
}

static
void handle_event_fighting_magic_buttons_hovered(my_rpg_t *rpg)
{
    if (is_mouse_button(rpg->event.mouseMove.x, rpg->event.mouseMove.y,
        rpg->game->fight->buttons[FIGHTING_BACK_BUTTONS]) == true)
        sfSprite_setPosition(rpg->game->fight->sprites[ARROW_SELECT_FIGHTING],
            (sfVector2f){POS_X_BACK_BUTTON, POS_Y_BACK_BUTTON});
    if (is_mouse_button(rpg->event.mouseMove.x, rpg->event.mouseMove.y,
            rpg->game->fight->buttons[FIGHTING_POISONED_BUTTONS]) == true)
        sfSprite_setPosition(rpg->game->fight->sprites[ARROW_SELECT_FIGHTING],
            (sfVector2f){POS_X_POISONED_BUTTON, POS_Y_POISONED_BUTTON});
    if (is_mouse_button(rpg->event.mouseMove.x, rpg->event.mouseMove.y,
            rpg->game->fight->buttons[FIGHTING_FIRE_BUTTONS]) == true)
        sfSprite_setPosition(rpg->game->fight->sprites[ARROW_SELECT_FIGHTING],
            (sfVector2f){POS_X_FIRE_BUTTON, POS_Y_FIRE_BUTTON});
    if (is_mouse_button(rpg->event.mouseMove.x, rpg->event.mouseMove.y,
            rpg->game->fight->buttons[FIGHTING_ICE_BUTTONS]) == true)
        sfSprite_setPosition(rpg->game->fight->sprites[ARROW_SELECT_FIGHTING],
            (sfVector2f){POS_X_ICE_BUTTON, POS_Y_ICE_BUTTON});
}

static
void end_combat(my_rpg_t *rpg)
{
    int xp_gained = get_random_number(XP_GAIN_MIN, XP_GAIN_MAX);

    rpg->game->fight->combat->state = FINISHED;
    rpg->game->fight->waiting = true;
    sfClock_restart(rpg->game->fight->wait_clock);
    rpg->game->player->stats->xp += xp_gained;
}

static
void attack_enemy(my_rpg_t *rpg)
{
    struct enemy_combat_s *needle =
        TAILQ_FIRST(&rpg->game->fight->combat->enemies);

    for (; needle; needle = needle->entries.tqe_next) {
        if (!is_mouse_sprite(rpg->event.mouseButton.x,
            rpg->event.mouseButton.y,
            needle->enemy->animated_entity->entity->sprite))
            continue;
        combat_attack(rpg->game->fight->combat, 0);
        if (is_combat_over(rpg->game->fight->combat)) {
            end_combat(rpg);
            return;
        }
        rpg->game->fight->state = FIGHTING_MENU_STATE;
        rpg->game->fight->waiting = true;
        sfClock_restart(rpg->game->fight->wait_clock);
        update_turn_text(rpg->game->fight, true);
        return;
    }
}

static
void handle_event_fighting_attack_buttons_clicked(my_rpg_t *rpg)
{
    if (is_mouse_button(rpg->event.mouseButton.x, rpg->event.mouseButton.y,
        rpg->game->fight->buttons[FIGHTING_CANCEL_BUTTONS]) == true) {
        rpg->game->fight->state = FIGHTING_MENU_STATE;
        sfSprite_setPosition(rpg->game->fight->sprites[ARROW_SELECT_FIGHTING],
            POS_ARROW_SELECT_FIGHTING);
    } else
        attack_enemy(rpg);
}

static
void handle_event_fighting_attack_buttons_hovered(my_rpg_t *rpg)
{
    if (is_mouse_button(rpg->event.mouseMove.x, rpg->event.mouseMove.y,
        rpg->game->fight->buttons[FIGHTING_CANCEL_BUTTONS]) == true)
        sfSprite_setPosition(rpg->game->fight->sprites[ARROW_SELECT_FIGHTING],
            (sfVector2f){POS_X_CANCEL_BUTTON, POS_Y_CANCEL_BUTTON});
    else
        sfSprite_setPosition(rpg->game->fight->sprites[ARROW_SELECT_FIGHTING],
            POS_ARROW_SELECT_FIGHTING);
}

void handle_event_fighting_buttons(my_rpg_t *rpg)
{
    if (rpg->game->fight->waiting)
        return;
    if (rpg->event.type == sfEvtMouseButtonPressed) {
        if (rpg->game->fight->state == FIGHTING_ATTACK_STATE)
            return handle_event_fighting_attack_buttons_clicked(rpg);
        if (rpg->game->fight->state == FIGHTING_MENU_STATE)
            return handle_event_fighting_menu_buttons_clicked(rpg);
        if (rpg->game->fight->state == FIGHTING_MENU_MAGIC_STATE)
            return handle_event_fighting_magic_buttons_clicked(rpg);
    }
    if (rpg->event.type == sfEvtMouseMoved) {
        if (rpg->game->fight->state == FIGHTING_ATTACK_STATE)
            return handle_event_fighting_attack_buttons_hovered(rpg);
        if (rpg->game->fight->state == FIGHTING_MENU_STATE)
            return handle_event_fighting_menu_buttons_hovered(rpg);
        if (rpg->game->fight->state == FIGHTING_MENU_MAGIC_STATE)
            return handle_event_fighting_magic_buttons_hovered(rpg);
    }
}
