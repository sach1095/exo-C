#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int taillechaine(const char* chaine);

int main(){

  char *chaine = "coucou";
  int longeurdechaine = 0;

  longeurdechaine = taillechaine(chaine);

  printf("la chaine %s fait %d de long\n", chaine, longeurdechaine);

  return 0;
}

int taillechaine(const char* chaine)
{
  int x = 0;
  char y = 1;

  while (y != '\0') {
    y = chaine[x];
    x++;
  }
  x--;
printf("%d\n", x);

  return x;
}
