#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"


int main(int argc, char const *argv[]) {

  int x = 0;
  Joueurs Utilisateur[1] = {0};

  while (x++ <= 1) {

    printf("quelle est votre nom Utilisateur %d \n", x);
    scanf("%s", Utilisateur[x].Nom);
    printf("votre Prenom\n");
    scanf("%s", Utilisateur[x].Prenom);
    printf("et votre Age ?\n");
    scanf("%s", Utilisateur[x].Age);
  }

  printf("le nom complet de Joueurs 1 est %s %s et il a %s ans\n", Utilisateur[1].Nom, Utilisateur[1].Prenom, Utilisateur[1].Age);
  printf("le nom complet de Joueurs 2 est %s %s et il a %s ans\n", Utilisateur[2].Nom, Utilisateur[2].Prenom, Utilisateur[2].Age);

  return 0;
}
