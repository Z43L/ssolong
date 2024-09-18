#ifndef SOLONG_H
 #define SOLONG_H


# define WALL		'1'
# define FLOOR		'0'
# define COIN		'C'
# define PLAYER		'P'
# define EXIT		'E'
# define ENEMY		'F'

#include <stdio.h>
#include "LIBFT/libft.h"




typedef struct solong
{
    int y;
    int x;
    char *filename;
    int player_number;
    int exit_number;
    int coin_number;
    int **map_elementen;
    t_map map;
    
}   solong;

typedef struct s_map
{
  int **map;
  int x;
  int y;
  t_enemy enemy;
  t_player player;
  t_items items;
}  t_map;

typedef struct s_player
{
  void *sprite;
  int x;
  int y;
}  t_player;

typedef struct s_enemy
{
  void *sprite;
  int x;
  int y;
}  t_enemy;

typedef struct s_items
{
  void *sprite;
  int x;
  int y;
}  t_items;


#endif