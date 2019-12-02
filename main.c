#include <stdio.h>
#include <stdlib.h>
#include "Menu.h"
#include "affichage_zone_de_jeu.h"
#include "pioche.h"
#include "procedure_main.h"


int main()
{
    int choix = 0;
    int nombre_joueurs=0;//nombre de joueur
    int mode=0;//choix du mode de jeu
    int nmb_tuiles_pioche;
    //int i;
    t_tuile pioche_degrade[36]; //pour stocker la pioche en cas de mode dégradé
    t_tuile pioche_normal[108];
    t_tuile main_joueur1[6];
    t_tuile main_joueur2[6];
    t_tuile main_joueur3[6];
    t_tuile main_joueur4[6];



    choix = Menu();

            switch (choix)
            {
                case 1 :
                    // reprise du jeu
                    printf ("\n reprise du jeu");

                    // Juste pour tester l'affichage
                    system("pause");
                    system("cls");
                    affichage_zone_de_jeu();
                    break;

                case 2 :
                    //nouvelle partie
                    system("cls");
                    mode = Menu_mode();
                    nombre_joueurs=Menu_nombre_joueur();
                    switch (mode)
                    /*suivant le mode la partie commance différement: pioche de 36 ou de 108.
                    On va également piocher les premières mains en fonction du nombre de joueur*/
                    {
                    case 1 :// jeu mode dégradé
                        nmb_tuiles_pioche = 35;
                        pioche36(pioche_degrade);
                        if (nombre_joueurs==2)
                        {
                            // pour le joueur 1
                           init_main(main_joueur1); // vide toutes les cases du tableau
                           nmb_tuiles_pioche = distribuer_tuiles(pioche_degrade, main_joueur1, nmb_tuiles_pioche);

                           //pour le joueur 2
                           init_main(main_joueur2); // vide toutes les cases du tableau
                           nmb_tuiles_pioche = distribuer_tuiles(pioche_degrade, main_joueur2, nmb_tuiles_pioche);
                        }

                        if (nombre_joueurs == 3)
                        {
                            // pour le joueur 1
                           init_main(main_joueur1); // vide toutes les cases du tableau
                           nmb_tuiles_pioche = distribuer_tuiles(pioche_degrade, main_joueur1, nmb_tuiles_pioche);

                           //pour le joueur 2
                           init_main(main_joueur2); // vide toutes les cases du tableau
                           nmb_tuiles_pioche = distribuer_tuiles(pioche_degrade, main_joueur2, nmb_tuiles_pioche);

                           //pour le joueur 3
                           init_main(main_joueur3); // vide toutes les cases du tableau
                           nmb_tuiles_pioche = distribuer_tuiles(pioche_degrade, main_joueur3, nmb_tuiles_pioche);
                        }

                        if (nombre_joueurs == 4)
                        {
                            // pour le joueur 1
                           init_main(main_joueur1); // vide toutes les cases du tableau
                           nmb_tuiles_pioche = distribuer_tuiles(pioche_degrade, main_joueur1, nmb_tuiles_pioche);

                           //pour le joueur 2
                           init_main(main_joueur2); // vide toutes les cases du tableau
                           nmb_tuiles_pioche = distribuer_tuiles(pioche_degrade, main_joueur2, nmb_tuiles_pioche);

                           //pour le joueur 3
                           init_main(main_joueur3); // vide toutes les cases du tableau
                           nmb_tuiles_pioche = distribuer_tuiles(pioche_degrade, main_joueur3, nmb_tuiles_pioche);

                           //pour le joueur 4
                           init_main(main_joueur4); // vide toutes les cases du tableau
                           nmb_tuiles_pioche = distribuer_tuiles(pioche_degrade, main_joueur4, nmb_tuiles_pioche);
                        }
                        break;

                    case 2 ://jeu en mode normal
                        nmb_tuiles_pioche=108;
                        pioche108(pioche_normal);

                         if (nombre_joueurs==2)
                        {
                            // pour le joueur 1
                           init_main(main_joueur1); // vide toutes les cases du tableau
                           nmb_tuiles_pioche = distribuer_tuiles(pioche_normal, main_joueur1, nmb_tuiles_pioche);

                           //pour le joueur 2
                           init_main(main_joueur2); // vide toutes les cases du tableau
                           nmb_tuiles_pioche = distribuer_tuiles(pioche_normal, main_joueur2, nmb_tuiles_pioche);
                        }

                        if (nombre_joueurs == 3)
                        {
                            // pour le joueur 1
                           init_main(main_joueur1); // vide toutes les cases du tableau
                           nmb_tuiles_pioche = distribuer_tuiles(pioche_normal, main_joueur1, nmb_tuiles_pioche);

                           //pour le joueur 2
                           init_main(main_joueur2); // vide toutes les cases du tableau
                           nmb_tuiles_pioche = distribuer_tuiles(pioche_normal, main_joueur2, nmb_tuiles_pioche);

                           //pour le joueur 3
                           init_main(main_joueur3); // vide toutes les cases du tableau
                           nmb_tuiles_pioche = distribuer_tuiles(pioche_normal, main_joueur3, nmb_tuiles_pioche);
                        }

                        if (nombre_joueurs == 4)
                        {
                            // pour le joueur 1
                           init_main(main_joueur1); // vide toutes les cases du tableau
                           nmb_tuiles_pioche = distribuer_tuiles(pioche_normal, main_joueur1, nmb_tuiles_pioche);

                           //pour le joueur 2
                           init_main(main_joueur2); // vide toutes les cases du tableau
                           nmb_tuiles_pioche = distribuer_tuiles(pioche_normal, main_joueur2, nmb_tuiles_pioche);

                           //pour le joueur 3
                           init_main(main_joueur3); // vide toutes les cases du tableau
                           nmb_tuiles_pioche = distribuer_tuiles(pioche_normal, main_joueur3, nmb_tuiles_pioche);

                           //pour le joueur 4
                           init_main(main_joueur4); // vide toutes les cases du tableau
                           nmb_tuiles_pioche = distribuer_tuiles(pioche_normal, main_joueur4, nmb_tuiles_pioche);
                        }
                        break;

                    }
                    break;

                case 3 :
                    //affichage des instructions
                    Menu_instruction();
                    break;

                case 4 :
                    //affichage des scores
                    printf("\n Afficher les scores");
                    break;

                case 5 :
                    //quitter
                    break;
            }

    return 0;
}
