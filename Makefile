##
## EPITECH PROJECT, 2023
## C-POOL
## File description:
## Makefile.c
## Author: nathan.jeannot@epitech.eu
##

## --- Optimisation ---

ifneq ($(shell find . -name ".fast"),)
	MAKEFLAGS += -j
endif

## --- Colors ---

RESET = "\033[00m"
BOLD = "\e[1m"

RED = "\e[31m"
GREEN = "\e[32m"
ORANGE = "\e[33m"
BLUE = "\e[34m"
PURPLE = "\e[35m"
CYAN = "\e[36m"
LIGHT_GRAY = "\e[37m"
DARK_GRAY = "\e[30m"
LIGHT_RED = "\e[31m"
LIGHT_GREEN = "\e[32m"
YELLOW = "\e[33m"
LIGHT_BLUE = "\e[34m"
LIGHT_PURPLE = "\e[35m"
LIGHT_CYAN = "\e[36m"
WHITE = "\e[37m"

## --- Project ---

ERRORS_LOG = .errors.log
NAME = my_rpg
LIB_NAME = lx
LIB = lib$(LIB_NAME).a
CODING_STYLE = coding-style . .
GREP = grep -q
VGCORE = vgcore.*

## --- Folders ---

F_LIB = lxlib
F_SRC = src
F_BIN = bin

## --- Flags ---

LDFLAGS = -L$(F_LIB) -l$(LIB_NAME) -lcsfml-system -lcsfml-window
LDFLAGS += -lcsfml-graphics -lm -lcsfml-audio
LDFLAGS += -L./yml_parser/ -lyml -L./yml_parser/shuvlib/ -lshuv
INCLUDE_FLAGS = -Iinclude -I$(F_LIB)/include -I./yml_parser/include/
INCLUDE_FLAGS += -I./yml_parser/shuvlib/include/
CFLAGS  = -Wall
CFLAGS += -Wextra
CFLAGS += $(INCLUDE_FLAGS)
CFLAGS += -MMD -MP

## --- Files ---

GARBAGE  = $(VGCORE)
GARBAGE += $(F_BIN)
GARBAGE += $(NAME)
GARBAGE += $(NAME)

SRC  = $(F_SRC)/main.c

SRC += $(F_SRC)/rpg/create_rpg.c \
		$(F_SRC)/rpg/draw_rpg_state.c \
		$(F_SRC)/rpg/destroy_rpg.c \
		$(F_SRC)/rpg/create_all_items.c

SRC += $(F_SRC)/window/display_window.c

SRC += $(F_SRC)/window/reset_window_view.c

SRC += $(F_SRC)/events/close_event.c \
		$(F_SRC)/events/handle_events.c

SRC += $(F_SRC)/sprite/create_sprite.c \
		$(F_SRC)/sprite/is_mouse_sprite.c \
		$(F_SRC)/sprite/sprite_collide_sprite.c \
		$(F_SRC)/sprite/sprite_collide_any.c

SRC += $(F_SRC)/Menus/mainMenu/create_menu.c \
		$(F_SRC)/Menus/mainMenu/clock_menu.c \
		$(F_SRC)/Menus/mainMenu/draw_menu.c \
		$(F_SRC)/Menus/mainMenu/destroy_menu.c \
		$(F_SRC)/Menus/mainMenu/handle_event_menu.c

SRC += $(F_SRC)/Menus/mainMenu/Background/create_menu_bg.c \
		$(F_SRC)/Menus/mainMenu/Background/draw_menu_bg.c

SRC += $(F_SRC)/Menus/mainMenu/Buttons/create_menu_buttons.c \
		$(F_SRC)/Menus/mainMenu/Buttons/draw_menu_buttons.c \
		$(F_SRC)/Menus/mainMenu/Buttons/handle_event_menu_buttons.c

SRC += $(F_SRC)/Menus/Options/create_options.c \
		$(F_SRC)/Menus/Options/clock_options.c \
		$(F_SRC)/Menus/Options/draw_options.c \
		$(F_SRC)/Menus/Options/destroy_options.c \
		$(F_SRC)/Menus/Options/handle_event_options.c

SRC += $(F_SRC)/Menus/Options/Background/create_options_bg.c \
		$(F_SRC)/Menus/Options/Background/draw_options_bg.c

SRC += $(F_SRC)/Menus/Options/Buttons/create_options_buttons.c \
		$(F_SRC)/Menus/Options/Buttons/draw_options_buttons.c \
		$(F_SRC)/Menus/Options/Buttons/handle_event_options_buttons.c

SRC += $(F_SRC)/Menus/Options/Text/create_options_texts.c \
		$(F_SRC)/Menus/Options/Text/draw_options_texts.c

SRC += $(F_SRC)/Menus/Options/Rectangles/create_options_rectangles.c \
		$(F_SRC)/Menus/Options/Rectangles/draw_options_rectangles.c

SRC += $(F_SRC)/Menus/Load/create_load.c \
		$(F_SRC)/Menus/Load/clock_load.c \
		$(F_SRC)/Menus/Load/draw_load.c \
		$(F_SRC)/Menus/Load/destroy_load.c \
		$(F_SRC)/Menus/Load/handle_event_load.c

SRC += $(F_SRC)/Menus/Load/Background/create_load_bg.c \
		$(F_SRC)/Menus/Load/Background/draw_load_bg.c

SRC += $(F_SRC)/Menus/Load/Buttons/create_load_buttons.c \
		$(F_SRC)/Menus/Load/Buttons/draw_load_buttons.c \
		$(F_SRC)/Menus/Load/Buttons/handle_event_load_buttons.c

SRC += $(F_SRC)/Menus/Load/Text/create_load_texts.c \
		$(F_SRC)/Menus/Load/Text/draw_load_texts.c

SRC += $(F_SRC)/Entity/create_entity.c \
		$(F_SRC)/Entity/destroy_entity.c \
		$(F_SRC)/Entity/draw_entity.c \
		$(F_SRC)/Entity/get_entity_velocity.c	\
		$(F_SRC)/Entity/get_entity_speed.c		\
		$(F_SRC)/Entity/get_entity_movement.c	\
		$(F_SRC)/Entity/set_entity_velocity.c	\
		$(F_SRC)/Entity/set_entity_velocity_x.c	\
		$(F_SRC)/Entity/set_entity_velocity_y.c \
		$(F_SRC)/Entity/set_entity_position.c \
		$(F_SRC)/Entity/apply_entity_movement.c

SRC += $(F_SRC)/Entity/animated_entity/create_animated_entity.c \
		$(F_SRC)/Entity/animated_entity/animate_entity.c \
		$(F_SRC)/Entity/animated_entity/draw_animated_entity.c \
		$(F_SRC)/Entity/animated_entity/destroy_animated_entity.c \
		$(F_SRC)/Entity/animated_entity/set_animation.c

SRC += $(F_SRC)/Entity/npc/create_npc.c \
	$(F_SRC)/Entity/npc/load_npcs.c \
	$(F_SRC)/Entity/npc/is_in_npc_range.c \
	$(F_SRC)/Entity/npc/npc_interact.c \
	$(F_SRC)/Entity/npc/actions/npc_hp_action.c \
	$(F_SRC)/Entity/npc/actions/npc_speak_action.c \
	$(F_SRC)/Entity/npc/destroy_npc.c

SRC += $(F_SRC)/Entity/area/create_area.c

SRC += $(F_SRC)/circle/create_circle.c

SRC += $(F_SRC)/Entity/animated_entity/animation/create_animation.c \
		$(F_SRC)/Entity/animated_entity/animation/destroy_animation.c

SRC += $(F_SRC)/Menus/Keybinds/create_keybinds.c \
		$(F_SRC)/Menus/Keybinds/draw_keybinds.c \
		$(F_SRC)/Menus/Keybinds/clock_keybinds.c \
		$(F_SRC)/Menus/Keybinds/destroy_keybinds.c \
		$(F_SRC)/Menus/Keybinds/handle_event_keybinds.c \
		$(F_SRC)/Menus/Keybinds/check_keybinds_already_used.c

SRC += $(F_SRC)/Menus/Keybinds/Background/create_keybinds_bg.c \
		$(F_SRC)/Menus/Keybinds/Background/draw_keybinds_bg.c

SRC += $(F_SRC)/Menus/Keybinds/Input/get_input.c \
		$(F_SRC)/Menus/Keybinds/Input/check_input.c

SRC += $(F_SRC)/Menus/Keybinds/Buttons/create_keybinds_buttons.c \
		$(F_SRC)/Menus/Keybinds/Buttons/draw_keybinds_buttons.c \
		$(F_SRC)/Menus/Keybinds/Buttons/handle_event_keybinds_buttons.c

SRC += $(F_SRC)/Menus/Keybinds/Text/create_keybinds_texts.c \
		$(F_SRC)/Menus/Keybinds/Text/draw_keybinds_texts.c

SRC += $(F_SRC)/Game/create_game.c \
		$(F_SRC)/Game/draw_game.c \
		$(F_SRC)/Game/create_game_keybinds.c \
		$(F_SRC)/Game/destroy_game.c \
		$(F_SRC)/Game/handle_game_music.c

SRC += $(F_SRC)/Game/UI/create_game_ui.c \
		$(F_SRC)/Game/UI/draw_game_ui.c \
		$(F_SRC)/Game/UI/set_game_ui_bars.c

SRC += $(F_SRC)/Game/UI/dialog/create_dialog.c \
		$(F_SRC)/Game/UI/dialog/destroy_dialog.c \
		$(F_SRC)/Game/UI/dialog/draw_dialog.c

SRC += $(F_SRC)/inventory/draw_inventory.c \
		$(F_SRC)/inventory/handle_inventory_event.c

SRC += $(F_SRC)/Menus/Background_stars/create_background_stars.c \
		$(F_SRC)/Menus/Background_stars/destroy_background_stars.c \
		$(F_SRC)/Menus/Background_stars/change_background_stars_color.c \
		$(F_SRC)/Menus/Background_stars/create_new_background_stars.c \
		$(F_SRC)/Menus/Background_stars/remove_background_stars.c

SRC += $(F_SRC)/Menus/tutorial/draw_tutorial.c \
	$(F_SRC)/Menus/tutorial/buttons/create_tutorial_buttons.c \
	$(F_SRC)/Menus/tutorial/buttons/draw_tutorial_buttons.c \
	$(F_SRC)/Menus/tutorial/buttons/handle_event_tutorial_buttons.c \
	$(F_SRC)/Menus/tutorial/create_tutorial.c \
	$(F_SRC)/Menus/tutorial/destroy_tutorial.c \
	$(F_SRC)/Menus/tutorial/images/create_tutorial_images.c \
	$(F_SRC)/Menus/tutorial/images/draw_tutorial_images.c \
	$(F_SRC)/Menus/tutorial/texts/create_tutorial_texts.c \
	$(F_SRC)/Menus/tutorial/texts/draw_tutorial_texts.c \
	$(F_SRC)/Menus/tutorial/background/create_tutorial_background.c \
	$(F_SRC)/Menus/tutorial/background/draw_tutorial_background.c

SRC += $(F_SRC)/new_game/create_new_game.c \
		$(F_SRC)/new_game/draw_new_game.c \
		$(F_SRC)/new_game/handle_new_game_event.c \
		$(F_SRC)/new_game/destroy_new_game.c

SRC += $(F_SRC)/new_game/Background/create_new_game_bg.c \
		$(F_SRC)/new_game/Background/draw_new_game_bg.c

SRC += $(F_SRC)/button/create_button.c \
		$(F_SRC)/button/is_mouse_button.c \
		$(F_SRC)/button/list_buttons.c \
		$(F_SRC)/button/is_activated.c \
		$(F_SRC)/button/is_clicked.c \
		$(F_SRC)/button/create_text_button.c \
		$(F_SRC)/button/destroy_button.c \
		$(F_SRC)/button/destroy_button_path.c

SRC += $(F_SRC)/text/text_box/create_text_box.c \
		$(F_SRC)/text/text_box/draw_text_box.c \
		$(F_SRC)/text/text_box/set_text_text_box.c \
		$(F_SRC)/text/text_box/destroy_text_box.c

SRC += $(F_SRC)/text/create_text.c \
		$(F_SRC)/text/destroy_text.c \
		$(F_SRC)/text/create_format.c \
		$(F_SRC)/text/destroy_format.c

SRC += $(F_SRC)/rectangle/create_rectangle.c \
		$(F_SRC)/rectangle/is_mouse_rectangle.c \
		$(F_SRC)/rectangle/is_rect_clicked.c

SRC += $(F_SRC)/Clock/destroy_clock.c

SRC += $(F_SRC)/music/create_music.c \
		$(F_SRC)/music/destroy_music.c \
		$(F_SRC)/music/play_random_music.c

SRC += $(F_SRC)/sound/create_sound.c \
		$(F_SRC)/sound/destroy_sound.c \
		$(F_SRC)/sound/play_random_sound.c

SRC += $(F_SRC)/camera/create_camera.c
SRC += $(F_SRC)/camera/delete_camera.c
SRC += $(F_SRC)/camera/move_camera.c
SRC += $(F_SRC)/camera/zoom_camera.c
SRC += $(F_SRC)/camera/update_camera.c
SRC += $(F_SRC)/camera/get_camera_bounds.c
SRC += $(F_SRC)/camera/set_camera_center.c

SRC += $(F_SRC)/map/load_map.c
SRC += $(F_SRC)/map/delete_map.c
SRC += $(F_SRC)/map/get_other_location.c
SRC += $(F_SRC)/map/draw_map.c

SRC += $(F_SRC)/map/location/new_location.c
SRC += $(F_SRC)/map/location/delete_location.c

SRC += $(F_SRC)/map/spawn/new_spawn.c
SRC += $(F_SRC)/map/spawn/get_spawn.c
SRC += $(F_SRC)/map/spawn/delete_spawn.c

SRC += $(F_SRC)/map/house/new_house.c
SRC += $(F_SRC)/map/house/delete_house.c

SRC += $(F_SRC)/map/combat_zone/new_combat_zone.c
SRC += $(F_SRC)/map/combat_zone/delete_combat_zone.c

SRC += $(F_SRC)/file/read_file.c

SRC += $(F_SRC)/error_handling/verificator_assets.c
SRC += $(F_SRC)/error_handling/print_file_not_found.c

SRC += $(F_SRC)/Player/create_player.c 	\
	   $(F_SRC)/Player/destroy_player.c	\
	   $(F_SRC)/Player/get_player_velocity.c	\
	   $(F_SRC)/Player/get_player_speed.c		\
	   $(F_SRC)/Player/set_player_velocity.c	\
	   $(F_SRC)/Player/set_player_velocity_x.c	\
	   $(F_SRC)/Player/set_player_velocity_y.c	\
	   $(F_SRC)/Player/set_player_position.c	\
	   $(F_SRC)/Player/handle_houses.c			\
	   $(F_SRC)/Player/handle_combat_zones.c	\
	   $(F_SRC)/Player/handle_player_movement.c	\
	   $(F_SRC)/Player/draw_player.c

SRC += $(F_SRC)/combat/combat_attack.c 	\
	   $(F_SRC)/combat/destroy_combat.c	\
	   $(F_SRC)/combat/is_combat_over.c	\
	   $(F_SRC)/combat/combat_self_damage.c		\
	   $(F_SRC)/combat/combat_get_enemy.c	\
	   $(F_SRC)/combat/combat_add_enemy.c \
	   $(F_SRC)/combat/create_combat.c

SRC += $(F_SRC)/enemy/create_enemy.c 	\
	   $(F_SRC)/enemy/destroy_enemy.c	\
	   $(F_SRC)/enemy/enemy_update_rectangle.c \
	   $(F_SRC)/enemy/text/create_enemy_damage_text.c \
	   $(F_SRC)/enemy/text/destroy_enemy_damage_text.c \
	   $(F_SRC)/enemy/draw_enemy.c \
	   $(F_SRC)/enemy/get_hp_color.c

SRC += $(F_SRC)/Player/Stats/create_stats.c

SRC += $(F_SRC)/tmx/get_tmx_collision_rect.c
SRC += $(F_SRC)/tmx/get_tmx_spawnpoint.c
SRC += $(F_SRC)/tmx/get_tmx_houses.c
SRC += $(F_SRC)/tmx/get_tmx_combat.c
SRC += $(F_SRC)/tmx/get_tmx_rect.c
SRC += $(F_SRC)/tmx/get_tmx_vector.c
SRC += $(F_SRC)/tmx/get_tmx_type.c

SRC += $(F_SRC)/Fighting/create_fighting.c \
		$(F_SRC)/Fighting/draw_fighting.c \
		$(F_SRC)/Fighting/handle_fighting_events.c \
		$(F_SRC)/Fighting/destroy_fighting.c

SRC += $(F_SRC)/Fighting/Background/create_fighting_bg.c \
	$(F_SRC)/Fighting/Background/draw_fighting_bg.c

SRC += $(F_SRC)/Fighting/Music_and_Sound/create_fighting_musics.c \
		$(F_SRC)/Fighting/Music_and_Sound/create_fighting_sounds.c \
		$(F_SRC)/Fighting/Music_and_Sound/handle_fighting_musics.c \
		$(F_SRC)/Fighting/Music_and_Sound/handle_fighting_sounds.c

SRC += $(F_SRC)/Fighting/Buttons/create_fighting_buttons.c \
	$(F_SRC)/Fighting/Buttons/draw_fighting_buttons.c \
	$(F_SRC)/Fighting/Buttons/handle_event_fighting_buttons.c \
	$(F_SRC)/Fighting/Buttons/fighting_buttons_actions.c \
	$(F_SRC)/Fighting/Buttons/fighting_buttons_magic_actions.c

SRC += $(F_SRC)/Fighting/Rectangles/create_fighting_rectangles.c \
	$(F_SRC)/Fighting/Rectangles/draw_fighting_rectangles.c \
	$(F_SRC)/Fighting/Rectangles/update_player_rectangle.c

SRC += $(F_SRC)/Fighting/Text/create_fighting_texts.c \
	$(F_SRC)/Fighting/Text/draw_fighting_texts.c \
	$(F_SRC)/Fighting/Text/create_fighting_player_text.c \
	$(F_SRC)/Fighting/Text/destroy_fighting_player_text.c \
	$(F_SRC)/Fighting/Text/update_turn_text.c

SRC += $(F_SRC)/Menus/Escape/create_escape.c \
		$(F_SRC)/Menus/Escape/draw_escape.c \
		$(F_SRC)/Menus/Escape/handle_events_escape.c

SRC += $(F_SRC)/Menus/Escape/Background/create_escape_bg.c \
		$(F_SRC)/Menus/Escape/Background/draw_escape_bg.c

SRC += $(F_SRC)/Menus/Escape/Buttons/create_escape_buttons.c \
		$(F_SRC)/Menus/Escape/Buttons/draw_escape_buttons.c \
		$(F_SRC)/Menus/Escape/Buttons/event_escape_buttons.c

OBJ = $(SRC:%.c=bin/%.o)

DEP := $(OBJ:%.o=%.d)

## --- Rules ---

all: $(LIB)
	@ $(MAKE) -s $(NAME)
	@ $(MAKE) -s show_errors

coding_style:
	@ echo -n -e $(BOLD)$(BLUE)"CODING STYLE... "$(RESET)
	@ set -e; 															\
	$(CODING_STYLE) | $(GREP) "0 coding style error(s)" && 				\
	echo -e $(BOLD)$(GREEN)"DONE"$(RESET) || 							\
	echo -e $(BOLD)$(RED)"FAILED"$(RESET) 								\
		&& cat coding-style-reports.log

$(NAME): $(OBJ)
	@ echo -n -e $(BOLD)$(BLUE)$(NAME)"... "
	@ $(CC) -o $(NAME) $(OBJ) $(LDFLAGS) $(CFLAGS) 2>>$(ERRORS_LOG) && 	\
	echo -e $(BOLD)$(GREEN)"DONE"$(RESET) 							||	\
	echo -e $(BOLD)$(RED)"FAILED"$(RESET)

$(LIB):
	@ $(MAKE) -sC $(F_LIB)
	@ $(MAKE) -sC yml_parser

show_errors:
	@ (cat $(ERRORS_LOG) 									\
	&& $(RM) $(ERRORS_LOG)) 								\
	|| echo $(BOLD)$(RED)"No error to show..."$(RESET)

debug:
	@ $(MAKE) -sC $(F_LIB) debug_flag=-g3
	@ $(MAKE) -sC yml_parser debug_flag=-g3
	@ echo -n -e $(BOLD)$(PURPLE)DEBUGGING $(NAME)"... "
	@ $(CC) -o $(NAME) $(SRC) $(LDFLAGS) $(CFLAGS) -g3 2>>$(ERRORS_LOG)  	\
	&& echo -e $(BOLD)$(GREEN)"DONE"$(RESET) 								\
	|| echo -e $(BOLD)$(RED)"FAILED"$(RESET)

bin/%.o: %.c
	@ mkdir -p $(dir $@)
	@ $(CC) $(CFLAGS) $(debug_flag) -c -o $@ $< 2>>$(ERRORS_LOG)	 	\
	&& echo -e $(BOLD)$(GREEN)"[OK] "$(RESET)$(LIGHT_CYAN)$<$(RESET)   	\
	|| echo -e $(BOLD)$(RED)"[KO] "$(RESET)$(CYAN)$<$(RESET)

clean:
	@ echo -n -e $(BOLD)$(BLUE)"CLEAN... "$(RESET)
	@ $(MAKE) -sC $(F_LIB) clean 1>/dev/null
	@ $(MAKE) -sC yml_parser clean 1>/dev/null
	@ $(RM) $(OBJ) $(DEP)  											\
	&& echo -e $(BOLD)$(GREEN)"DONE"$(RESET)  						\
	|| echo -e $(BOLD)$(RED)"FAILED"$(RESET)

fclean: clean
	@ echo -n -e $(BOLD)$(BLUE)"FCLEAN... "$(RESET)
	@ $(MAKE) -sC $(F_LIB) fclean 1>/dev/null
	@ $(MAKE) -sC yml_parser fclean 1>/dev/null
	@ $(RM) -r $(F_BIN) $(NAME)  										\
	&& echo -e $(BOLD)$(GREEN)"DONE"$(RESET)  							\
	|| echo -e $(BOLD)$(RED)"FAILED"$(RESET)

tests_run:

re: fclean
	@ $(MAKE) -s all

.PHONY: all coding_style debug clean fclean re

-include $(DEP)
