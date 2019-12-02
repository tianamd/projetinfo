/*sources:
- https://codes-sources.commentcamarche.net/faq/924-distribuer-un-jeu-de-cartes
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "pioche.h"

void pioche36(t_tuile pioche_36[36])
{
    int i =0;
    int j=0;
    int n=0;
        for (i=1 ;i<7 ;i++)
            {
                for (j=1 ;j<7 ;j++)
                    {
                    pioche_36[n].forme=i;
                    pioche_36[n].couleur=j;
                    n++;}
            }

}


void pioche108(t_tuile pioche_108[108])
{
    int i =0;
    int j=0;
    int n=0;
    int x=0;

    for (x=0; x<3;x++) // on fait trois fois l'opération car la pioche de 108 est composée de 3 pioches de 36
    {
        for (i=1 ;i<7 ;i++)
            {
                for (j=1 ;j<7 ;j++)
                    {
                    pioche_108[n].forme=i;
                    pioche_108[n].couleur=j;
                    printf("\n%d",pioche_108[n].forme);
                    printf("%d",pioche_108[n].couleur);
                    n++;
                    }
            }
    }
}




