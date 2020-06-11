#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* strchr2(const char* chaine, int caractereARechercher);
char* strchr(const char* chaine, int caractereARechercher);

int main(int argc, char const *argv[]) {

  char chaine[] = "hello world", *suiteChaine = NULL ;

   suiteChaine = strchr2(chaine, 'w');

  if (suiteChaine != NULL) {
    printf("la fin de la chaine : %s\n", suiteChaine);
  }

  return 0;
}

char* strchr2(const char* chaine, int caractereARechercher){

  int x = 0;
  char chainecopier[20] = {0};
  char y = 0;

  while (chaine[x] != '\0') {
    if (chaine[x] == caractereARechercher) {
      return &chaine[x];
    }
    x++;
  }
  return NULL;
}
