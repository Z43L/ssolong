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
    int **map;
    int y;
    int x;
    char *filename;
    int player_number;
    int exit_number;
    int coin_number;
    int **map_elementen;
    t_element t_element;
    
}   solong;

typedef struct s_element
{
	int		position_y;
	int		position_x;
}		t_element;

#endif