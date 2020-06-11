#ifndef DEF_MAIN_H
#define DEF_MAIN_H

#define MAJEUR(age) if (age >= 18) \
                    printf("vous ete majeur\n");

typedef struct Joueurs Joueurs;

struct Joueurs
{
  char Nom[20];
  char Prenom[30];
  char Age[10];

};

#endif
