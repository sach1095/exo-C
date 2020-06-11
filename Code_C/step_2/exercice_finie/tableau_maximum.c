#include <stdio.h>
#include <stdlib.h>

void maximumTableau(int tableau[], int tailleTableau, int valeurMax);

int main ()
{
  int tableau[6] = {7,15,9,5,20,10};
  int valeurMax = 10;

  maximumTableau(tableau, 6, valeurMax);

  return 0;
}

void maximumTableau(int tableau[], int tailleTableau, int valeurMax){
  int x = 0;
  int y = 0;

  for (x = 0; x < tailleTableau; x++)
  {
    if (tableau[x] > valeurMax)
      {
        tableau[x] = 0;
      }
  }

    for (y = 0; y < tailleTableau ; y++) {
      printf("%d\n", tableau[y]);
    }

}
