![baner](https://www.42urduliz.com/wp-content/uploads/2019/11/Ongi-etorri-42-Urduliz.jpg)

# ssolong
## pasos para desarrollar el solong 😏
- Comprobar los limites del mapa tanto de las `x` como de las `y` asegurarse que el mapa esta completamente cerrado
- Comprobar que esta todos los elementos en el mapa
- Comprobar que el mapa tiene la extension de archivo correpta
- Hacer un floodfill para comprobar que el jugador tiene camino asta recoger el item
- ENTENDER LA MINILIB❗🤯 VERY IMPORTAN❗❗❗
- poner los sprites `.xpm` en el mapa y renderizar el mapa
- implementar la logica del juego "que vaya recolectando items y valla sumando puntos si el enemigo pilla al player el juego acaba"
- implementar una funcion que en base a las cordenadas `x` e `y` del jugador el enemigo se mueva en esa direccion asi obtendremos un modelo de ia rudimentario para el movimiento del enemigo
- implementar los controles de movimiento al player
- manejar los controles para cerrar el juego de manera correcta al hacer `ctrl c` o cerrar pestaña
- implementar un contador o bien de tiempo que el personaje a conseguido sobrebibir o por items que alla recolectado

## estructuras 😃
### mapa
```
typedef struct s_map
{
  int **map;
  int x;
  int y;
}  t_map;
```

### player
```
typedef struct s_player
{
  void *sprite;
  int x;
  int y;
}  t_player;
```

### enemy
```
typedef struct s_enemy
{
  void *sprite;
  int x;
  int y;
}  t_enemy;
```
### items
```
typedef struct s_items
{
  void *sprite;
  int x;
  int y;
}  t_items;
```
## funciones de mi solong
### comprobar los limites del mapa y

```
int checkmap_limits_y(solong solong) 
{
    int len;
    int i;

    len = ft_strlen(solong.map[0]);
    while (solong.map)
    {
        if(solong.map[0][i] != WALL)
        {
            printf("error las y de las paredes no son iguales");
            return 1;
        }
        if(solong.map[len][i] != WALL)
        {
            printf("error las y de las paredes no son iguales");
            return 1;
        }
        i++;
    }
    return 0;

}
```
### comprobar los limites del mapa x
```
int checkmap_limits_x(solong solong) 
{
    int len;
    int i;

    len = ft_strlen(solong.map);
    while (solong.map)
    {
        if(solong.map[i][0] != WALL)
        {
            printf("error las x de las paredes no son iguales");
            return 1;
        }
        if(solong.map[i][len] != WALL)
        {
            printf("error las x de las paredes no son iguales");
            return 1;
        }
        i++;
    }
    return 0;

}
```
### comprobar que estan todos los elementos
```
int count_map_element(solong solong)
{
    int i;
    
    i = 0;
    while(solong.map[i])
    {
        int x;

        x = 0;
        while(solong.map[i][x])
        {
            if(!ft_strchr("10CPEF",solong.map[i][x]))
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
```
### comprobar que el player puede coger los items (floodfil)
