#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "pendu.h"


int main(int argc, char const *argv[]) {

char LettreEntre = 0;
char MotsSecret[] = "MARRON";
int lettreTrouver[6] = {0};
int i = 0;
int coupsRestants = 10;


printf("Bienvenue dans le jeux du Pendu.\n\n");
printf("Dans ce jeux il vous faudra trouver le MotsMystere pour cela vous avez le droit a 10 erreur !\n\nBonne chance \n");

  while (coupsRestants > 0 & !gagne(lettreTrouver))
  {
    
printf("\n \n il vous reste %d coups a jouer", coupsRestants);
printf("\n quelle est le mot secret ? ");

for (i = 0; i < 6; i++)
{
  if (lettreTrouver[i])
   printf("%c", MotsSecret[i]);
   else
    printf("*");
}

printf("\n proposer une lettre : ");
LettreEntre = lireCaractere();

if (!rechercheLettre(LettreEntre, MotsSecret, lettreTrouver))
{
  coupsRestants--;
}

  }

if (gagne(lettreTrouver))
  printf("\n\nGagne ! Le mots secret etait bien : %s", MotsSecret);
else
    printf("\n\nPerdu ! Le mots secret etait : %s", MotsSecret);

printf("\n");

  return 0;
}


int rechercheLettre(char LettreEntre, char MotsSecret[], int lettreTrouver[]){

  int i = 0;
  int bonneLettre = 0;

  for (i = 0; MotsSecret[i] != '\0' ; i++)
  {
    if (LettreEntre == MotsSecret[i])
    {
      bonneLettre = 1;
      lettreTrouver[i] = 1;
    }
    
  }

 return bonneLettre;

}



int gagne(int lettreTrouver[]){
  int i = 0;
  int joueurGagne = 1;

  for (i = 0; i < 6; i++)
  {
    if (lettreTrouver[i] == 0)
      joueurGagne = 0;
    
  }
  
  return joueurGagne;
}
 

char lireCaractere()
{
    char caractere = 0;

    caractere = getchar();
    caractere = toupper(caractere);

    while (getchar() != '\n') ;

    return caractere;
}
