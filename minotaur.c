/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   minotaur.c                                                               */
/*                                                                            */
/*   By: ferdi <ferdivdb@hotmail.com>                                         */
/*                                                                            */
/*   Created: 2025/03/16 12:11:10                                             */
/*   Updated: 2025/03/16 12:11:10                                             */
/*                                                                            */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "map.h"

//Une fonction permettant de positionner aléatoirement le Minotaure dans ce labyrinthe.
void init_pos_jaghou(int map[21][21])
{
  int y = rand()%21; // colonnes
  int x = rand()%21; // lignes
  (map[y][x] == 0 && map[y][x] != 8 && map[y][x] != 7) ? map[y][x] = 7 : init_pos_jaghou(map);
}


//Fonctionne permettant de dire si la position occupée par le Minotaure est celle de la princesse