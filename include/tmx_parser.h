/*
** EPITECH PROJECT, 2024
** myrpg
** File description:
** tmx_parser.h
** Author: nathan.jeannot@epitech.eu
*/

#ifndef MYRPG_TMX_PARSER_H
    #define MYRPG_TMX_PARSER_H

    #include <SFML/System/Vector2.h>
    #include <SFML/Graphics/Rect.h>

    #define TMX_OBJ "<object "
    #define TMX_NAME_COLLISION "name=\"collision\""
    #define TMX_NAME_SPAWNPOINT "name=\"spawnpoint\""
    #define TMX_NAME_HOUSE "name=\"house\""
    #define TMX_NAME_COMBAT_ZONE "name=\"combat\""

lx_list_t *get_tmx_collision_rect(const char *tmx_file);
lx_list_t *get_tmx_houses(const char *tmx_file);
lx_list_t *get_tmx_spawnpoints(const char *tmx_file);
lx_list_t *get_tmx_combat_zones(const char *tmx_file);

char *get_tmx_type(char *line);
sfFloatRect get_tmx_rect(char *line);
sfVector2f get_tmx_vector(char *line);

#endif //MYRPG_TMX_PARSER_H
