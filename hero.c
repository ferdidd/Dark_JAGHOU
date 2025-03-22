/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   hero.c                                                                   */
/*                                                                            */
/*   By: ferdi <ferdivdb@hotmail.com>                                         */
/*                                                                            */
/*   Created: 2025/03/16 12:10:47                                             */
/*   Updated: 2025/03/16 12:10:47                                             */
/*                                                                            */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "map.h"

//Une fonction permettant de positionner aléatoirement le héros dans ce labyrinthe.
void init_pos_hero(int map[21][21])
{
  int y = rand()%21; // colonnes
  int x = rand()%21; // lignes
  (map[y][x] == 0) ? map[y][x] = 8 : init_pos_hero(map);
}

/*//Fonctionne permettant de dire si la position occupée par le héros est celle de la princesse
void pos_hero_on_princess(int map[21][21])
{
  int y = rand()%21; // colonnes
  int x = rand()%21; // lignes
  (map[y][x] == 9) ? map[y][x] = 8 : init_pos_hero(map);
}

//Fonctionne permettant de dire si la position occupée par le héros est celle du Minotaure
void pos_hero_on_jaghou(int map[21][21])
{
  int y = rand()%21; // colonnes
  int x = rand()%21; // lignes
  (map[y][x] == 7) ? map[y][x] = 7 : init_pos_hero(map);

}
*/

