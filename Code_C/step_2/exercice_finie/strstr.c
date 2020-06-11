#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* strstr2(const char* chaine, const char* caractereARechercher);

int main(int argc, char const *argv[]) {

  char chaine[] = "Ce nom doit vaguement vous rappeler", *suiteChaine = NULL ;

   suiteChaine = strstr2(chaine, "vaguement");

  if (suiteChaine != NULL) {
    printf("la fin de la chaine :%s\n", suiteChaine);
  }

  return 0;
}

char* strstr2(const char* chaine,const char* caractereARechercher){

  int x = 0;
  int ptn = 0;
  char y = 0;

  while (chaine[x]) {
    while (chaine[x] != caractereARechercher[y])
      x++;
    ptn = x;
    while (chaine[x] == caractereARechercher[y]) {
      x++;
      y++;
      if (caractereARechercher[y] == '\0')
        return (&chaine[ptn]);
    }
    y = 0;
  }
  return 0;
}
