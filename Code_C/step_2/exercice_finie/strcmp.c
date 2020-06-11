#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int strcmp(const char* chaine1, const char* chaine2);
int strcmp2(const char* chaine1, const char* chaine2);
int main(){

  char *chaine = "coucou";
  char *chaine2 = "coucou";

  if (strcmp(chaine, chaine2) == 0)
    printf("les chaine sont identiques\n");
  else
    printf("les chaine sont differentes\n");

    if (strcmp2(chaine, chaine2) == 0)
      printf("Mes chaine sont identiques\n");
    else
      printf("Mes chaine sont differentes\n");


return 0;
}

int strcmp2(const char* chaine1, const char* chaine2)
{
  char x = 0;

  while (chaine1[x] && chaine2[x]) {
    if (chaine1[x] != chaine2[x]) {
      return (chaine1[x] - chaine2[x]);
    }
    x++;
  }
  return (chaine1[x] - chaine2[x]);
}
