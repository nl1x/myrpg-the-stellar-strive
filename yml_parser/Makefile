##
## EPITECH PROJECT, 2023
## MAKEFILE
## File description:
## Makefile for the YML parser
##

NAME = libyml

include sources.mk
include flags.mk

vpath %.c $(VPATH)

BUILD_DIR := .build

LIB_DIR := shuvlib

OBJ := $(SRC:%.c=$(BUILD_DIR)/%.o)
DEP := $(OBJ:%.o=$(BUILD_DIR)/%.d)

.SUFFIXES: .d

ifneq ($(shell find . -name ".fast"),)
	MAKEFLAGS += -j
endif

## ---------------- ##
##    Color codes   ##
## ---------------- ##

BLACK   = "\e[30m" #
RED     = "\e[31m" #
GREEN   = "\e[32m" #
YELLOW  = "\e[33m" #  Standard
BLUE    = "\e[34m" #  colors
MAGENTA = "\e[35m" #
CYAN    = "\e[36m" #
WHITE   = "\e[37m" #

BGT_BLACK   = "\e[90m" #
BGT_RED     = "\e[91m" #
BGT_GREEN   = "\e[92m" #
BGT_YELLOW  = "\e[93m" #  Bright
BGT_BLUE    = "\e[94m" #  colors
BGT_MAGENTA = "\e[95m" #
BGT_CYAN    = "\e[96m" #
BGT_WHITE   = "\e[97m" #

BOLD      = "\e[1m" #
ITALIC    = "\e[3m" #  Text decorations
UNDERLINE = "\e[4m" #

RESET = "\e[0m"

## -------------- ##
##      Rules     ##
## -------------- ##

all: build_lib $(NAME)

build_lib:
	@ echo -e $(BOLD) $(YELLOW) "Building Shuvlib..." $(RESET)
	@ make -s -C $(LIB_DIR)

$(NAME): $(OBJ)
	@ ar rc $(NAME).a $(OBJ) && \
	echo -e $(BOLD) $(BGT_GREEN) "Project successfully built!" $(RESET) || \
	echo -e $(BOLD) $(RED) "Project failed to build." $(RESET)

$(BUILD_DIR)/%.o: %.c
	@ mkdir -p $(dir $@)
	@ $(CC) $(CFLAGS) -o $@ -c $< $(LDFLAGS) && \
	echo -e $(BOLD) $(BGT_GREEN) "[OK]" $(RESET) $< || \
	echo -e $(BOLD) $(RED) "[FAIL]" $(RESET) $<

clean:
	@ $(RM) $(OBJ) && $(RM) $(DEP) && \
	echo -e $(BOLD) $(BGT_GREEN) "Project successfully cleaned!" $(RESET) || \
	echo -e $(BOLD) $(RED) "Project failed to clean." $(RESET)
	@ make -s -C $(LIB_DIR) clean

fclean: clean
	@ $(RM) $(NAME)
	@ $(RM) -r $(BUILD_DIR)
	@ make -s -C $(LIB_DIR) fclean

re: fclean
	@ make -s -C $(LIB_DIR) re
	@ make all

tests_run: re
	@ gcc -o test tests/test.c -I include -I shuvlib/include \
		-L . -lyml -L shuvlib -lshuv

-include $(DEP)
