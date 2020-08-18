#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void time(int *m, int *h);

int main(int av, char *ac)
{

    int minute = 0;
    int heure = 0;
    
    printf("\n entree le temps en minute \n");
    scanf("%d", &minute);
   
   time(&minute, &heure);
   printf("cela donne  %d h et %d minute", heure ,minute);
    
    return 0;
}

void time(int *m, int *h){
    
    *h = *m / 60;
    *m = *m % 60;
    
}