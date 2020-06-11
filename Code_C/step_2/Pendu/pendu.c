#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "pendu.h"


int main(int argc, char const *argv[]) {

int x = 0;
char LettreEntre = 0;
char MotsMystere[6] = "XXXXXX";
char MotsSecret[6] = "MARRON";
int i = 0;
int coupsRestants = 10;
int tailleMot = 0;

tailleMot = strlen(MotsSecret);

printf("Bienvenue dans le jeux du Pendu.\n\n");
printf("Dans ce jeux il vous faudra trouver le MotsMystere pour cela vous avez le droit a 10 erreur !\n\nBonne chance \n");

  do {
    printf("Le mots Mystere est : %s \n", MotsMystere);
    printf("Entrez une lettre.\n");
    LettreEntre = lireCaractere();
    recherche(LettreEntre, MotsMystere, MotsSecret, coupsRestants);
    printf("Le mots Mystere est : %s \n", *MotsMystere);
  } while(coupsRestants > 10 && gagnier(MotsMystere, MotsSecret, tailleMot) == 1);


  return 0;
}

void recherche(char LettreEntre, char *MotMystere, char *MotSecret,int coupsRestants){
  int x = 0;
  int i = 0;

  while (MotSecret[x] != '\0')
  {
   x++;
   if (MotSecret[x] == LettreEntre)
   {
     i++;
     MotMystere[x] == LettreEntre;
   }
   
   if (MotSecret[x] == '\0' && i == 0)
  {
    coupsRestants--;
    printf("la Lettre entre ne se trouve pas dans le mots.\n retenter votre chance il vous reste %d, *coupsRestants");
  }

  }
  
  
}

int gagnier(char *MotsMystere, char *MotsSecret, int tailleMot)
{
  int x = 0;
  int i = 0;

  for (i = 0; i < tailleMot; i++)
  {
    if (MotsSecret[i] == MotsMystere[i])
    {
      x++;
      if (x == tailleMot)
      {
        return 1;
        printf("Felicitation vous avez gagnier la partie !");
      }
      
    }
    return 0;
  }
}


char lireCaractere()
{
    char caractere = 0;

    caractere = getchar();
    caractere = toupper(caractere);

    while (getchar() != '\n') ;

    return caractere;
}
