#ifndef PIOCHE_H_INCLUDED
#define PIOCHE_H_INCLUDED

typedef struct tuile{
    int forme; // de 1 à 6 pour la forme
    int couleur; //de 1 à 6 poule la couleur
}t_tuile;

void pioche36(t_tuile pioche_36[36]);
void pioche108(t_tuile pioche_108[108]);

#endif // PIOCHE_H_INCLUDED
