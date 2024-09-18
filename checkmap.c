#include "solong.h"



int checkmap_limits_y(solong solong, t_map map) 
{
    int len;
    int i;

    len = ft_strlen(map.map[0]);
    while (map.map)
    {
        if(map.map[0][i] != WALL)
        {
            printf("error las y de las paredes no son iguales");
            return 1;
        }
        if(map.map[len][i] != WALL)
        {
            printf("error las y de las paredes no son iguales");
            return 1;
        }
        i++;
    }
    return 0;

}

int checkmap_limits_x(solong solong, t_map map) 
{
    int len;
    int i;

    len = ft_strlen(map.map);
    while (map.map)
    {
        if(map.map[i][0] != WALL)
        {
            printf("error las x de las paredes no son iguales");
            return 1;
        }
        if(map.map[i][len] != WALL)
        {
            printf("error las x de las paredes no son iguales");
            return 1;
        }
        i++;
    }
    return 0;

}

int count_map_element(solong solong, t_map map)
{
    int i;
    
    i = 0;
    while(map.map[i])
    {
        int x;

        x = 0;
        while(map.map[i][x])
        {
            if(!ft_strchr("10CPEF",map.map[i][x]))
            {
                printf("error no estan todos los caracteres en el mapa ");
                return 1;
            }
            else
                printf("todos los caracteres en el mapa");
            x++;
        }
        i++;
    }
    return 0;
}

