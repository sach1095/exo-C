#include <stdio.h>

void triplepointeur(int *surnombre);

int main ()
{
  int nombre = 5;
  int *pointeur = &nombre;

  triplepointeur(pointeur);
  printf("%d\n", *pointeur);

  return 0;
}

void triplepointeur(int *surnombre){
  *surnombre *= 3;
}
