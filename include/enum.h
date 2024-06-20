/*
** EPITECH PROJECT, 2024
** my_rpg
** File description:
** enum
*/

#ifndef ENUM_H_
    #define ENUM_H_

enum assets {
    ICON_WINDOW,
    FONT,
    MENU_BG,
    MENU_PLANET,
    CLICKED_MENU_BUTTON,
    HOVER_MENU_BUTTON,
    NONE_MENU_BUTTON,
    OPTIONS_BG,
    OPTIONS_PLANET,
    CLICKED_BACK_BUTTON,
    HOVER_BACK_BUTTON,
    NONE_BACK_BUTTON,
    MAIN_MENU_THEME,
    CLICKED_MUSIC_ON_BUTTON,
    HOVER_MUSIC_ON_BUTTON,
    NONE_MUSIC_ON_BUTTON,
    CLICKED_MUSIC_OFF_BUTTON,
    HOVER_MUSIC_OFF_BUTTON,
    NONE_MUSIC_OFF_BUTTON,
    CLICKED_SOUND_OFF_BUTTON,
    HOVER_SOUND_OFF_BUTTON,
    NONE_SOUND_OFF_BUTTON,
    CLICKED_SOUND_ON_BUTTON,
    HOVER_SOUND_ON_BUTTON,
    NONE_SOUND_ON_BUTTON,
    CLICK_BUTTON_SOUND,
    CLICKED_PLAY_BUTTON,
    HOVER_PLAY_BUTTON,
    NONE_PLAY_BUTTON,
    KEYS_IMG,
    TUTORIAL_BACKGROUND,
    LOAD_BG,
    LOAD_PLANET,
    KEYBINDS_BG,
    KEYBINDS_BLACK_HOLE,
    DIALOGUE_BOX_SIMPLE,
    PLAYER_SPRITE_SHEET,
    MAP_1_INSIDE_PNG,
    MAP_1_INSIDE_TMX,
    MAP_1_OUTSIDE_PNG,
    MAP_1_OUTSIDE_TMX,
    MAP_FIGHTING_NINJA_BASIC,
    MAP_FIGHTING_NINJA_FIELD,
    MAP_FIGHTING_NINJA_GREEN,
    PLAYER_FIGHTING_POS,
    ARROW_SELECT,
    HP_BAR_ASSET,
    MANA_BAR_ASSET,
    XP_BAR_ASSET,
    CHAT_BUBBLE_ASSET,
    DIALOG_ASSET,
    MUSIC_COMBAT_1,
    MUSIC_COMBAT_2,
    MUSIC_COMBAT_3,
    GAME_MUSIC,
    ENTER_BATTLE_SOUND_1,
    ENTER_BATTLE_SOUND_2,
    ENTER_BATTLE_SOUND_3,
    LARVA_ASSET,
    INVENTORY_BG,
    TEXT_FONT
};

enum rpg_state {
    MENU_STATE,
    NEW_GAME_STATE,
    LOAD_STATE,
    OPTIONS_STATE,
    KEYBINDS_STATE,
    TUTORIAL_STATE,
    FIGHTING_NINJA_BASIC_STATE,
    INVENTORY_STATE,
    ESCAPE_STATE,
    TOTAL_RPG_STATES,
};

enum button_state {
    NONE,
    HOVER,
    CLICKED
};

enum enum_list_buttons {
    BUTTONS_MENU,
    BUTTONS_BACK,
    BUTTONS_MUSIC_ON,
    BUTTONS_MUSIC_OFF,
    BUTTONS_SOUND_ON,
    BUTTONS_SOUND_OFF,
    BUTTONS_PLAY
};

enum menu_background {
    BACKGROUND_MENU,
    STARS_MENU
};

enum menu_entities {
    PLANET_MENU
};

enum menu_buttons {
    NEW_GAME_BUTTON,
    LOAD_BUTTON,
    OPTIONS_BUTTON,
    EXIT_BUTTON
};

enum options_background {
    BACKGROUND_OPTIONS,
};

enum options_entities {
    PLANET_OPTIONS,
};

enum options_buttons {
    OPTIONS_BACK_BUTTON,
    OPTIONS_MUSIC_ON,
    OPTIONS_MUSIC_OFF,
    OPTIONS_SOUND_ON,
    OPTIONS_SOUND_OFF,
    OPTIONS_KEYBINDS
};

enum options_texts {
    OPTIONS_MUSIC_TEXT,
    OPTIONS_SOUND_TEXT,
    OPTIONS_TEXT
};

enum load_background {
    BACKGROUND_LOAD,
};

enum load_entities {
    PLANET_LOAD,
};

enum load_buttons {
    LOAD_BACK_BUTTON
};

enum load_texts {
    LOAD_TEXT,
    COMING_SOON_TEXT
};

enum keybinds_sprites {
    BACKGROUND_KEYBINDS
};

enum keybinds_entities {
    BLACK_HOLE_KEYBINDS
};

enum keybinds_buttons {
    KEYBINDS_BACK_BUTTON,
    KEYBINDS_MOVE_UP_BUTTON,
    KEYBINDS_MOVE_LEFT_BUTTON,
    KEYBINDS_MOVE_RIGHT_BUTTON,
    KEYBINDS_MOVE_DOWN_BUTTON,
    KEYBINDS_INTERACT_BUTTON,
    KEYBINDS_INVENTORY_BUTTON,
    KEYBINDS_ATTACK_BUTTON,
};

enum keybinds_texts {
    KEYBINDS_TITLE,
    KEYBINDS_MOVE_UP_TEXT,
    KEYBINDS_MOVE_LEFT_TEXT,
    KEYBINDS_MOVE_RIGHT_TEXT,
    KEYBINDS_MOVE_DOWN_TEXT,
    KEYBINDS_INTERACT_TEXT,
    KEYBINDS_INVENTORY_TEXT,
};

enum keybinds {
    KEYBINDS_MOVE_UP,
    KEYBINDS_MOVE_LEFT,
    KEYBINDS_MOVE_RIGHT,
    KEYBINDS_MOVE_DOWN,
    KEYBINDS_INTERACT,
    KEYBINDS_INVENTORY
};

enum tutorial_buttons {
    TUTORIAL_PLAY_BUTTON
};

enum tutorial_images {
    TUTORIAL_KEYS_IMAGE
};

enum tutorial_texts {
    TUTORIAL_KEY_MOVEMENT_UP,
    TUTORIAL_KEY_MOVEMENT_DOWN,
    TUTORIAL_KEY_MOVEMENT_LEFT,
    TUTORIAL_KEY_MOVEMENT_RIGHT,
    TUTORIAL_KEY_OPEN_INVENTORY,
    TUTORIAL_KEY_INTERACT
};

enum fighting_sprites {
    BG_FIGHTING_NINJA_BASIC,
    BG_FIGHTING_NINJA_FIELD,
    BG_FIGHTING_NINJA_GREEN,
    BOX_FIGHTING,
    PLAYER_FIGHTING,
    ARROW_SELECT_FIGHTING
};

enum fighting_texts {
    FIGHTING_HP_TEXT,
    FIGHTING_SELECT_ENEMY_TEXT,
    FIGHTING_TURN_TEXT,
    FIGHTING_POISONED_MANA_COST,
    FIGHTING_FIRE_MANA_COST,
    FIGHTING_ICE_MANA_COST
};

enum fighting_menu_buttons {
    FIGHTING_ATTACK_BUTTONS,
    FIGHTING_MAGIC_BUTTONS,
    FIGHTING_HEAL_BUTTONS,
    FIGHTING_ESCAPE_BUTTONS,
    FIGHTING_BACK_BUTTONS,
    FIGHTING_POISONED_BUTTONS,
    FIGHTING_FIRE_BUTTONS,
    FIGHTING_ICE_BUTTONS,
    FIGHTING_CANCEL_BUTTONS
};

enum fighting_hp_bar {
    FIGHTING_PLAYER_RED_HP_BAR,
    FIGHTING_PLAYER_GREEN_HP_BAR,
};

enum fighting_states {
    FIGHTING_MENU_STATE,
    FIGHTING_MENU_MAGIC_STATE,
    FIGHTING_ATTACK_STATE
};

enum fighting_musics {
    MUSIC_FIGHTING_1,
    MUSIC_FIGHTING_2,
    MUSIC_FIGHTING_3,
};

enum fighting_enter_battle_sounds {
    ENTER_FIGHTING_SOUND_1,
    ENTER_FIGHTING_SOUND_2,
    ENTER_FIGHTING_SOUND_3,
};

enum game_ui {
    GAME_HP_BAR,
    GAME_MANA_BAR,
    GAME_XP_BAR,
};

enum game_ui_rectangles {
    GAME_HP_RECTANGLE,
    GAME_MANA_RECTANGLE,
    GAME_XP_RECTANGLE,
};

enum escape_background {
    ESCAPE_BACKGROUND,
};

enum escape_buttons {
    ESCAPE_RESUME,
    BACK_TO_MENU_RESUME
};

#endif /* !ENUM_H_ */
