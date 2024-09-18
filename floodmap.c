#include  "solong.h"


int compo_map(solong solong)
{
    int i;
    int x;
    int y;
    int len;

    i = 0;
    x = 0;
    y = 0;
    len = ft_strlen(solong.map.map[0]);
    while(solong.map.map[i])
    {
        x = 0;
        while(solong.map.map[i][x])
        {
            if(solong.map.map[i][x] == PLAYER)
            {
                solong.map.player.x = x;
                solong.map.player.y = y;
            }
            if(solong.map.map[i][x] == ENEMY)
            {
                solong.map.enemy.x = x;
                solong.map.enemy.y = y;
            }
            if(solong.map.map[i][x] == COIN)
            {
                solong.map.items.x = x;
                solong.map.items.y = y;
            }
            x++;
        }
        y++;
        i++;
    }
    return 0;
}

int floodmap(solong solong)
{
    int i;
    int x;
    int y;
    int len;

    i = 0;
    x = 0;
    y = 0;
    len = ft_strlen(solong.map.map[0]);
    while(solong.map.map[i])
    {
        x = 0;
        while(solong.map.map[i][x])
        {
            if(solong.map.map[i][x] == FLOOR)
            {
                if(solong.map.map[i][x + 1] == WALL)
                {
                    solong.map.map[i][x + 1] = '2';
                }
                if(solong.map.map[i][x - 1] == WALL)
                {
                    solong.map.map[i][x - 1] = '2';
                }
                if(solong.map.map[i + 1][x] == WALL)
                {
                    solong.map.map[i + 1][x] = '2';
                }
                if(solong.map.map[i - 1][x] == WALL)
                {
                    solong.map.map[i - 1][x] = '2';
                }
            }
            x++;
        }
        y++;
        i++;
    }
    return 0;
}