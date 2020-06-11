#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* strcat2(char* chaine1, const char* chaine2);

int main(){

  char chaine[20] = "coucou ";
  char *chaine2 = "ca va";

  strcat2(chaine, chaine2);

  printf("chaine 1 vaut : %s\n", chaine);

  return 0;
}

char* strcat2(char* chaine1, const char* chaine2){
  char x = 0;
  char y = 0;

  while (chaine1[x] != '\0')
    x++;

    do {
      chaine1[x] = chaine2[y];
      x++;
      y++;
    } while(chaine2[y] != '\0');

    printf("%s\n", chaine2);
}
