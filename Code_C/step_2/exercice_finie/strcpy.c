#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* strcpy2(char* copieDeLaChaine, const char* chaineACopier);

int main(){

  char *chaine = "coucou ca va";
  char chainecopier[14] = {0};

  strcpy2(chainecopier, chaine);

  printf("%s\n", chainecopier);

  return 0;
}

char* strcpy2(char* copieDeLaChaine, const char* chaineACopier){

  char x = 0;
  char y = 0;

  do {
    copieDeLaChaine[x] = chaineACopier[y];
    x++;
    y++;
  } while(chaineACopier[y] != '\0');
}
