#include <stdio.h>
#include <stdlib.h>

void affichage_zone_de_jeu()
{
    char zone_de_jeu[27][13];
    int i=0;
    int j=0;
    char x = 'a';

    //Initialisation du tableau de jeu, tableau de 27x13
    for (j=0;j<13;j++)
    {
        for (i=0; i<27; i++)
        {
            zone_de_jeu[i][j]='\0';
        }
    }


    /* ON met en place les bordures abscisses et les ordonnées
    avec des lettres*/
    for(i=1;i<27;i++)
    {
        zone_de_jeu[i][0]=x;
        x++;
    }

    x='a';

    for(j=1;j<13;j++)
    {
        zone_de_jeu[0][j]=x;
        x++;
    }


    //Affichage :
    for (j=0;j<13;j++)
    {
        for (i=0; i<27; i++)
        {
            printf("%c ",zone_de_jeu[i][j]);
        }
        printf("\n");
    }
}
