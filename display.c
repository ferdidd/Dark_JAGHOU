/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   display.c                                                                */
/*                                                                            */
/*   By: ferdi <ferdivdb@hotmail.com>                                         */
/*                                                                            */
/*   Created: 2025/03/16 12:11:23                                             */
/*   Updated: 2025/03/16 12:11:23                                             */
/*                                                                            */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>
#include<stdlib.h>
#include<termios.h>
#include<unistd.h>
#include<string.h>
#include<unistd.h>
#include "map.h"
#include "hero.h"
#include "princesse.h"
#include "minotaur.h"

//initialiser les fonctions
void main_menu();
void dark_jagou();
void affichage_retour();
void menu_intro();
char menu_rename();
void afficher_map(int map[21][21]);
void menu_afficher_map();
char choix_map();
void niveau(char niveau);
void quit();
void init_session(char niveau);

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

//Une fonction qui affiche le menu
	//et retourne le choix de l’utilisateur
void main_menu()
{
	dark_jagou();
	printf("  ||===============================||\n");
	printf("  ||             HOME              ||\n");
	printf("  ||===============================||\n");
	printf("  ||     |1| Lire l'introduction   ||\n");
	printf("  ||===============================||\n");
	printf("  ||     |2| Renommer héro         ||\n");
	printf("  ||===============================||\n");
	printf("  ||     |3| Choix du niveau       ||\n");
	printf("  ||===============================||\n");
	printf("  ||     |4| Quitter               ||\n");
	printf("  ||===============================||\n\n\n");
	char choix = getch();
	//switch_case
	do
	{
		switch(choix)
		{
			case '1':
				menu_intro();
				break;
			case '2':
				menu_rename();
				break;
			case '3':
				niveau(choix_map());
				break;
			case '4':
				quit();
				break;
			default:
				printf("Error ! Veuillez entrer en chiffre de 1 à 4");
				choix()
		}
	}while(choix != '1' && choix != '2' && choix != '3' && choix != '4');
		
}

void dark_jagou()
{
	system("clear"); 
	printf("\n\n\n\n");
	printf("  ###################################\n");
	printf("  #           Dark JAGHOU           #\n");
	printf("  ###################################\n");
}

void affichage_retour()
{
	printf("  ||===============================||\n");
	printf("  ||     |1| Retour                ||\n");
	printf("  ||===============================||\n\n\n");
}

void menu_intro()
{
	dark_jagou();
	printf("  ||===============================||\n");
	printf("  ||         INTRODUCTION          ||\n");
	printf("  ||===============================||\n\n\n");
	printf("**********************************************************\n");
	printf("*                                                        *\n");
	printf("*     Bienvenue dans le labyrinthe de l'effroyable       *\n");
	printf("*   et sanguinaire Dark Jaghou qui ne cherchera qu'a     *\n");
	printf("*      vous tomber dessus pour aspirer votre ame.        *\n");
	printf("*                                                        *\n");
	printf("*  Trouvez votre chemin vers la princesse Mohamed avant  *\n");
	printf("*   que Dark Jaghou ne lui tombe dessus... ou sur vous.  *\n");
	printf("*                                                        *\n");
	printf("**********************************************************\n\n");
	affichage_retour();
	char choix = getch();
	(choix == '1') ? main_menu() : menu_intro();
}

char menu_rename()
{
	dark_jagou();
	printf("  ||===============================||\n");
	printf("  ||         Choix du nom          ||\n");
	printf("  ||===============================||\n\n\n");
	printf("**********************************************************\n");
	printf("*       Veuillez entrer le nom de votre hero :           *\n");
	printf("*                                                        *\n");
	printf("**********************************************************\n\n");
	affichage_retour();

	char nom[200];
	fgets(nom, sizeof(nom), stdin);
	printf("Vous avez choisi : %s", nom);
	dark_jagou();
	printf("  ||===============================||\n");
	printf("  ||         Choix du nom          ||\n");
	printf("  ||===============================||\n\n\n");
	printf("**********************************************************\n");
	printf("*              Votre hero se nomme :                     *\n");
	printf("                     %s                             \n", nom);
	printf("**********************************************************\n\n");
	affichage_retour();
	//switch_case
	char choix = getch();
	(choix == '1') ? main_menu() : menu_rename();
	
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
					convert = "\u2620"; //JAGHOU
					break;
				case 8:
					convert = "\u263A";
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

void menu_afficher_map()
{
	dark_jagou();
	printf("  ||===============================||\n");
	printf("  ||            Niveau 1           ||\n");
	printf("  ||===============================||\n\n\n");
	afficher_map(map1);
	getch();
	dark_jagou();
	printf("  ||===============================||\n");
	printf("  ||            Niveau 2           ||\n");
	printf("  ||===============================||\n\n\n");
	afficher_map(map2);
	getch();
	dark_jagou();
	printf("  ||===============================||\n");
	printf("  ||            Niveau 3           ||\n");
	printf("  ||===============================||\n\n\n");
	afficher_map(map3);
	getch();
	dark_jagou();
	printf("  ||===============================||\n");
	printf("  ||            Niveau 4           ||\n");
	printf("  ||===============================||\n\n\n");
	afficher_map(map4);
	getch();

}

char choix_map()
{
	menu_afficher_map();
	char niveau;
	system("clear");
	printf("Quel niveau choisissez-vous ?");
	niveau = getch();
	switch(niveau)
	{
		case '1':
			niveau = '1';
			printf("%c", niveau);
			getch();
			return niveau;
			break;
		case '2':
			niveau = '2';
			printf("%c", niveau);
			getch();
			return niveau;
			break;
		case '3':
			niveau = '3';
			printf("%c", niveau);
			getch();
			return niveau;
			break;
		case '4':
			niveau = '4';
			printf("%c", niveau);
			getch();
			return niveau;
			break;
		default:
			choix_map();
	}
	return 0;

}

void niveau(char niveau) 
//choix du niveau dans le menu
{
	system("clear");
	(niveau == '1' || niveau == '2' || niveau == '3' || niveau == '4') ? init_session(niveau) : printf("ECHEC\n");
}

void quit()
{
	system("clear");
	printf("\t\t\tGAME OVER\n\n\n\n\n");
	usleep(500000);
	system("clear");
	printf("\n\t\t\tGAME OVER\n\n\n\n");
	usleep(500000);
	system("clear");
	printf("\n\n\t\t\tGAME OVER\n\n\n");
	usleep(500000);
	system("clear");
	printf("\n\n\n\t\t\tGAME OVER\n\n");
	usleep(3000000);
	exit(0);
}

void init_session(char niveau)
//initialisation du niveau et du placement des protagonistes
{
	int map_init[21][21];
	switch(niveau)
	{
		case '1':
			init_pos_hero(map1);
			init_pos_princesse(map1);
			afficher_map(map1);
			break;
		case '2':
			init_pos_hero(map2);
			init_pos_princesse(map2);
			init_pos_jaghou(map2);
			afficher_map(map2);
			break;
		case '3':
			init_pos_hero(map3);
			init_pos_princesse(map3);
			init_pos_jaghou(map3);
			afficher_map(map3);
			break;
		case '4':
			init_pos_hero(map4);
			init_pos_princesse(map4);
			init_pos_jaghou(map4);
			afficher_map(map4);
			break;
		default:
			printf("echec");
	}
}




//Une fonction qui affiche l’introduction : 
	//elle doit donner quelques explications sur le jeu et les touches nécessaires au déplacement

//Une fonction qui propose le changement du nom du héros Thésée et de la princesse Ariane.

//Une fonction permettant d’afficher sur une seule ligne le nom du héros et de la princesse.

//Une fonction qui permet de copier un des labyrinthes proposés dans votre tableau labyrinthe 
	//qui servira tout au long du jeu.

//Une fonction qui permet d’afficher un labyrinthe en partant d’un tableau

//Une fonction permettant d’afficher l’environnement du jeu, le labyrinthe et les personnages inclus

//Afficher score

//Une fonction permettant de positionner et d’afficher un personnage à l’écran sans réaffichage de l’ensemble du labyrinthe

//Une fonction permettant d’effacer un personnage à l’écran sans réaffichage de l’ensemble du labyrinthe

