#include <stdio.h>

void triplepointeur(int *surnombre);

int main ()
{
  int nombre = 5;

  triplepointeur(&nombre);
  printf("%d\n", nombre);


}

void triplepointeur(int *surnombre){
  *surnombre *= 3;
}
