/*
** EPITECH PROJECT, 2024
** my_rpg
** File description:
** create_fighting_texts
*/

#include "my_rpg.h"

static
text_t *create_fighting_text(char *text, float x, float y, float size)
{
    format_t *format = create_format(
        (sfVector2f){x, y}, sfWhite, size, path_assets[FONT]);

    return create_text(text, format);
}

static
void create_fighting_spell_costs(fighting_t *fight)
{
    fight->texts[FIGHTING_POISONED_MANA_COST] = create_fighting_text(
        "(cost : 15 mana)", POS_X_POISONED_MANA_COST_TEXT,
        POS_Y_POISONED_MANA_COST_TEXT, SIZE_POISONED_MANA_COST_TEXT);
    fight->texts[FIGHTING_FIRE_MANA_COST] = create_fighting_text(
        "(cost : 20 mana)", POS_X_FIRE_MANA_COST_TEXT,
        POS_Y_FIRE_MANA_COST_TEXT, SIZE_FIRE_MANA_COST_TEXT);
    fight->texts[FIGHTING_ICE_MANA_COST] = create_fighting_text(
        "(cost : 12 mana)", POS_X_ICE_MANA_COST_TEXT, POS_Y_ICE_MANA_COST_TEXT,
        SIZE_ICE_MANA_COST_TEXT);
    for (int i = 3; i < NB_FIGHTING_TEXTS - 1; i++)
        sfText_setColor(fight->texts[i]->text, sfBlack);
}

void create_fighting_texts(fighting_t *fight)
{
    fight->texts = calloc(NB_FIGHTING_TEXTS, sizeof(text_t *));
    fight->texts[FIGHTING_HP_TEXT] = create_fighting_text("HP ",
        POS_X_FIGHTING_HP_TEXT, POS_Y_FIGHTING_HP_TEXT,
        SIZE_FIGHTING_HP_TEXT);
    fight->texts[FIGHTING_SELECT_ENEMY_TEXT] = create_fighting_text(
        "|   SELECT AN ENEMY", POS_X_SELECT_ENEMY_TEXT,
        POS_Y_SELECT_ENEMY_TEXT, SIZE_SELECT_ENEMY_TEXT);
    fight->texts[FIGHTING_TURN_TEXT] = create_fighting_text(
        "Turn: You", POS_X_TURN_TEXT, POS_Y_TURN_TEXT, SIZE_TURN_TEXT);
    sfText_setColor(fight->texts[FIGHTING_SELECT_ENEMY_TEXT]->text, sfBlack);
    create_fighting_spell_costs(fight);
}
