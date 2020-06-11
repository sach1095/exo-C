#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"


int main(int argc, char const *argv[]) {


int *memoire = NULL;

memoire = malloc(sizeof(int));
if (memoire == NULL) {
  exit(0);
}

printf("quelle age a tu ? \n");
scanf("%d", memoire);
printf("tu a %d ans .\n", *memoire);

free(memoire);

  return 0;

}
