/*
#include<stdio.h>
#include<stdlib.h>
#include<termios.h>
#include<unistd.h>
#include<time.h>

void afficher_map(int map[21][21]);
void init_pos_hero(int map[21][21]);

int main()
{
	srand(time(NULL));

	int map4[21][21] =
	{
	    {3,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,4},
	    {2,6,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,5,2},
	    {2,0,0,3,4,0,0,0,1,0,0,3,4,0,0,2,0,6,0,0,2},
	    {2,0,0,2,0,4,0,3,0,4,0,2,0,4,0,2,3,0,0,0,2},
	    {2,0,0,2,0,6,0,2,1,2,0,3,4,0,0,2,5,0,0,0,2},
	    {2,0,0,5,6,0,0,2,0,2,0,2,0,4,0,2,0,4,0,0,2},
	    {2,4,0,0,0,0,0,0,0,0,0,0,0,0,4,0,0,0,0,3,2},
	    {2,2,0,1,1,1,1,1,1,1,1,1,1,0,0,1,1,0,0,2,2},
	    {2,6,0,0,0,0,0,0,0,0,0,0,7,0,0,0,0,0,3,6,2},
	    {2,0,0,1,4,0,0,1,0,0,3,1,4,0,2,0,2,0,2,2,2},
	    {2,0,0,0,2,0,3,0,4,0,2,0,2,0,2,0,2,0,2,1,2},
	    {2,4,0,0,2,0,2,1,2,0,2,0,0,0,2,0,6,0,2,0,2},
	    {2,2,0,0,2,0,2,0,2,0,2,1,4,0,3,1,4,0,2,0,2},
	    {2,2,0,0,2,0,2,0,2,0,2,0,2,0,2,0,2,0,2,0,2},
	    {2,6,0,0,6,0,2,0,2,0,5,0,6,0,2,0,2,0,0,0,2},
	    {2,0,0,6,0,0,0,0,0,0,0,1,0,0,2,0,2,0,3,4,2},
	    {2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,2},
	    {2,0,1,4,0,0,0,0,3,1,1,0,1,1,4,0,0,2,0,2,2},
	    {2,0,0,5,1,1,0,1,6,0,0,0,0,0,5,1,1,6,0,2,2},
	    {2,4,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,2},
	    {5,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,6}
	};
	

	init_pos_hero(map4);
	afficher_map(map4);
	return 0;


}



void afficher_map(int map[21][21])
{
	int i, j;
	char* convert; // exemple : char* convert = 0x400500;
	for(i=0;i<21;i++)
	{
		for(j=0;j<21;j++)
		{	
			switch(map[i][j])
			{
				case 0:
					convert = "\u2591";
					break;
				case 1:
					convert = "\u2550";
					break;
				case 2:
					convert = "\u2551";
					break;
				case 3:
					convert = "\u2554";
					break;
				case 4:
					convert = "\u2557";
					break;
				case 5:
					convert = "\u255A";
					break;
				case 6:
					convert = "\u255D";
					break;
				case 7:
					convert = "\u2620";
					break;
				case 8:
					convert = "\u263B";
					break;
				case 9:
					convert = "\u2654";
					break;
				default:
					printf("Erreur de map");
					usleep(3000000);
					exit(0);				
			}
			printf("%s ", convert);
		}
		printf("\n");
	}
}

void init_pos_hero(int map[21][21])
{
	int y = rand()%21; // colonnes
	int x = rand()%21; // lignes
	(map[y][x] == 0) ? map[y][x] = 8 : init_pos_hero(map);
}
void moove_hero(int map[21][21])
{
	int touche = getch();
	switch(touche)
	{
		case 122: //  Z
			
			afficher_map(map);
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
	//(map[y][x] == 0) ? map[y][x] = 8 : init_pos_hero(map);
}

char getch() {
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
*/
#include<stdio.h>
#include<stdlib.h>
#include<termios.h>
#include<unistd.h>
#include<time.h>

#define SIZE 21

void afficher_map(int map[SIZE][SIZE]);
void init_pos_hero(int map[SIZE][SIZE], int *hero_x, int *hero_y);
char getch();

void moove_hero(int map[SIZE][SIZE], int *hero_x, int *hero_y);

int main()
{
	srand(time(NULL));

	int hero_x, hero_y;
	int map4[SIZE][SIZE] =
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

	init_pos_hero(map4, &hero_x, &hero_y);
	while(1)
	{
		afficher_map(map4);
		moove_hero(map4, &hero_x, &hero_y);
	}

	return 0;
}

void afficher_map(int map[SIZE][SIZE])
{
	char* symbols[] = {"░","═","║","╔","╗","╚","╝","☠","☻","♔"};
	for(int i=0;i<SIZE;i++)
	{
		for(int j=0;j<SIZE;j++)
			printf("%s ", symbols[map[i][j]]);
		printf("\n");
	}
}

void init_pos_hero(int map[SIZE][SIZE], int *hero_x, int *hero_y)
{
	do{
		*hero_x = rand()%SIZE;
		*hero_y = rand()%SIZE;
	}while(map[*hero_y][*hero_x] != 0);

	map[*hero_y][*hero_x] = 8;
}

char getch() {
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

void moove_hero(int map[SIZE][SIZE], int *hero_x, int *hero_y)
{
	char move = getch();
	int new_x = *hero_x;
	int new_y = *hero_y;

	switch(move)
	{
		case 'z': new_y--; break;
		case 's': new_y++; break;
		case 'q': new_x--; break;
		case 'd': new_x++; break;
		default: return;
	}

	if(map[new_y][new_x] == 0)
	{
		map[*hero_y][*hero_x] = 0;
		*hero_x = new_x;
		*hero_y = new_y;
		map[new_y][new_x] = 8;
	}
}





