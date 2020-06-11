#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"


int main(int argc, char const *argv[]) {

  Personne nombre;

  initialiserPersonne(&nombre);
  triple(&nombre.x, &nombre.y);
  MONTRE();

  return 0;

}

void triple(int *nombreatriple, int *Multiplicateur){

  *nombreatriple *= *Multiplicateur;
}

void initialiserPersonne(Personne *nombre){

  nombre->x = 5;
  (*nombre).y = 3;
}
