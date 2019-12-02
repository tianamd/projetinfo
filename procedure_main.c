#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include  "procedure_main.h"
#include "pioche.h"

int distribuer_tuiles(t_tuile pioche_36[36], t_tuile mainjoueur[6],int tmax)
{
    int i;
    int x;
    srand(time(NULL));

    for (i=0;i<6;i++)
    {
        if ((mainjoueur[i].couleur=='\0')&&(mainjoueur[i].forme=='\0')&&(tmax>=0))//on teste les conditions : la case de la main doit être vide et la pioche doit avoir des tuiles
        {
            x = rand()%(tmax +1);
            mainjoueur[i]=pioche_36[x];//on met la tuile de la pioche (indice x) dans la main
            pioche_36[i]=pioche_36[tmax]; //on remplace la tuile d'indice x par la dernière
            tmax=tmax-1; // on elève un élément de la pioche
        }
        if ((mainjoueur[i].couleur=='\0')&&(mainjoueur[i].forme=='\0')&&(tmax<0))
        {
            printf ("plus de tuile dans la pioche");
        }
    }
    return tmax;
}

void init_main(t_tuile mainjoueur[6])
{
    int i =0;
    for (i=0; i<6; i++)
    {
        mainjoueur[i].couleur='\0';
        mainjoueur[i].forme='\0';
    }
}


