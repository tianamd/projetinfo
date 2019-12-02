#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "Menu.h"

int Menu()
{
    int choix;
            printf("\n-----------Bienvenue dans le jeu Qwirkle !-----------\n\n");
            printf("\n-------------------------MENU------------------------\n\n");
            printf("                 1. Reprendre la partie                \n");
            printf("                  2. Nouvelle partie                   \n");
            printf("                    3. Instructions                    \n");
            printf("                       4. Score                        \n");
            printf("                      5. Quitter                       \n");
            do
                {
                    printf("\n Que voulez-vous faire (choisir un nombre entre 1 et 5) : ");
                    scanf("%d", &choix);
                }while(((1>choix)&&(choix>5)));
    return choix;
    }


void Menu_instruction()
{
    int choix=0;

    printf("Chaque joueur dispose de 6 tuiles.\nA son tour il en place un maximum a condition de les poser sur une seule ligne avec un caractere commun: la couleur ou la forme.\nOn marque les points des lignes que l'on a completees.\n");
    printf("0. Retour");
    do
    {
        scanf("%d",&choix);
    }while (choix!=0);
    system("cls");
    Menu();
}

int Menu_mode()
{
    int choix;
    printf("\nChoisissez le mode de jeu : ");
    printf("\n1. Mode degradee (avec 36 tuiles) ");
    printf ("\n2. Mode normal (avec 108 tuiles)");
    printf("\nQuel est votre choix : ");
    scanf("%d",&choix);

    return choix;
}

int Menu_nombre_joueur()
{
    int choix=0;
    do
        {printf("\nNombre de joueur (entre 2 et 4):");
        scanf("%d",&choix);
        }while((choix<2)&&(choix>4));

    return choix;
}
