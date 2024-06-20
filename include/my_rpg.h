/*
** EPITECH PROJECT, 2023
** MY_RPG
** File description:
** MY_RPG.h
** Author: nathan.jeannot@epitech.eu
*/

#ifndef MY_RPG_H
    #define MY_RPG_H

    #include <SFML/Graphics.h>
    #include <SFML/Window.h>
    #include <SFML/System.h>
    #include <SFML/Audio.h>
    #include "lx_lib.h"
    #include "yml.h"
    #include "enum.h"
    #include <stdlib.h>
    #include "menu.h"
    #include "sprite.h"
    #include "entity.h"
    #include "animation.h"
    #include "item.h"
    #include "clock.h"
    #include "button.h"
    #include "options.h"
    #include "music.h"
    #include "sound.h"
    #include "load.h"
    #include "constant.h"
    #include "text.h"
    #include "sound.h"
    #include "player.h"
    #include "map.h"
    #include "keybinds.h"
    #include "tutorial.h"
    #include "new_game.h"
    #include "text_box.h"
    #include "npc.h"
    #include "enemy.h"
    #include "combat.h"
    #include "keys.h"
    #include "player.h"
    #include "map.h"
    #include "fight.h"
    #include "stats.h"
    #include "game.h"
    #include "espace.h"
    #include "yml.h"
    #include "dialog.h"

    #define SUCCESS 0
    #define FAILURE 84
    #define FPS_LIMIT 144

typedef struct {
    sfRenderWindow *window;
    sfVideoMode mode;
    sfEvent event;
    sfImage *icon;
    enum rpg_state state;
    menu_t *menu;
    options_t *options;
    load_t *load;
    tutorial_t *tutorial;
    new_game_t *new_game;
    all_items_t *all_items;
    game_t *game;
    escape_t *escape;
} my_rpg_t;

/*     ERROR HANDLING      */
size_t verificator_assets(void);
void print_file_not_found(const char *file);

/*     RPG      */
my_rpg_t *create_rpg(void);
void destroy_rpg(my_rpg_t *rpg);

/*     WINDOW      */
unsigned int display_window(void);
void reset_window_view(my_rpg_t *rpg);
void draw_rpg_state(my_rpg_t *rpg);

/*     EVENTS      */
void close_event(my_rpg_t *rpg);
my_rpg_t *handle_events(my_rpg_t *rpg);

/*     MENU      */
menu_t *create_menu(void);
void clock_menu(menu_t *menu);
void draw_menu(my_rpg_t *rpg);
void destroy_menu(menu_t *menu);
void handle_event_menu(my_rpg_t *rpg);

/*     MENU BACKGROUND      */
void create_menu_bg(menu_t *menu);
void draw_menu_bg(my_rpg_t *rpg);
void create_menu_bg_entities(menu_t *menu);

/*     MENU BUTTONS      */
void create_menu_buttons(menu_t *menu);
void draw_menu_buttons(my_rpg_t *rpg);
void handle_event_menu_buttons(my_rpg_t *rpg);

/*      TEXT      */
sfText *create_text_button(char *str, sfVector2f position, int size,
    char const *path);

/*     OPTIONS      */
options_t *create_options(void);
void clock_options(options_t *options);
void draw_options(my_rpg_t *rpg);
void destroy_options(options_t *options);
void handle_event_options(my_rpg_t *rpg);

/*     OPTIONS BACKGROUND      */
void create_options_bg(options_t *options);
void create_options_bg_entities(options_t *options);
void draw_options_bg(my_rpg_t *rpg);

/*     OPTIONS BUTTONS      */
void create_options_buttons(options_t *options);
void draw_options_buttons(my_rpg_t *rpg);
void handle_event_options_buttons(my_rpg_t *rpg);

/*     OPTIONS RECTANGLES      */
void create_options_rectangles(options_t *options);
void draw_options_rectangles(my_rpg_t *rpg);

/*     OPTIONS TEXTS      */
void create_options_texts(options_t *options);
void draw_options_texts(my_rpg_t *rpg);

/*      RECTANGLE      */
sfRectangleShape *create_rectangle(sfVector2f pos, sfVector2f origin,
    sfColor fill_color, sfVector2f size);
bool is_rect_clicked(sfMouseButtonEvent event, sfRectangleShape *rectangle);
bool is_mouse_rectangle(int x_mouse, int y_mouse, sfRectangleShape *rectangle);

/*      CIRCLE      */
sfCircleShape *create_circle(sfVector2f position, float radius);

/*      LOAD      */
load_t *create_load(void);
void clock_load(load_t *load);
void draw_load(my_rpg_t *rpg);
void destroy_load(load_t *load);
void handle_event_load(my_rpg_t *rpg);

/*      LOAD BACKGROUND     */
void create_load_bg_entities(load_t *load);
void create_load_bg(load_t *load);
void draw_load_bg(my_rpg_t *rpg);

/*      LOAD BUTTONS     */
void create_load_buttons(load_t *load);
void draw_load_buttons(my_rpg_t *rpg);
void handle_event_load_buttons(my_rpg_t *rpg);

/*      LOAD TEXTS     */
void create_load_texts(load_t *load);
void draw_load_texts(my_rpg_t *rpg);

/*      PLAYER         */
void handle_player_movement(my_rpg_t *rpg, player_t *player, map_t *map);

/*      GAME           */
void draw_game(my_rpg_t *rpg);
game_t *create_game(sfRenderWindow *win);
void create_game_keybinds(game_t *game);
void destroy_game(game_t *game);
void handle_game_music_on(music_t *music);
void handle_game_music_off(music_t *music);

/*      GAME UI      */
void create_game_ui(game_t *game);
void draw_game_ui(my_rpg_t *rpg);
void create_game_rectangles_ui(game_t *game);
void set_game_ui_bars(game_t *game);

/*      KEYBINDS      */
keybinds_t *create_keybinds(void);
void clock_keybinds(keybinds_t *keybinds);
void draw_keybinds(my_rpg_t *rpg);
void destroy_keybinds(keybinds_t *keybinds);
void handle_event_keybinds(my_rpg_t *rpg);
bool check_keybinds_already_used(my_rpg_t *rpg, int key);

/*      KEYBINDS BACKGROUND     */
void create_keybinds_bg(keybinds_t *keybinds);
void create_keybinds_bg_entities(keybinds_t *keybinds);
void draw_keybinds_bg(my_rpg_t *rpg);

/*      KEYBINDS BUTTONS     */
void create_keybinds_buttons(keybinds_t *keybinds);
void draw_keybinds_buttons(my_rpg_t *rpg);
void handle_event_keybinds_buttons(my_rpg_t *rpg);

/*      KEYBINDS TEXTS     */
void create_keybinds_texts(keybinds_t *keybinds);
void draw_keybinds_texts(my_rpg_t *rpg);

/*      BACKGROUND_STARS     */
bg_stars_t *create_background_stars(void);
void destroy_background_stars(bg_stars_t *stars);
void change_background_stars_color(keybinds_t *keybinds);
void create_new_background_stars(keybinds_t *keybinds);
void remove_background_stars(keybinds_t *keybinds);

/*          TUTORIAL         */
tutorial_t *create_tutorial(my_rpg_t *rpg);
void draw_tutorial(my_rpg_t *rpg);
void create_tutorial_buttons(tutorial_t *tutorial);
void draw_tutorial_buttons(my_rpg_t *rpg);
void handle_event_tutorial_buttons(my_rpg_t *rpg);
void destroy_tutorial(tutorial_t *tutorial);
void create_tutorial_images(tutorial_t *tutorial);
void draw_tutorial_images(my_rpg_t *rpg);
void create_tutorial_texts(my_rpg_t *rpg, tutorial_t *tutorial);
void draw_tutorial_texts(my_rpg_t *rpg);
void create_tutorial_background(tutorial_t *tutorial);
void draw_tutorial_background(my_rpg_t *rpg);


/*      ALL_ITEMS      */
all_items_t *create_all_items(void);

/*      INVENTORY      */
void draw_inventory(my_rpg_t *rpg);
void handle_inventory_event(my_rpg_t *rpg);

/*      NEW_GAME     */
new_game_t *create_new_game(void);
void draw_new_game(my_rpg_t *rpg);
void handle_new_game_event(my_rpg_t *rpg);
void destroy_new_game(new_game_t *game);

/*      NEW_GAME BACKGROUND     */
void create_new_game_bg(new_game_t *new_game);
void draw_new_game_bg(my_rpg_t *rpg);

/*      NEW_GAME NPC     */
void handle_new_game_npc_event(my_rpg_t *rpg);

/*      FIGHTING      */
fighting_t *create_fighting(player_t *player);
void draw_fighting(my_rpg_t *rpg);
void handle_fighting_events(my_rpg_t *rpg);
void destroy_fighting(fighting_t *fight);

/*      FIGHTING BACKGROUND      */
void create_fighting_bg(fighting_t *fight);
void draw_fighting_bg(my_rpg_t *rpg);

/*      FIGHTING BUTTONS     */
void create_fighting_buttons(fighting_t *fight);
void draw_fighting_buttons(my_rpg_t *rpg);
void handle_event_fighting_buttons(my_rpg_t *rpg);
void escape_button(my_rpg_t *rpg);
void heal_button(my_rpg_t *rpg);
void attack_button(my_rpg_t *rpg);
void poison_button(my_rpg_t *rpg);
void fire_button(my_rpg_t *rpg);
void ice_button(my_rpg_t *rpg);

/*      FIGHTING RECTANGLES     */
void create_fighting_rectangles(fighting_t *fight);
void draw_fighting_rectangles(my_rpg_t *rpg);
void update_player_hp_bar(player_t *player, fighting_t *fight);

/*      FIGHTING TEXTS     */
void create_fighting_texts(fighting_t *fight);
void draw_fighting_texts(my_rpg_t *rpg);
void create_fighting_player_text(fighting_t *fight, bool damage, int amount);
void destroy_fighting_player_text(fighting_t *fight);
void update_turn_text(fighting_t *fight, bool turn);

/*      FIGHTING MUSICS AND SOUNDS     */
void create_fighting_musics(fighting_t *fight);
void create_fighting_sounds(fighting_t *fight);
void handle_fighting_music_on(music_t *music);
void handle_fighting_music_off(music_t *music);
void handle_fighting_sound_on(sound_t *sound);
void handle_fighting_sound_off(sound_t *sound);

/*             ENEMY            */
enemy_t *create_enemy(enum assets asset, sfVector2f pos);
void destroy_enemy(enemy_t *enemy);
void enemy_update_rectangle(enemy_combat_t *enemy);
void create_enemy_damage_text(enemy_t *enemy, int damage, bool fire);
void destroy_enemy_damage_text(enemy_t *enemy);
void draw_enemy(my_rpg_t *rpg, enemy_combat_t *enemy);
sfColor get_hp_color(int hp, int hp_max);

/*            COMBAT            */
combat_t *create_combat(fighting_t *fight, player_t *player);
void destroy_combat(combat_t *combat);
enemy_combat_t *combat_add_enemy(combat_t *combat, enemy_t *enemy);
enemy_combat_t *combat_get_enemy(combat_t *combat, int index);
int combat_attack(combat_t *combat, int enemy);
void combat_escape(combat_t *combat);
bool is_combat_over(combat_t *combat);
void combat_self_damage(fighting_t *fight);

/*            NPCS            */
int load_npcs(my_rpg_t *rpg);
npc_t *create_npc(yml_t *yml, char *path);
void destroy_npc(npc_t *npc);
bool is_in_npc_range(my_rpg_t *rpg, npc_t *npc);
void npc_interact(my_rpg_t *rpg, npc_t *npc);

/* DIALOGS */
dialog_t *create_dialog(char *name, char *text);
void destroy_dialog(dialog_t *dialog);
void draw_dialog(my_rpg_t *rpg, sfVector2f pos, sfVector2f size);

/*              MAP             */
void handle_combat_zones(my_rpg_t *rpg, player_t *player, map_t *map);

/*      ESCAPE     */
escape_t *create_escape(void);
void draw_escape(my_rpg_t *rpg);
void handle_events_escape(my_rpg_t *rpg);

/*      ESCAPE BACKGROUND     */
void create_escape_bg(escape_t *escape);
void draw_escape_bg(my_rpg_t *rpg);

/*      ESCAPE BUTTONS     */
void create_escape_buttons(escape_t *escape);
void draw_escape_buttons(my_rpg_t *rpg);
void handle_event_escape_buttons(my_rpg_t *rpg);

typedef struct {
    enum rpg_state state;
    void (*handler)(my_rpg_t *rpg);
} handler_t;

#endif
