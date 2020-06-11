#include <stdio.h>
#include <stdlib.h>

int sommeTableau(int tableau[], int tailleTableau);

int main ()
{
  int resultafinal = 0;
  int tableau[4] = {1,5,10,20};

  resultafinal = sommeTableau(tableau, 4);
  printf("%d\n", resultafinal);

  return 0;
}

int sommeTableau(int tableau[], int tailleTableau){
  int resulta = 0;

  resulta = tableau[0] + tableau[1] + tableau[2] + tableau[3];

  return resulta;
}
