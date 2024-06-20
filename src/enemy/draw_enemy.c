/*
** EPITECH PROJECT, 2024
** DRAW_ENEMY
** File description:
** Draw enemy
** Author: lysandre.boursette@epitech.eu
*/

#include "my_rpg.h"

static
bool update_enemy_text(enemy_t *enemy)
{
    float time_elapsed_seconds;
    sfVector2f text_pos;
    sfColor text_color;

    if (enemy->text == NULL)
        return false;
    time_elapsed_seconds = sfTime_asSeconds(
        sfClock_getElapsedTime(enemy->clock));
    if (time_elapsed_seconds >= 1) {
        destroy_enemy_damage_text(enemy);
        enemy->text = NULL;
        return false;
    }
    text_pos = sfText_getPosition(enemy->text->text);
    text_color = sfText_getColor(enemy->text->text);
    sfText_setColor(enemy->text->text, sfColor_fromRGBA(text_color.r,
        text_color.g, text_color.b, ((1 - time_elapsed_seconds) * 255)));
    sfText_setPosition(enemy->text->text, (sfVector2f) { text_pos.x,
        text_pos.y - ((1 - time_elapsed_seconds) * 0.5) });
    return true;
}

void draw_enemy(my_rpg_t *rpg, enemy_combat_t *enemy)
{
    draw_animated_entity(enemy->enemy->animated_entity, rpg->window);
    sfRenderWindow_drawRectangleShape(rpg->window,
        enemy->rectangles[0], NULL);
    sfRenderWindow_drawRectangleShape(rpg->window,
        enemy->rectangles[1], NULL);
    if (update_enemy_text(enemy->enemy))
        sfRenderWindow_drawText(rpg->window, enemy->enemy->text->text, NULL);
}
