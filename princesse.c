/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   princesse.c                                                              */
/*                                                                            */
/*   By: ferdi <ferdivdb@hotmail.com>                                         */
/*                                                                            */
/*   Created: 2025/03/16 13:10:42                                             */
/*   Updated: 2025/03/16 13:10:42                                             */
/*                                                                            */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "map.h"

//Une fonction permettant de positionner aléatoirement la princesse dans ce labyrinthe.
void init_pos_princesse(int map[21][21])
{
  int y = rand()%21; // colonnes
  int x = rand()%21; // lignes
  (map[y][x] == 0 && map[y][x] != 8) ? map[y][x] = 9 : init_pos_princesse(map);
}


