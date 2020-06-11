#include <stdio.h>
#include <stdlib.h>

void ordonnerTableau(int tableau[], int tailleTableau);
int main ()
{
  int tableau[10] = {4,3,2,1,34,94,64,36,100,75};

  ordonnerTableau(tableau, 10);

  return 0;
}

void ordonnerTableau(int tableau[], int tailleTableau){
  int x = 0;
  int y = 1;
  int temp = 0;

while (x < tailleTableau && y < tailleTableau) {
  if (tableau[x] > tableau[y]) {
    temp = tableau[x];
    tableau[x] = tableau[y];
    tableau[y] = temp;
    x = -1;
    y = 0;
  }
  x++;
  y++;
}
    y = 0;

    for (y = 0; y < tailleTableau ; y++) {
      printf("%d\n", tableau[y]);
    }

}
