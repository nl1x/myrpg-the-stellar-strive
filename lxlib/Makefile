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

DEFAULT = "\033[00m"
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

COL_OK = $(DEFAULT)$(BOLD)$(GREEN)
COL_OK_FILE = $(DEFAULT)$(LIGHT_CYAN)
COL_KO = $(DEFAULT)$(BOLD)$(RED)
COL_KO_FILE = $(DEFAULT)$(LIGHT_RED)
COL_DONE = $(DEFAULT)$(BOLD)$(GREEN)
COL_FAIL = $(DEFAULT)$(BOLD)$(RED)
COL_RULE = $(BOLD)$(BLUE)

## --- Project ---

LIB_NAME = lx
NAME = lib$(LIB_NAME).a
TESTS_NAME = test-$(LIB_NAME)lib
CODING_STYLE = coding-style . .
GREP = grep -q
CRITERION_FILES = *.gcda *.gcno
LOG_FILES = *.log

## --- Folders ---

F_DEST = .
F_BIN = bin

F_SRC = src
F_ARRAY = $(F_SRC)/array
F_CHAR = $(F_SRC)/char
F_CSFML = $(F_SRC)/csfml
F_INT = $(F_SRC)/int
F_LIST = $(F_SRC)/list
F_MATH = $(F_SRC)/math
F_MEMORY = $(F_SRC)/memory
F_PRINTF = $(F_SRC)/printf
F_PUT = $(F_SRC)/put
F_STR = $(F_SRC)/str

F_TESTS = tests

## --- Garbage ---

GARBAGE  = $(F_BIN)
GARBAGE += $(F_DEST)/$(NAME)
GARBAGE += $(CRITERION_FILES)
GARBAGE += $(LOG_FILES)

## --- Flags ---

CFLAGS  = -Wall
CFLAGS += -Wextra
CFLAGS += -Werror
CFLAGS += -I include/
CFLAGS += -MMD -MP

TESTS_FLAGS = --coverage -lcriterion -llx -L.

## --- Files ---

# array
S_ARRAY  = $(F_ARRAY)/lx_array_fromstr.c
S_ARRAY += $(F_ARRAY)/array_add.c
S_ARRAY += $(F_ARRAY)/array_copy.c
S_ARRAY += $(F_ARRAY)/array_delete.c
S_ARRAY += $(F_ARRAY)/array_dump.c
S_ARRAY += $(F_ARRAY)/array_fromstr.c
S_ARRAY += $(F_ARRAY)/array_fromtab.c
S_ARRAY += $(F_ARRAY)/array_insert.c
S_ARRAY += $(F_ARRAY)/array_leftshift.c
S_ARRAY += $(F_ARRAY)/array_new.c
S_ARRAY += $(F_ARRAY)/array_remove.c
S_ARRAY += $(F_ARRAY)/array_resize.c
S_ARRAY += $(F_ARRAY)/array_set.c

# char
S_CHAR  = $(F_CHAR)/lx_char_isdigit.c
S_CHAR += $(F_CHAR)/lx_char_isletter.c
S_CHAR += $(F_CHAR)/lx_char_islower.c
S_CHAR += $(F_CHAR)/lx_char_isprintable.c
S_CHAR += $(F_CHAR)/lx_char_isupper.c
S_CHAR += $(F_CHAR)/lx_char_swap.c
S_CHAR += $(F_CHAR)/lx_char_tolower.c
S_CHAR += $(F_CHAR)/lx_char_toupper.c

# csfml
S_CSFML  = $(F_CSFML)/children/lx_children_add.c
S_CSFML += $(F_CSFML)/children/lx_children_new.c
S_CSFML += $(F_CSFML)/children/lx_children_remove.c

S_CSFML += $(F_CSFML)/clock/lx_clock_get_ms.c
S_CSFML += $(F_CSFML)/clock/lx_clock_get_sec.c
S_CSFML += $(F_CSFML)/clock/lx_clock_new.c
S_CSFML += $(F_CSFML)/clock/lx_clock_restart.c

S_CSFML += $(F_CSFML)/frames/lx_frame_destroy.c
S_CSFML += $(F_CSFML)/frames/lx_frame_display.c
S_CSFML += $(F_CSFML)/frames/lx_frame_get.c
S_CSFML += $(F_CSFML)/frames/lx_frame_new.c
S_CSFML += $(F_CSFML)/frames/lx_frame_set_background.c

S_CSFML += $(F_CSFML)/mode/lx_mode_new.c

S_CSFML += $(F_CSFML)/rects/lx_rect_move.c
S_CSFML += $(F_CSFML)/rects/lx_rect_new.c
S_CSFML += $(F_CSFML)/rects/lx_rect_place.c

S_CSFML += $(F_CSFML)/sprites/lx_sprite_collide.c
S_CSFML += $(F_CSFML)/sprites/lx_sprite_collide_point.c
S_CSFML += $(F_CSFML)/sprites/lx_sprite_destroy.c
S_CSFML += $(F_CSFML)/sprites/lx_sprite_display.c
S_CSFML += $(F_CSFML)/sprites/lx_sprite_list_collide_point.c
S_CSFML += $(F_CSFML)/sprites/lx_sprite_move.c
S_CSFML += $(F_CSFML)/sprites/lx_sprite_movedt.c
S_CSFML += $(F_CSFML)/sprites/lx_sprite_new.c
S_CSFML += $(F_CSFML)/sprites/lx_sprite_scale.c
S_CSFML += $(F_CSFML)/sprites/lx_sprite_setpos.c
S_CSFML += $(F_CSFML)/sprites/lx_sprite_texture_resize.c
S_CSFML += $(F_CSFML)/sprites/lx_sprite_texture_set.c
S_CSFML += $(F_CSFML)/sprites/lx_sprite_texture_update.c

S_CSFML += $(F_CSFML)/text/lx_text_destroy.c
S_CSFML += $(F_CSFML)/text/lx_text_display.c
S_CSFML += $(F_CSFML)/text/lx_text_move.c
S_CSFML += $(F_CSFML)/text/lx_text_new.c
S_CSFML += $(F_CSFML)/text/lx_text_set_color.c
S_CSFML += $(F_CSFML)/text/lx_text_set_value.c

S_CSFML += $(F_CSFML)/vector/lx_vector2f.c
S_CSFML += $(F_CSFML)/vector/lx_vector_length.c

S_CSFML += $(F_CSFML)/window/lx_win_close.c
S_CSFML += $(F_CSFML)/window/lx_win_destroy.c
S_CSFML += $(F_CSFML)/window/lx_win_display.c
S_CSFML += $(F_CSFML)/window/lx_win_is_open.c
S_CSFML += $(F_CSFML)/window/lx_win_new.c
S_CSFML += $(F_CSFML)/window/lx_win_poll_event.c
S_CSFML += $(F_CSFML)/window/lx_win_switch_frame.c

# int
S_INT  = $(F_INT)/lx_int_fromstr.c
S_INT += $(F_INT)/lx_int_getbase.c
S_INT += $(F_INT)/lx_int_getdigit.c
S_INT += $(F_INT)/lx_int_isprime.c
S_INT += $(F_INT)/lx_int_len.c
S_INT += $(F_INT)/lx_int_setdigit.c
S_INT += $(F_INT)/get_random_number.c

# list
S_LIST  = $(F_LIST)/lx_list_append.c
S_LIST += $(F_LIST)/lx_list_destroy.c
S_LIST += $(F_LIST)/lx_list_find.c
S_LIST += $(F_LIST)/lx_list_get.c
S_LIST += $(F_LIST)/lx_list_insert.c
S_LIST += $(F_LIST)/lx_list_merge.c
S_LIST += $(F_LIST)/lx_list_new.c
S_LIST += $(F_LIST)/lx_list_push.c
S_LIST += $(F_LIST)/lx_list_pushcondition.c
S_LIST += $(F_LIST)/lx_list_quicksort.c
S_LIST += $(F_LIST)/lx_list_remove.c
S_LIST += $(F_LIST)/lx_list_reverse.c
S_LIST += $(F_LIST)/lx_list_swap.c

# math
S_MATH  = $(F_MATH)/lx_pow.c
S_MATH += $(F_MATH)/lx_sqrt.c

# memory
S_MEMORY  = $(F_MEMORY)/lx_readlink.c

# lx_printf
S_PRINTF  = $(F_PRINTF)/lx_printf.c
S_PRINTF += $(F_PRINTF)/get_tab.c
S_PRINTF += $(F_PRINTF)/get_conv_tab.c

S_PRINTF += $(F_PRINTF)/parser/parser.c
S_PRINTF += $(F_PRINTF)/parser/parser_conversion.c
S_PRINTF += $(F_PRINTF)/parser/parser_flag.c
S_PRINTF += $(F_PRINTF)/parser/parser_length_modifier.c
S_PRINTF += $(F_PRINTF)/parser/parser_precision.c
S_PRINTF += $(F_PRINTF)/parser/parser_width.c

S_PRINTF += $(F_PRINTF)/handler/conversion/handle_binary.c
S_PRINTF += $(F_PRINTF)/handler/conversion/handle_char.c
S_PRINTF += $(F_PRINTF)/handler/conversion/handle_double.c
S_PRINTF += $(F_PRINTF)/handler/conversion/handle_e.c
S_PRINTF += $(F_PRINTF)/handler/conversion/handle_hexa.c
S_PRINTF += $(F_PRINTF)/handler/conversion/handle_int.c
S_PRINTF += $(F_PRINTF)/handler/conversion/handle_n.c
S_PRINTF += $(F_PRINTF)/handler/conversion/handle_octal.c
S_PRINTF += $(F_PRINTF)/handler/conversion/handle_percent.c
S_PRINTF += $(F_PRINTF)/handler/conversion/handle_pointer.c
S_PRINTF += $(F_PRINTF)/handler/conversion/handle_str.c

S_PRINTF += $(F_PRINTF)/handler/flags/handle_flag_minus.c
S_PRINTF += $(F_PRINTF)/handler/flags/handle_flag_minus_c.c
S_PRINTF += $(F_PRINTF)/handler/flags/handle_flag_minus_d.c
S_PRINTF += $(F_PRINTF)/handler/flags/handle_flag_minus_f.c
S_PRINTF += $(F_PRINTF)/handler/flags/handle_flag_minus_o.c
S_PRINTF += $(F_PRINTF)/handler/flags/handle_flag_minus_s.c
S_PRINTF += $(F_PRINTF)/handler/flags/handle_flag_minus_x.c

S_PRINTF += $(F_PRINTF)/handler/precision/handle_precision.c
S_PRINTF += $(F_PRINTF)/handler/precision/handle_precision_d.c
S_PRINTF += $(F_PRINTF)/handler/precision/handle_precision_s.c

S_PRINTF += $(F_PRINTF)/handler/width/handle_width.c
S_PRINTF += $(F_PRINTF)/handler/width/handle_width_char.c
S_PRINTF += $(F_PRINTF)/handler/width/handle_width_double.c
S_PRINTF += $(F_PRINTF)/handler/width/handle_width_int.c
S_PRINTF += $(F_PRINTF)/handler/width/handle_width_str.c

# put
S_PUT  = $(F_PUT)/lx_put_char.c
S_PUT += $(F_PUT)/lx_put_double.c
S_PUT += $(F_PUT)/lx_put_err.c
S_PUT += $(F_PUT)/lx_put_int.c
S_PUT += $(F_PUT)/lx_put_str.c

# str
S_STR  = $(F_STR)/lx_int_to_str.c
S_STR += $(F_STR)/lx_str_calloc.c
S_STR += $(F_STR)/lx_str_capitalize.c
S_STR += $(F_STR)/lx_str_cat.c
S_STR += $(F_STR)/lx_str_catn.c
S_STR += $(F_STR)/lx_str_cmp.c
S_STR += $(F_STR)/lx_str_cmpn.c
S_STR += $(F_STR)/lx_str_contains.c
S_STR += $(F_STR)/lx_str_copy.c
S_STR += $(F_STR)/lx_str_copyn.c
S_STR += $(F_STR)/lx_str_count.c
S_STR += $(F_STR)/lx_str_find.c
S_STR += $(F_STR)/lx_str_isalpha.c
S_STR += $(F_STR)/lx_str_islower.c
S_STR += $(F_STR)/lx_str_isnum.c
S_STR += $(F_STR)/lx_str_isprintable.c
S_STR += $(F_STR)/lx_str_isupper.c
S_STR += $(F_STR)/lx_str_len.c
S_STR += $(F_STR)/lx_str_new.c
S_STR += $(F_STR)/lx_str_realloc.c
S_STR += $(F_STR)/lx_str_reverse.c
S_STR += $(F_STR)/lx_str_startswith.c
S_STR += $(F_STR)/lx_str_sub.c
S_STR += $(F_STR)/lx_str_tolower.c
S_STR += $(F_STR)/lx_str_toupper.c

SRC  = $(S_ARRAY)
SRC += $(S_CHAR)
SRC += $(S_CSFML)
SRC += $(S_INT)
SRC += $(S_LIST)
SRC += $(S_MATH)
SRC += $(S_MEMORY)
SRC += $(S_PRINTF)
SRC += $(S_PUT)
SRC += $(S_STR)

OBJ = $(SRC:%.c=bin/%.o)

DEP := $(OBJ:.o=.d)

## --- Rules ---

all: $(NAME)

coding_style:
	@ echo -n -e $(COL_RULE)"coding style... "$(DEFAULT)
	@ set -e; 													\
	$(CODING_STYLE) | $(GREP) "0 coding style error(s)"  		\
	&& echo -e $(COL_DONE)"DONE"$(DEFAULT)  					\
	|| echo -e $(COL_FAIL)"FAILED"$(DEFAULT) 					\
		&& cat coding-style-reports.log

$(NAME): $(OBJ)
	@ echo -n -e $(COL_RULE)$(NAME)"... "
	@ $(AR) rc $(F_DEST)/$(NAME) $(OBJ)  					\
	&& echo -e $(COL_DONE)"DONE"$(DEFAULT)  				\
	|| echo -e $(COL_FAIL)"FAILED"$(DEFAULT)

bin/%.o: %.c
	@ mkdir -p $(dir $@)
	@ $(CC) $(CFLAGS) $(debug_flag) -c -o $@ $<  				\
	&& echo -e $(COL_OK)"[OK] "$(COL_OK_FILE)$<$(DEFAULT) 		\
	|| echo -e $(COL_KO)"[KO] "$(COL_KO_FILE)$<$(DEFAULT)

run_tests: $(NAME)
	$(CC) $(TESTS_SRC) -o $(TESTS_NAME) $(CFLAGS) $(TESTS_FLAGS)
	./$(TESTS_NAME) --always-succeed
	$(GCOVR) --exclude tests/

clean:
	@ echo -n -e $(COL_RULE)"clean... "$(DEFAULT)
	@ $(RM) $(OBJ) $(DEP)  												\
	&& echo -e $(COL_DONE)"DONE"$(DEFAULT)  							\
	|| echo -e $(COL_FAIL)"FAILED"$(DEFAULT)

fclean: clean
	@ echo -n -e $(COL_RULE)"fclean... "$(DEFAULT)
	@ $(RM) -r $(F_BIN) $(F_DEST)/$(NAME) $(CRITERION_FILES) $(LOG_FILES) 	\
	&& echo -e $(COL_DONE)"DONE"$(DEFAULT)  							\
	|| echo -e $(COL_FAIL)"FAILED"$(DEFAULT)

re: fclean
	@ $(MAKE) -s all

.PHONY: all coding_style run_tests clean fclean re

-include $(DEP)
