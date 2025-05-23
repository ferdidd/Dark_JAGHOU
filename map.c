/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   map.c                                                                    */
/*                                                                            */
/*   By: ferdi <ferdivdb@hotmail.com>                                         */
/*                                                                            */
/*   Created: 2025/03/16 12:10:23                                             */
/*   Updated: 2025/03/16 13:27:23                                             */
/*                                                                            */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<stdlib.h>

//map 1 21x21
int map1[21][21] = 
{
    {3,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,4},
    {2,0,2,0,2,0,2,0,2,0,0,0,2,0,0,0,2,0,2,0,2},
    {2,0,2,0,2,0,2,0,2,0,2,0,2,0,0,0,2,0,2,0,2},
    {2,0,0,0,0,0,0,0,0,0,2,0,0,0,0,0,0,0,2,0,2},
    {2,2,0,2,2,0,2,0,1,1,4,1,0,0,2,0,0,0,0,0,2},
    {2,2,0,2,2,0,2,0,0,0,2,0,4,0,2,0,0,3,1,1,2},
    {2,2,0,2,2,0,0,0,0,0,3,1,5,1,5,1,0,2,0,0,2},
    {2,0,0,0,5,1,2,0,2,0,2,0,0,0,2,0,0,2,0,2,2},
    {2,0,2,0,0,0,2,0,2,0,2,0,0,0,2,0,0,2,0,2,2},
    {2,0,2,0,2,0,2,0,2,0,2,0,1,1,5,1,0,2,0,2,2},
    {2,0,2,0,5,1,6,0,0,0,0,0,0,0,0,0,0,0,0,0,2},
    {2,0,2,0,0,0,0,0,0,6,5,2,0,1,4,0,2,0,1,0,2},
    {2,0,2,1,3,3,1,0,0,0,0,2,0,0,2,0,5,4,0,0,2},
    {2,0,0,0,2,2,0,0,2,0,3,6,0,0,0,0,0,2,0,0,2},
    {2,2,0,0,0,2,0,2,6,0,2,0,0,0,2,0,0,0,0,2,2},
    {2,5,1,4,0,2,0,2,2,0,2,0,2,0,2,0,0,1,4,2,2},
    {2,0,0,2,0,2,0,5,6,0,0,0,2,0,2,0,0,0,2,0,2},
    {2,2,0,0,0,2,0,0,0,0,1,0,0,0,2,0,2,0,2,0,2},
    {2,2,0,1,0,0,0,2,2,0,0,0,0,1,6,0,2,0,0,0,2},
    {2,0,0,0,0,2,0,2,2,1,1,1,0,0,0,0,2,0,2,0,2},
    {5,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,6}
};




//map 2 21x21
int map2[21][21] =
{
    {3,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,4},
    {2,0,2,0,2,0,2,0,2,0,0,0,2,0,0,0,2,0,2,0,2},
    {2,0,2,0,2,0,2,0,2,0,2,0,2,0,0,0,2,0,2,0,2},
    {2,0,0,0,0,0,0,0,0,0,2,0,0,0,0,0,0,0,2,0,2},
    {2,2,0,2,2,0,2,0,1,1,4,1,0,0,2,0,0,0,0,0,2},
    {2,2,0,2,2,0,2,0,0,0,2,0,4,0,2,0,0,3,1,1,2},
    {2,2,0,2,2,0,0,0,0,0,3,1,5,1,5,1,0,2,0,0,2},
    {2,0,0,0,5,1,2,0,2,0,2,0,0,0,2,0,0,2,0,2,2},
    {2,0,2,0,0,0,2,0,2,0,2,0,0,0,2,0,0,2,0,2,2},
    {2,0,2,0,2,0,2,0,2,0,2,0,1,1,5,1,0,2,0,2,2},
    {2,0,2,0,5,1,6,0,0,0,0,0,0,0,0,0,0,0,0,0,2},
    {2,0,2,0,0,0,0,0,0,6,5,2,0,1,4,0,2,0,1,0,2},
    {2,0,2,1,3,3,1,0,0,0,0,2,0,0,2,0,5,4,0,0,2},
    {2,0,0,0,2,2,0,0,2,0,3,6,0,0,0,0,0,2,0,0,2},
    {2,2,0,0,0,2,0,2,6,0,2,0,0,0,2,0,0,0,0,2,2},
    {2,5,1,4,0,2,0,2,2,0,2,0,2,0,2,0,0,1,4,2,2},
    {2,0,0,2,0,2,0,5,6,0,0,0,2,0,2,0,0,0,2,0,2},
    {2,2,0,0,0,2,0,0,0,0,1,0,0,0,2,0,2,0,2,0,2},
    {2,2,0,1,0,0,0,2,2,0,0,0,0,1,6,0,2,0,0,0,2},
    {2,0,0,0,0,2,0,2,2,1,1,1,0,0,0,0,2,0,2,0,2},
    {5,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,6}
};



//map 3 21x21
int map3[21][21] =
{
    {3,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,4},
    {2,0,2,0,2,0,2,0,2,0,0,0,2,0,0,0,2,0,2,0,2},
    {2,0,2,0,2,0,2,0,2,0,2,0,2,0,0,0,2,0,2,0,2},
    {2,0,0,0,0,0,0,0,0,0,2,0,0,0,0,0,0,0,2,0,2},
    {2,2,0,2,2,0,2,0,1,1,4,1,0,0,2,0,0,0,0,0,2},
    {2,2,0,2,2,0,2,0,0,0,2,0,4,0,2,0,0,3,1,1,2},
    {2,2,0,2,2,0,0,0,0,0,3,1,5,1,5,1,0,2,0,0,2},
    {2,0,0,0,5,1,2,0,2,0,2,0,0,0,2,0,0,2,0,2,2},
    {2,0,2,0,0,0,2,0,2,0,2,0,0,0,2,0,0,2,0,2,2},
    {2,0,2,0,2,0,2,0,2,0,2,0,1,1,5,1,0,2,0,2,2},
    {2,0,2,0,5,1,6,0,0,0,0,0,0,0,0,0,0,0,0,0,2},
    {2,0,2,0,0,0,0,0,0,6,5,2,0,1,4,0,2,0,1,0,2},
    {2,0,2,1,3,3,1,0,0,0,0,2,0,0,2,0,5,4,0,0,2},
    {2,0,0,0,2,2,0,0,2,0,3,6,0,0,0,0,0,2,0,0,2},
    {2,2,0,0,0,2,0,2,6,0,2,0,0,0,2,0,0,0,0,2,2},
    {2,5,1,4,0,2,0,2,2,0,2,0,2,0,2,0,0,1,4,2,2},
    {2,0,0,2,0,2,0,5,6,0,0,0,2,0,2,0,0,0,2,0,2},
    {2,2,0,0,0,2,0,0,0,0,1,0,0,0,2,0,2,0,2,0,2},
    {2,2,0,1,0,0,0,2,2,0,0,0,0,1,6,0,2,0,0,0,2},
    {2,0,0,0,0,2,0,2,2,1,1,1,0,0,0,0,2,0,2,0,2},
    {5,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,6}
};

//map 4 21x21
int map4[21][21] =
{
    {3,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,4},
    {2,6,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,5,2},
    {2,0,0,3,4,0,0,0,3,0,0,3,4,0,0,2,0,6,0,0,2},
    {2,0,0,2,0,2,0,2,0,4,0,2,0,6,0,2,3,0,0,0,2},
    {2,0,0,2,0,2,0,2,1,2,0,3,4,0,0,0,5,0,0,0,2},
    {2,0,0,5,6,0,0,2,0,2,0,2,0,2,0,0,0,4,0,0,2},
    {2,4,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,2},
    {2,2,0,1,1,1,1,1,1,1,1,1,1,0,0,1,1,0,0,2,2},
    {2,6,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,6,2},
    {2,0,0,1,4,0,0,3,0,0,0,4,0,0,2,0,2,0,2,2,2},
    {2,0,0,0,2,0,2,0,4,0,3,0,4,0,2,0,2,0,2,1,2},
    {2,4,0,0,2,0,2,1,2,0,2,0,0,0,5,1,6,0,2,0,2},
    {2,2,0,0,2,0,2,0,2,0,3,1,4,0,3,1,4,0,2,0,2},
    {2,2,0,0,2,0,2,0,2,0,2,0,2,0,2,0,2,0,2,0,2},
    {2,6,0,0,6,0,2,0,2,0,2,0,6,0,2,0,2,0,0,0,2},
    {2,0,0,1,0,0,2,0,2,0,0,1,0,0,2,0,2,0,3,4,2},
    {2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,2},
    {2,0,1,4,0,0,0,0,3,1,1,0,1,1,4,0,0,2,0,2,2},
    {2,0,0,5,1,1,0,1,6,0,0,0,0,0,5,1,1,6,0,2,2},
    {2,4,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,2},
    {5,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,6}
};



