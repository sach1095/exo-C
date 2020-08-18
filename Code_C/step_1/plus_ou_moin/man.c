#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include <string.h>

int choixniveau()
{
    int choix = 0;
    int MAX = 1000 ;
    int MIN = 1 ;

    while (choix < 1 || choix > 6)
    {
        printf("Bonjour, veuillez selectioner le niveau .\n");
        printf("Niveau 1, nombre Mystere entre 1 et 10.\n");
        printf("Niveau 2, nombre Mystere entre 1 et 50.\n");
        printf("Niveau 3, nombre Mystere entre 1 et 100.\n");
        printf("Niveau 4, nombre Mystere entre 1 et 150.\n");
        printf("Niveau 5, nombre Mystere entre 1 et 200.\n");
        printf("Niveau 6, Le niveaux ULTIME : entre 1 et un nombre aleatoire AHAHAHAH.\n");
        printf("Quel est votre choix ? \n");
        scanf("%d", &choix);
    }
    switch (choix)
    {
        case 1:
        {
            printf("Vous avez choise le niveau 1, bonne chance !\n");
            int MAX = 10 ;
            return MAX;
        }
        case 2:
        {
             printf("Vous avez choise le niveau 2, bonne chance !\n");
             int MAX = 50 ;
             return MAX;
        }
        case 3:
        {
            printf("Vous avez choise le niveau 3, bonne chance !\n");
            int MAX = 100 ;
            return MAX;
        }
        case 4:
        {
            printf("Vous avez choise le niveau 4, bonne chance !\n");
            int MAX = 150 ;
            return MAX;
        }
        case 5:
        {
            printf("Vous avez choise le niveau 5, bonne chance !\n");
            int MAX = 200 ;
            return MAX;
        }
        case 6:
        {
            printf("Vous avez choise le LVL ULTIME, Bonne chance il va vous en falloir....AHAHAHAHAHA.\n");
            srand(time(NULL));
            MAX = (rand() % (MAX - MIN + 1)) + MIN;
            return MAX;
        }
        default:
        {
            printf("Entre errone, je choisie le niveau par default.\n");
            int MAX = 100;
            return MAX;
        }
    }
}

int main(int ac, char *av)
{
    int nombreEntre = 0;
    int nombreMystere = 0 ;
    int continuerPartie = 0 ;

 do
 {

    int MAX = choixniveau();
    int MIN = 1;

    srand(time(NULL));
    nombreMystere = (rand() % (MAX - MIN + 1)) + MIN;
    int nombreDeTour = 0 ;
    printf("\n Veuillez entrer un nombre entre %d et 1\n", MAX);
    do
    {
        scanf("%d", &nombreEntre);
        if (nombreEntre < nombreMystere)
        {
        printf("Le nombre Mystere est plus grand, retenter votre chance.\n");
        nombreDeTour++;
        }
        else if (nombreEntre > nombreMystere)
        {
            printf("Le nombre mystere est plus petit, retenter votre chance.\n");
            nombreDeTour++;
        }
        else
        {
            nombreDeTour++;
            printf("Felicitation, vous avez trouver le nombre mystere en %d tour. \n", nombreDeTour);
            printf("Souhaitez-vous recommencer ? \n oui : tapez 1. \n non : tapez 0.\n");
            scanf("%d", &continuerPartie);
        }

    } while (nombreEntre != nombreMystere); 
 } while (continuerPartie);
 return 0;
}