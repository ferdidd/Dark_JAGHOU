/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   input.c                                                                  */
/*                                                                            */
/*   By: ferdi <ferdivdb@hotmail.com>                                         */
/*                                                                            */
/*   Created: 2025/03/16 12:11:36                                             */
/*   Updated: 2025/03/16 12:11:36                                             */
/*                                                                            */
/*                                                                            */
/* ************************************************************************** */

//Une fonction qui permet de déplacer d’une case le héros.

#include<stdio.h>
#include<stdlib.h>
#include<termios.h>
#include<unistd.h>
#include "map.h"

char getch();

/*int main()
{

	unsigned char bite = getch();
	if (bite == 27)
	{
		printf("hooooooohooooo on quitte\n");
	}
	else
	{	printf(" \u2554\u2557\n");
		printf("\u2554\u2554\u2557\u2557\n");
		printf(" \u255A\u255d\n");
		printf(" \u255d\u255a\n");
	}
	return 0;
}*/

/*  
	 ASCII
	------- 
	Z = 122
	Q = 133
	S = 115
	D = 100
*/

void deplacement_hero(char map[21][21])
{
	unsigned char touche = getch();
	int i, j;
	char* deplacement; // exemple : char* convert = 0x400500;
	for(i=0;i<21;i++)
	{
		for(j=0;j<21;j++)
		{
			
		}
	}
	switch(touche)
	{
		case 122:
			'z'
		break;
		case 133:
			'q'
		break;
		case 115:
			's'
		break;
		case 100:
			'd'
		break;
		default:

	}
}

char getch() 
	{
	    struct termios oldt, newt;
	    char ch;
	    tcgetattr(STDIN_FILENO, &oldt);
	    newt = oldt;
	    newt.c_lflag &= ~(ICANON | ECHO);
	    tcsetattr(STDIN_FILENO, TCSANOW, &newt);
	    ch = getchar();
	    tcsetattr(STDIN_FILENO, TCSANOW, &oldt);
	    return ch;
	}