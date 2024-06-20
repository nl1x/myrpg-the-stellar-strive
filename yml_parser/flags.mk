##
## EPITECH PROJECT, 2023
## FLAGS_MK
## File description:
## Flags for Makefile
##

CFLAGS += -Wall
CFLAGS += -Wextra
CFLAGS += -MMD -MP

CFLAGS += -iquote ./include
CFLAGS += -iquote ./shuvlib/include
#CFLAGS += $(LDFLAGS)

LDFLAGS := -L ./shuvlib
LDFLAGS += -lshuv
LDFLAGS += -g # ! Only for debug
