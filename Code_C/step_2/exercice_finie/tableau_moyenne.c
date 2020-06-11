#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double moyenneTableau(int tableau[], int tailleTableau);

int main ()
{
  double resultafinal = 0;
  int tableau[4] = {1,5,10,20};

  resultafinal = moyenneTableau(tableau, 4);
  printf("%f\n", resultafinal);

  return 0;
}

double moyenneTableau(int tableau[], int tailleTableau){
  double resulta = 0;
  int x = 0;

  x = tableau[0] + tableau[1] + tableau[2] + tableau[3];
  resulta = x / 4;

  return resulta;
}
