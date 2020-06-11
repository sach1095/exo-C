#include <stdio.h>
#include <stdlib.h>

void copie(int tableauOriginal[], int tableauCopie[], int tailleTableau);
void affiche(int tableau[], int tailleTableau);
void copie2(int tableauOriginal[], int tableauCopie[], int tailleTableau);

int main ()
{
  int tableau[4] = {7,5,10,20};
  int tableauCopie[4] = {0};

  copie(tableau, tableauCopie, 4);
  printf("\n");
  copie2(tableau, tableauCopie, 4);

  return 0;
}

void copie(int tableauOriginal[], int tableauCopie[], int tailleTableau){
  int x = 0;

    tableauCopie[0] = tableauOriginal[0];
    tableauCopie[1] = tableauOriginal[1];
    tableauCopie[2] = tableauOriginal[2];
    tableauCopie[3] = tableauOriginal[3];

    for (x = 0; x < tailleTableau ; x++) {
      printf("%d\n", tableauCopie[x]);
    }

}

void copie2(int tableauOriginal[], int tableauCopie[], int tailleTableau){
  int x = 0;
  int y = 0;

  while (tableauOriginal[y] < tailleTableau) {
    tableauCopie[y] = tableauOriginal[y];
    y++;
  }

    for (x = 0; x < tailleTableau ; x++) {
      printf("%d\n", tableauCopie[x]);
    }

}
