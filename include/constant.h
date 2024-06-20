/*
** EPITECH PROJECT, 2024
** my_rpg
** File description:
** constant
*/

#ifndef CONSTANT_H_
    #define CONSTANT_H_

    /*      PLANET 75 PIXELS      */
    #define PLANET_75PX_SPEED 0.2
    #define PLANET_ANIM_BOX ((sfIntRect) {0, 0, 75, 75})
    #define PLANET_ANIM_BOX_MOVEMENT ((sfVector2i) {75, 0})
    #define PLANET_ANIM_BOX_LIMIT ((sfVector2i) {7500, 75})

    /*      MENU BACKGROUND ENTITIES      */
    #define NB_ANIMATED_ENTITIES_MENU 2
    #define POS_X_PLANET_MENU 1950
    #define POS_Y_PLANET_MENU 550

    #define SCALE_X_PLANET_MENU 20
    #define SCALE_Y_PLANET_MENU 20

    /*      MENU BACKGROUND      */
    #define NB_SPRITES_MENU 2
    #define POS_X_BG_MENU 0
    #define POS_Y_BG_MENU 0
    #define SCALE_X_BG_MENU 7.5
    #define SCALE_Y_BG_MENU 7.5

    /*      MENU BUTTONS      */
    #define NB_BUTTONS_MENU 5
    #define POS_X_NEW_GAME_BUTTON 150
    #define POS_Y_NEW_GAME_BUTTON 300
    #define POS_X_LOAD_BUTTON 150
    #define POS_Y_LOAD_BUTTON 475
    #define POS_X_OPTIONS_BUTTON 150
    #define POS_Y_OPTIONS_BUTTON 650
    #define POS_X_EXIT_BUTTON 180
    #define POS_Y_EXIT_BUTTON 825
    #define SCALE_X_NEW_GAME_BUTTON 1.2
    #define SCALE_Y_NEW_GAME_BUTTON 1.2
    #define SCALE_X_LOAD_BUTTON 1.2
    #define SCALE_Y_LOAD_BUTTON 1.2
    #define SCALE_X_OPTIONS_BUTTON 1.2
    #define SCALE_Y_OPTIONS_BUTTON 1.2
    #define SCALE_X_EXIT_BUTTON 1
    #define SCALE_Y_EXIT_BUTTON 1

    /*      OPTIONS BACKGROUND ENTITIES      */
    #define NB_ANIMATED_ENTITIES_OPTIONS 2
    #define POS_X_PLANET_OPTIONS 1950
    #define POS_Y_PLANET_OPTIONS 550

    #define SCALE_X_PLANET_OPTIONS 20
    #define SCALE_Y_PLANET_OPTIONS 20

    /*      OPTIONS BACKGROUND      */
    #define NB_SPRITES_OPTIONS 2
    #define POS_X_BG_OPTIONS 0
    #define POS_Y_BG_OPTIONS 0
    #define SCALE_X_BG_OPTIONS 7.5
    #define SCALE_Y_BG_OPTIONS 7.5

    /*      OPTIONS BUTTONS      */
    #define NB_BUTTONS_OPTIONS 7
    #define POS_X_BACK_BUTTON_OPTIONS 30
    #define POS_Y_BACK_BUTTON_OPTIONS 30
    #define POS_X_MUSIC_ON_BUTTON 500
    #define POS_Y_MUSIC_ON_BUTTON 400
    #define POS_X_MUSIC_OFF_BUTTON 100
    #define POS_Y_MUSIC_OFF_BUTTON 400
    #define POS_X_SOUND_ON_BUTTON 500
    #define POS_Y_SOUND_ON_BUTTON 600
    #define POS_X_SOUND_OFF_BUTTON 100
    #define POS_Y_SOUND_OFF_BUTTON 600
    #define POS_X_KEYBINDS_BUTTON 170
    #define POS_Y_KEYBINDS_BUTTON 850
    #define SCALE_X_BACK_BUTTON_OPTIONS 3
    #define SCALE_Y_BACK_BUTTON_OPTIONS 3
    #define SCALE_X_MUSIC_ON_BUTTON 6
    #define SCALE_Y_MUSIC_ON_BUTTON 6
    #define SCALE_X_MUSIC_OFF_BUTTON 6
    #define SCALE_Y_MUSIC_OFF_BUTTON 6
    #define SCALE_X_SOUND_ON_BUTTON 6
    #define SCALE_Y_SOUND_ON_BUTTON 6
    #define SCALE_X_SOUND_OFF_BUTTON 6
    #define SCALE_Y_SOUND_OFF_BUTTON 6
    #define SCALE_X_KEYBINDS_BUTTON 1.2
    #define SCALE_Y_KEYBINDS_BUTTON 1.2

    /*      OPTIONS TEXTS      */
    #define NB_TEXTS_OPTIONS 4
    #define POS_X_MUSIC_TEXT 350
    #define POS_Y_MUSIC_TEXT 320
    #define SIZE_MUSIC_TEXT 50
    #define POS_X_SOUND_TEXT 350
    #define POS_Y_SOUND_TEXT 520
    #define SIZE_SOUND_TEXT 50
    #define POS_X_OPTIONS_TEXT 340
    #define POS_Y_OPTIONS_TEXT 130
    #define SIZE_OPTIONS_TEXT 100

    /*      OPTIONS SOUND RECTANGLES      */
    #define NB_SOUND_RECTANGLES 6
    #define BASE_POS_X_SOUND_RECT 230
    #define POS_Y_SOUND_RECT 670
    #define ORIGIN_X_SOUND_RECT 0
    #define ORIGIN_Y_SOUND_RECT 0
    #define SIZE_X_SOUND_RECT 30

    /*      OPTIONS MUSIC RECTANGLES      */
    #define NB_MUSIC_RECTANGLES 6
    #define BASE_POS_X_MUSIC_RECT 230
    #define POS_Y_MUSIC_RECT 470
    #define ORIGIN_X_MUSIC_RECT 0
    #define ORIGIN_Y_MUSIC_RECT 0
    #define SIZE_X_MUSIC_RECT 30

    /*      LOAD BACKGROUND ENTITIES      */
    #define NB_ANIMATED_ENTITIES_LOAD 2
    #define POS_X_PLANET_LOAD 1950
    #define POS_Y_PLANET_LOAD 550

    #define SCALE_X_PLANET_LOAD 20
    #define SCALE_Y_PLANET_LOAD 20

    /*      LOAD BACKGROUND      */
    #define NB_SPRITES_LOAD 2
    #define POS_X_BG_LOAD 0
    #define POS_Y_BG_LOAD 0
    #define SCALE_X_BG_LOAD 7.5
    #define SCALE_Y_BG_LOAD 7.5

    /*      LOAD BUTTONS      */
    #define NB_BUTTONS_LOAD 6
    #define POS_X_BACK_BUTTON_LOAD 30
    #define POS_Y_BACK_BUTTON_LOAD 30
    #define SCALE_X_BACK_BUTTON_LOAD 3
    #define SCALE_Y_BACK_BUTTON_LOAD 3

    /*      LOAD TEXTS      */
    #define NB_TEXTS_LOAD 2
    #define POS_X_LOAD_TEXT 340
    #define POS_Y_LOAD_TEXT 130
    #define SIZE_LOAD_TEXT 100
    #define POS_X_SOON_TEXT 473
    #define POS_Y_SOON_TEXT 540
    #define SIZE_SOON_TEXT 70

    /*      KEYBINDS BACKGROUND      */
    #define NB_SPRITES_KEYBINDS 2
    #define POS_X_BG_KEYBINDS 0
    #define POS_Y_BG_KEYBINDS 0
    #define SCALE_X_BG_KEYBINDS 1
    #define SCALE_Y_BG_KEYBINDS 1

    /*      KEYBINDS BACKGROUND ENTITIES      */
    #define NB_ANIMATED_ENTITIES_KEYBINDS 2
    #define POS_X_BLACK_HOLE_KEYBINDS 960
    #define POS_Y_BLACK_HOLE_KEYBINDS 540
    #define SCALE_X_BLACK_HOLE_KEYBINDS 4
    #define SCALE_Y_BLACK_HOLE_KEYBINDS 4
    #define BLACK_HOLE_KEYBINDS_HEIGHT 150
    #define BLACK_HOLE_KEYBINDS_WIDTH 150
    #define BLACK_HOLE_KEYBINDS_RECT 150
    #define BLACK_HOLE_KEYBINDS_RECT_LIMIT 15000
    #define BLACK_HOLE_ANIM_BOX ((sfIntRect) {0, 0, 150, 150})
    #define BLACK_HOLE_ANIM_MOVEMENT ((sfVector2i) {150, 0})
    #define BLACK_HOLE_ANIM_LIMIT ((sfVector2i) {15000, 0})

    #define BLACK_HOLE_KEYBINDS_SPEED 0.19

    /*      KEYBINDS BUTTONS      */
    #define NB_BUTTONS_KEYBINDS 8
    #define POS_X_BACK_BUTTON_KEYBINDS 30
    #define POS_Y_BACK_BUTTON_KEYBINDS 30
    #define SCALE_X_BACK_BUTTON_KEYBINDS 3
    #define SCALE_Y_BACK_BUTTON_KEYBINDS 3
    #define SCALE_KEYBINDS_BUTTONS ((sfVector2f){1.2, 1.2})
    #define POS_MOVE_UP_BUTTON ((sfVector2f){200, 250})
    #define POS_MOVE_LEFT_BUTTON ((sfVector2f){200, 450})
    #define POS_MOVE_RIGHT_BUTTON ((sfVector2f){200, 650})
    #define POS_MOVE_DOWN_BUTTON ((sfVector2f){200, 850})
    #define POS_INTERACT_BUTTON ((sfVector2f){1500, 450})
    #define POS_INVENTORY_BUTTON ((sfVector2f){1500, 650})

    /*      KEYBINDS SET KEYBINDS      */
    #define INDEX_RIGHT_BUTTONS 5
    #define POS_Y_KEY_BUTTON rpg->options->keybinds->buttons[*i]->pos.y
    #define SCALE_KEYBINDS_LONG_KEY ((sfVector2f){0.75, 0.75})
    #define POS_X_LEFT_KEYBINDS_LONG_KEY (370 - (len_key * 11))
    #define POS_Y_KEYBINDS_LONG_KEY 35
    #define SCALE_KEYBINDS_SHORT_KEY ((sfVector2f){1, 1})
    #define POS_X_LEFT_KEYBINDS_SHORT_KEY (368 - (len_key * 12))
    #define POS_Y_KEYBINDS_SHORT_KEY 32
    #define POS_X_RIGHT_KEYBINDS_LONG_KEY (1670 - (len_key * 11))
    #define POS_X_RIGHT_KEYBINDS_SHORT_KEY (1668 - (len_key * 12))

    /*      KEYBINDS TEXTS      */
    #define NB_TEXTS_KEYBINDS 8
    #define POS_X_TITLE_KEYBINDS 980
    #define POS_Y_TITLE_KEYBINDS 30
    #define SIZE_TITLE_KEYBINDS 100
    #define POS_X_MOVE_UP 370
    #define POS_Y_MOVE_UP 200
    #define SIZE_MOVE_UP 50
    #define POS_X_MOVE_LEFT 370
    #define POS_Y_MOVE_LEFT 400
    #define SIZE_MOVE_LEFT 50
    #define POS_X_MOVE_RIGHT 370
    #define POS_Y_MOVE_RIGHT 600
    #define SIZE_MOVE_RIGHT 50
    #define POS_X_MOVE_DOWN_TEXT 370
    #define POS_Y_MOVE_DOWN_TEXT 800
    #define POS_X_INTERACT_TEXT 1670
    #define POS_Y_INTERACT_TEXT 400
    #define POS_X_INVENTORY_TEXT 1670
    #define POS_Y_INVENTORY_TEXT 600
    #define SIZE_MOVE_DOWN_TEXT 50
    #define SIZE_INTERACT_TEXT 50
    #define SIZE_INVENTORY_TEXT 50

    /*        TUTORIAL SPRITES        */
    #define NB_SPRITES_TUTORIAL 1
    #define POS_X_KEYS_IMG 511.5
    #define POS_Y_KEYS_IMG 160
    #define SCALE_X_KEYS_IMG 1.5
    #define SCALE_Y_KEYS_IMG 1.5

    /*        TUTORIAL BUTTONS        */
    #define NB_BUTTONS_TUTORIAL 1
    #define POS_X_PLAY_BUTTON_TUTORIAL 872
    #define POS_Y_PLAY_BUTTON_TUTORIAL 780
    #define SCALE_X_PLAY_BUTTON_TUTORIAL 8
    #define SCALE_Y_PLAY_BUTTON_TUTORIAL 8

    /*         TUTORIAL TEXTS         */
    #define NB_TEXTS_TUTORIAL 6 // maybe 7 if you plan to add a title
    #define SIZE_TEXT_TUTORIAL 36

    #define POS_X_TEXT_KEY_MOV_UP 626
    #define POS_Y_TEXT_KEY_MOV_UP 260

    #define POS_X_TEXT_KEY_MOV_DOWN 626
    #define POS_Y_TEXT_KEY_MOV_DOWN 340

    #define POS_X_TEXT_KEY_MOV_LEFT 544
    #define POS_Y_TEXT_KEY_MOV_LEFT 340

    #define POS_X_TEXT_KEY_MOV_RIGHT 706
    #define POS_Y_TEXT_KEY_MOV_RIGHT 340

    #define POS_X_TEXT_KEY_OPEN_INV 983
    #define POS_Y_TEXT_KEY_OPEN_INV 297

    #define POS_X_TEXT_KEY_INTERACT 1319
    #define POS_Y_TEXT_KEY_INTERACT 297

    /*      CREATE BACKGROUND STARS      */
    #define MAX_BASE_NB_BG_STARS 30
    #define MIN_BASE_NB_BG_STARS 10
    #define MAX_X_WINDOW_SIZE 1920
    #define MIN_X_WINDOW_SIZE 0
    #define MAX_Y_WINDOW_SIZE 1080
    #define MIN_Y_WINDOW_SIZE 0
    #define MAX_SIZE_STARS 12
    #define MIN_SIZE_STARS 1
    #define ORIGIN_X_STARS 0
    #define ORIGIN_Y_STARS 0

    /*      CHANGE BACKGROUND STARS      */
    #define MAX_ALPHA 10
    #define MIN_ALPHA 5
    #define MIN_NB_STAR 1
    #define MIN_INDEX_STAR 1

    /*      CREATE BACKGROUND STARS      */
    #define MAX_NEW_STARS 3
    #define MIN_NEW_STARS 1

    /*      CREATE TEXT BOX      */
    #define MIDDLE_OF_SPRITE_WIDTH 2
    #define MIDDLE_OF_SPRITE_HEIGHT 2.3

    /*      CREATE GAME      */
    #define NB_KEYBINDS 7

    /*      STATS     */
    #define BASE_HP 40.0
    #define BASE_HP_MAX 40.0
    #define BASE_MANA 30.0
    #define BASE_MANA_MAX 30.0
    #define BASE_XP 0.0
    #define BASE_XP_MAX 100.0
    #define BASE_LEVEL 1.0


    /*      HANDLE EVENT FIGHTING MENU BUTTONS     */
    #define POS_X_ATTACK_BUTTON 500
    #define POS_Y_ATTACK_BUTTON 790
    #define POS_X_MAGIC_BUTTON 500
    #define POS_Y_MAGIC_BUTTON 865
    #define POS_X_HEAL_BUTTON 1000
    #define POS_Y_HEAL_BUTTON 790
    #define POS_X_ESCAPE_BUTTON 1000
    #define POS_Y_ESCAPE_BUTTON 865
    #define MIN_HP_HEAL 3
    #define MAX_HP_HEAL 10

    /*      HANDLE EVENT FIGHTING MAGIC BUTTONS     */
    #define POS_X_BACK_BUTTON 500
    #define POS_Y_BACK_BUTTON 790
    #define POS_X_POISONED_BUTTON 500
    #define POS_Y_POISONED_BUTTON 865
    #define POS_X_FIRE_BUTTON 1050
    #define POS_Y_FIRE_BUTTON 790
    #define POS_X_ICE_BUTTON 1050
    #define POS_Y_ICE_BUTTON 865

    /*      HANDLE EVENT FIGHTING ATTACK BUTTONS     */
    #define POS_X_CANCEL_BUTTON 480
    #define POS_Y_CANCEL_BUTTON 820

    /*      FIGHTING RECTANGLES     */
    #define NB_FIGHTING_RECTANGLES 3
    #define POS_PLAYER_BAR_HP ((sfVector2f){470, 220})
    #define ORIGIN_PLAYER_BAR_HP ((sfVector2f){0, 0})
    #define SIZE_PLAYER_BAR_HP ((sfVector2f){120, 20})

    /*      FIGHTING BACKGROUND (SPRITES)     */
    #define NB_FIGHTING_SPRITES 6
    #define POS_BG_FIGHTING_NINJA_BASIC ((sfVector2f){-300, -500})
    #define SCALE_BG_FIGHTING_NINJA_BASIC ((sfVector2f){3.6, 3.6})
    #define POS_BOX_FIGHTING ((sfVector2f){400, 750})
    #define SCALE_BOX_FIGHTING ((sfVector2f){3.5, 3.5})
    #define POS_PLAYER_FIGHTING ((sfVector2f){500, 280})
    #define SCALE_PLAYER_FIGHTING ((sfVector2f){5, 5})
    #define POS_ARROW_SELECT_FIGHTING ((sfVector2f){-333, -333})
    #define SCALE_ARROW_SELECT_FIGHTING ((sfVector2f){0.12, 0.12})

    /*      FIGHTING BUTTONS MENU     */
    #define NB_FIGHTING_MENU_BUTTONS 10
    #define POS_FIGHTING_ATTACK_MENU_BUTTONS ((sfVector2f){600, 785})
    #define SCALE_FIGHTING_ATTACK_MENU_BUTTONS ((sfVector2f){0.8, 0.8})
    #define POS_FIGHTING_MAGIC_MENU_BUTTONS ((sfVector2f){600, 860})
    #define SCALE_FIGHTING_MAGIC_MENU_BUTTONS ((sfVector2f){0.8, 0.8})
    #define POS_FIGHTING_HEAL_MENU_BUTTONS ((sfVector2f){1100, 785})
    #define SCALE_FIGHTING_HEAL_MENU_BUTTONS ((sfVector2f){0.8, 0.8})
    #define POS_FIGHTING_ESCAPE_MENU_BUTTONS ((sfVector2f){1100, 860})
    #define SCALE_FIGHTING_ESCAPE_MENU_BUTTONS ((sfVector2f){0.8, 0.8})

    /*      FIGHTING BUTTONS MAGIC     */
    #define NB_FIGHTING_MAGIC_BUTTONS 5
    #define POS_FIGHTING_BACK_BUTTONS ((sfVector2f){600, 785})
    #define SCALE_FIGHTING_BACK_BUTTONS ((sfVector2f){0.8, 0.8})
    #define POS_FIGHTING_POISONED_BUTTONS ((sfVector2f){600, 860})
    #define SCALE_FIGHTING_POISONED_BUTTONS ((sfVector2f){0.8, 0.8})
    #define POS_FIGHTING_FIRE_BUTTONS ((sfVector2f){1100, 785})
    #define SCALE_FIGHTING_FIRE_BUTTONS ((sfVector2f){0.8, 0.8})
    #define POS_FIGHTING_ICE_BUTTONS ((sfVector2f){1100, 860})
    #define SCALE_FIGHTING_ICE_BUTTONS ((sfVector2f){0.8, 0.8})
    #define RED_PURPLE 127
    #define GREEN_PURPLE 0
    #define BLUE_PURPLE 255

    /*      FIGHTING BUTTONS ATTACK     */
    #define POS_FIGHTING_CANCEL_BUTTONS ((sfVector2f){550, 815})
    #define SCALE_FIGHTING_CANCEL_BUTTONS ((sfVector2f){0.8, 0.8})

    /*      FIGHTING TEXTS     */
    #define NB_FIGHTING_TEXTS 7
    #define POS_X_FIGHTING_HP_TEXT 430
    #define POS_Y_FIGHTING_HP_TEXT 220
    #define SIZE_FIGHTING_HP_TEXT 30
    #define POS_X_SELECT_ENEMY_TEXT 1100
    #define POS_Y_SELECT_ENEMY_TEXT 840
    #define SIZE_SELECT_ENEMY_TEXT 50
    #define POS_X_POISONED_MANA_COST_TEXT 935
    #define POS_Y_POISONED_MANA_COST_TEXT 900
    #define SIZE_POISONED_MANA_COST_TEXT 17
    #define POS_X_FIRE_MANA_COST_TEXT 1360
    #define POS_Y_FIRE_MANA_COST_TEXT 830
    #define SIZE_FIRE_MANA_COST_TEXT 17
    #define POS_X_ICE_MANA_COST_TEXT 1360
    #define POS_Y_ICE_MANA_COST_TEXT 900
    #define SIZE_ICE_MANA_COST_TEXT 17
    #define POS_X_TURN_TEXT 500
    #define POS_Y_TURN_TEXT 980
    #define SIZE_TURN_TEXT 36

    /*      XP      */
    #define XP_GAIN_MIN 39
    #define XP_GAIN_MAX 45

    /*      HP COLORS      */
    #define HP_25_COLOR sfRed
    #define HP_50_COLOR sfColor_fromInteger(0XE69138FF)
    #define HP_75_COLOR sfYellow
    #define HP_100_COLOR sfGreen

    /*      NPC CHAT BUBBLE      */
    #define NPC_CHAT_BUBBLE_SCALE ((sfVector2f){ 0.75, 0.75 })
    #define NPC_CHAT_BUBBLE_BOX_MOVEMENT ((sfVector2i) { 20, 0 })
    #define NPC_CHAT_BUBBLE_BOX_LIMIT ((sfVector2i) { 80, 0 })
    #define NPC_CHAT_BUBBLE_BOX_ANIM_SPEED 0.3

    /*       DIALOG BOX       */
    #define DIALOG_BOX_POS ((sfVector2f){ 0, 0 })
    #define DIALOG_BOX_SCALE ((sfVector2f){ 0.75, 0.75 })
    #define DIALOG_BOX_NAME_POS ((sfVector2f){0, 0})
    #define DIALOG_BOX_NAME_SIZE 4
    #define DIALOG_BOX_DIALOG_POS ((sfVector2f){0, 0})
    #define DIALOG_BOX_DIALOG_SIZE 8

    /*      FIGHTING MUSICS     */
    #define NB_FIGHTING_MUSICS 4

    /*      FIGHTING SOUNDS     */
    #define NB_FIGHTING_SOUNDS 5

    /*      ESCAPE BACKGROUND      */
    #define NB_SPRITES_ESCAPE 2
    #define POS_X_BG_ESCAPE 0
    #define POS_Y_BG_ESCAPE 0
    #define SCALE_X_BG_ESCAPE 7.5
    #define SCALE_Y_BG_ESCAPE 7.5

#endif /* !CONSTANT_H_ */
