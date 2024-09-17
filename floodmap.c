#include  "solong.h"


int floodfil(solong solong, t_element position)
{
    if (solong.map[position.position_y][position.position_x] == WALL)
        return 0;
    if (solong.map[position.position_y][position.position_x] == COIN)
        solong.coin_number--;
    if (solong.map[position.position_y][position.position_x] == EXIT)
        solong.exit_number--;
    if (solong.map[position.position_y][position.position_x] == ENEMY)
        return 0;
    if (solong.map[position.position_y][position.position_x] == FLOOR)
    {
        solong.map[position.position_y][position.position_x] = '1';
        floodfil(solong, (t_element){position.position_y + 1, position.position_x});
        floodfil(solong, (t_element){position.position_y - 1, position.position_x});
        floodfil(solong, (t_element){position.position_y, position.position_x + 1});
        floodfil(solong, (t_element){position.position_y, position.position_x - 1});
    }
    return 0;
}