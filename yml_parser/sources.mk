##
## EPITECH PROJECT, 2023
## SOURCES_MK
## File description:
## Sources for Makefile
##

VPATH += src/

### YML ###
SRC += yml/yml_create_from_file.c \
	yml/yml_create_from_string.c \
	yml/yml_dump.c \
	yml/yml_destroy.c \
	yml/find/yml_find_node_from_path.c \
	yml/yml_save.c

### GETTERS ###
SRC += yml/getters/yml_get_int.c \
	yml/getters/yml_get_str.c \
	yml/getters/yml_get_float.c \
	yml/getters/yml_get_children_n.c \
	yml/getters/yml_get_list.c

### SETTERS ###
SRC += yml/setters/yml_set_int.c \
	yml/setters/yml_set_str.c \
	yml/setters/yml_set_float.c

### PARSING ###
SRC += parsing/yml_parse.c \
	parsing/yml_parsing_create.c \
	parsing/yml_parsing_destroy.c \
	parsing/yml_parsing_update_path.c

### NODE ###
SRC += node/yml_node_create.c \
	node/yml_node_dump.c \
	node/yml_node_destroy.c
